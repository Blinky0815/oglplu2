/**
 *  @file oglplus/texgen/fallback_input.hpp
 *
 *  Copyright Matus Chochlik.
 *  Distributed under the Boost Software License, Version 1.0.
 *  See accompanying file LICENSE_1_0.txt or copy at
 *   http://www.boost.org/LICENSE_1_0.txt
 */
#ifndef OGLPLUS_TEXGEN_FALLBACK_INPUT_1509260923_HPP
#define OGLPLUS_TEXGEN_FALLBACK_INPUT_1509260923_HPP

#include "base_input.hpp"
#include "const_output.hpp"

namespace oglplus {
namespace texgen {

template <typename FallbackOutput>
class fallback_input : public base_input {
private:
    FallbackOutput _fallback;

public:
    fallback_input(fallback_input&&) = default;

    fallback_input(node_intf& parent, const cstr_ref& name)
      : base_input(parent, name)
      , _fallback(parent) {
    }

    template <typename... P>
    fallback_input(node_intf& parent, const cstr_ref& name, P&&... p)
      : base_input(parent, name)
      , _fallback(parent, std::forward<P>(p)...) {
    }

    FallbackOutput& fallback(void) noexcept {
	return _fallback;
    }

    bool accepts_value_type(slot_data_type) override {
	return true;
    }

    output_intf& output(void) {
	if(is_connected()) {
	    return connected_output();
	} else {
	    return fallback();
	}
    }

    bool set_default_value(
      eagine::valid_if_between<span_size_t, 0, 3> c, float v) override {
	return fallback().set_default_value(c.value(), v);
    }

    slot_data_type value_type(void) {
	return output().value_type();
    }

    std::ostream& definitions(
      std::ostream& out, compile_context& ctxt) override {
	return output().definitions(out, ctxt);
    }

    std::ostream& expression(
      std::ostream& out, compile_context& ctxt) override {
	return output().expression(out, ctxt);
    }
};

template <typename T>
using input_with_const_default = fallback_input<constant_output<T>>;

} // namespace texgen
} // namespace oglplus

#endif // include guard
