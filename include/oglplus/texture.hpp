/**
 *  @file oglplus/texture.hpp
 *
 *  Copyright Matus Chochlik.
 *  Distributed under the Boost Software License, Version 1.0.
 *  See accompanying file LICENSE_1_0.txt or copy at
 *  https://www.boost.org/LICENSE_1_0.txt
 */
#ifndef OGLPLUS_TEXTURE_1509260923_HPP
#define OGLPLUS_TEXTURE_1509260923_HPP

#include "object/gl_name.hpp"
#include "utils/gl_func.hpp"
#include "error/handling.hpp"

namespace oglplus {
namespace tag {

using texture = gl_obj_tag<GL_TEXTURE>;

} // namespace tag

using texture_name = object_name<tag::texture>;
using texture = object_owner<tag::texture>;

template <>
struct obj_gen_del_ops<tag::texture>
{
	static
	deferred_error_handler
	_gen(array_view<GLuint> names)
	noexcept
	{
		OGLPLUS_GLFUNC(GenTextures)(
			GLsizei(names.size()),
			names.data()
		);
		OGLPLUS_VERIFY_SIMPLE(GenTextures,severe);
		return {};
	}

	static
	deferred_error_handler
	_delete(array_view<GLuint> names)
	noexcept
	{
		OGLPLUS_GLFUNC(DeleteTextures)(
			GLsizei(names.size()),
			names.data()
		);
		OGLPLUS_VERIFY_SIMPLE(DeleteTextures,severe);
		return {};
	}

	static
	outcome<bool> _is_a(GLuint name)
	noexcept
	{
		GLboolean res = OGLPLUS_GLFUNC(IsTexture)(name);
		OGLPLUS_VERIFY_SIMPLE(IsTexture,warning);
		return res == GL_TRUE;
	}
};

} // namespace oglplus

#endif // include guard