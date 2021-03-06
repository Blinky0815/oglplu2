/**
 *  @file eagine/enum_range.hpp
 *
 *  Copyright Matus Chochlik.
 *  Distributed under the Boost Software License, Version 1.0.
 *  See accompanying file LICENSE_1_0.txt or copy at
 *   http://www.boost.org/LICENSE_1_0.txt
 */

#ifndef EAGINE_ENUM_RANGE_1509260923_HPP
#define EAGINE_ENUM_RANGE_1509260923_HPP

#include "enum_class.hpp"
#include "iterator.hpp"
#include <cassert>
#include <cstdint>
#include <utility>

namespace eagine {

template <typename EnumClass>
class enumerated_value_range;

template <typename EnumClass, typename T, unsigned LibId, unsigned EnumId>
class enumerated_value_range<enum_class<EnumClass, T, LibId, EnumId>> {
private:
    const T* _begin;
    const T* _end;

    typedef enum_class<EnumClass, T, LibId, EnumId> _ec_t;

    static _ec_t _wrap_enum(T e) noexcept {
	return _ec_t{e};
    }

public:
    typedef _ec_t value_type;
    typedef span_size_t size_type;

    explicit enumerated_value_range(span<const T> v) noexcept
      : _begin(v.data())
      , _end(v.data() + v.size()) {
	assert(_begin <= _end);
    }

    explicit enumerated_value_range(
      std::pair<const void*, size_type> p) noexcept
      : enumerated_value_range(
	  span<const T>{static_cast<const T*>(p.first), p.second}) {
    }

    typedef transforming_iterator<const T*, _ec_t, _ec_t, _ec_t (*)(T) noexcept>
      iterator;

    size_type size(void) const noexcept {
	return size_type(_end - _begin);
    }

    iterator begin(void) const noexcept {
	return iterator(_begin, &_wrap_enum);
    }

    iterator end(void) const noexcept {
	return iterator(_end, &_wrap_enum);
    }
};

} // namespace eagine

#endif // include guard
