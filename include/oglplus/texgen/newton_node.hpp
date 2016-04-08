/**
 *  @file oglplus/texgen/newton_node.hpp
 *
 *  Copyright Matus Chochlik.
 *  Distributed under the Boost Software License, Version 1.0.
 *  See accompanying file LICENSE_1_0.txt or copy at
 *   http://www.boost.org/LICENSE_1_0.txt
 */
#ifndef OGLPLUS_TEXGEN_NEWTON_NODE_1509260923_HPP
#define OGLPLUS_TEXGEN_NEWTON_NODE_1509260923_HPP

#include "base_node.hpp"

namespace oglplus {
namespace texgen {

enum class newton_function
{
	xe3minus1,
	xe4minus1
};

class newton_output
 : public base_output
{
private:
	newton_function _function;

	cstr_ref _func_name(void) const;
public:
	newton_output(node_intf& parent, newton_function);

	cstr_ref type_name(void)
	override;

	slot_data_type value_type(void)
	override;

	std::ostream& definitions(std::ostream& out, compile_context& ctxt)
	override;
};

class newton_node
 : public base_single_output_node
{
private:
	newton_output _output;
public:
	newton_node(void);

	newton_node(newton_function);

	base_output& single_output(void)
	override;
};

} // namespace texgen
} // namespace oglplus

#if !OGLPLUS_LINK_LIBRARY || defined(OGLPLUS_IMPLEMENTING_LIBRARY)
#include <oglplus/texgen/newton_node.inl>
#endif

#endif // include guard
