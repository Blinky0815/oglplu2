/**
 *  @file oglplus/utils/std_fixes.hpp
 *
 *  Copyright Matus Chochlik.
 *  Distributed under the Boost Software License, Version 1.0.
 *  See accompanying file LICENSE_1_0.txt or copy at
 *  https://www.boost.org/LICENSE_1_0.txt
 */

#ifndef OGLPLUS_UTILS_STD_FIXES_1509260923_HPP
#define OGLPLUS_UTILS_STD_FIXES_1509260923_HPP

namespace std {

template <bool B, class T, class F>
using conditional_t = typename conditional<B,T,F>::type;

template <class T>
using decay_t = typename decay<T>::type;

template <bool B, class T = void>
using enable_if_t = typename enable_if<B,T>::type;

template <class T>
using remove_all_extents_t = typename remove_all_extents<T>::type;

template <class T>
using remove_const_t = typename remove_const<T>::type;

template <class T>
using remove_cv_t = typename remove_cv<T>::type;

template <class T>
using remove_reference_t = typename remove_reference<T>::type;

} // namespace std

#endif // include guard