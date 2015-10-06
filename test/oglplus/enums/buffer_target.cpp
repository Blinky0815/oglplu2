//  File test/oglplus/enums/buffer_target.cpp
//
//  Automatically generated file, DO NOT modify manually.
//  Edit the enumeration source files in 'source/enums/oglplus'
//  or the 'source/enums/make_enum.py' script instead.
//
//  Copyright Matus Chochlik.
//  Distributed under the Boost Software License, Version 1.0.
//  See accompanying file LICENSE_1_0.txt or copy at
//   http://www.boost.org/LICENSE_1_0.txt
//
#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE OGLPLUS_buffer_target

#include <boost/test/unit_test.hpp>
#include "common.hpp"
#include <cstring>

BOOST_AUTO_TEST_SUITE(enum_buffer_target)

BOOST_AUTO_TEST_CASE(enum_buffer_target_values)
{
	using namespace oglplus;
	enum_values ev;
	(void)ev;
	buffer_target x;
	(void)x;

#ifdef GL_ARRAY_BUFFER
	x = ev.array_buffer;
	BOOST_CHECK(x == ev.array_buffer);
# ifdef GL_ATOMIC_COUNTER_BUFFER
	BOOST_CHECK(x != ev.atomic_counter_buffer);
# endif
# ifdef GL_COPY_READ_BUFFER
	BOOST_CHECK(x != ev.copy_read_buffer);
# endif
# ifdef GL_COPY_WRITE_BUFFER
	BOOST_CHECK(x != ev.copy_write_buffer);
# endif
# ifdef GL_DISPATCH_INDIRECT_BUFFER
	BOOST_CHECK(x != ev.dispatch_indirect_buffer);
# endif
# ifdef GL_DRAW_INDIRECT_BUFFER
	BOOST_CHECK(x != ev.draw_indirect_buffer);
# endif
# ifdef GL_ELEMENT_ARRAY_BUFFER
	BOOST_CHECK(x != ev.element_array_buffer);
# endif
# ifdef GL_EXTERNAL_VIRTUAL_MEMORY_BUFFER_AMD
	BOOST_CHECK(x != ev.external_virtual_memory_buffer);
# endif
# ifdef GL_PARAMETER_BUFFER_ARB
	BOOST_CHECK(x != ev.parameter_buffer);
# endif
# ifdef GL_PIXEL_PACK_BUFFER
	BOOST_CHECK(x != ev.pixel_pack_buffer);
# endif
# ifdef GL_PIXEL_UNPACK_BUFFER
	BOOST_CHECK(x != ev.pixel_unpack_buffer);
# endif
# ifdef GL_QUERY_BUFFER
	BOOST_CHECK(x != ev.query_buffer);
# endif
# ifdef GL_SHADER_STORAGE_BUFFER
	BOOST_CHECK(x != ev.shader_storage_buffer);
# endif
# ifdef GL_TEXTURE_BUFFER
	BOOST_CHECK(x != ev.texture_buffer);
# endif
# ifdef GL_TRANSFORM_FEEDBACK_BUFFER
	BOOST_CHECK(x != ev.transform_feedback_buffer);
# endif
# ifdef GL_UNIFORM_BUFFER
	BOOST_CHECK(x != ev.uniform_buffer);
# endif
#endif

#ifdef GL_ATOMIC_COUNTER_BUFFER
	x = ev.atomic_counter_buffer;
# ifdef GL_ARRAY_BUFFER
	BOOST_CHECK(x != ev.array_buffer);
# endif
	BOOST_CHECK(x == ev.atomic_counter_buffer);
# ifdef GL_COPY_READ_BUFFER
	BOOST_CHECK(x != ev.copy_read_buffer);
# endif
# ifdef GL_COPY_WRITE_BUFFER
	BOOST_CHECK(x != ev.copy_write_buffer);
# endif
# ifdef GL_DISPATCH_INDIRECT_BUFFER
	BOOST_CHECK(x != ev.dispatch_indirect_buffer);
# endif
# ifdef GL_DRAW_INDIRECT_BUFFER
	BOOST_CHECK(x != ev.draw_indirect_buffer);
# endif
# ifdef GL_ELEMENT_ARRAY_BUFFER
	BOOST_CHECK(x != ev.element_array_buffer);
# endif
# ifdef GL_EXTERNAL_VIRTUAL_MEMORY_BUFFER_AMD
	BOOST_CHECK(x != ev.external_virtual_memory_buffer);
# endif
# ifdef GL_PARAMETER_BUFFER_ARB
	BOOST_CHECK(x != ev.parameter_buffer);
# endif
# ifdef GL_PIXEL_PACK_BUFFER
	BOOST_CHECK(x != ev.pixel_pack_buffer);
# endif
# ifdef GL_PIXEL_UNPACK_BUFFER
	BOOST_CHECK(x != ev.pixel_unpack_buffer);
# endif
# ifdef GL_QUERY_BUFFER
	BOOST_CHECK(x != ev.query_buffer);
# endif
# ifdef GL_SHADER_STORAGE_BUFFER
	BOOST_CHECK(x != ev.shader_storage_buffer);
# endif
# ifdef GL_TEXTURE_BUFFER
	BOOST_CHECK(x != ev.texture_buffer);
# endif
# ifdef GL_TRANSFORM_FEEDBACK_BUFFER
	BOOST_CHECK(x != ev.transform_feedback_buffer);
# endif
# ifdef GL_UNIFORM_BUFFER
	BOOST_CHECK(x != ev.uniform_buffer);
# endif
#endif

#ifdef GL_COPY_READ_BUFFER
	x = ev.copy_read_buffer;
# ifdef GL_ARRAY_BUFFER
	BOOST_CHECK(x != ev.array_buffer);
# endif
# ifdef GL_ATOMIC_COUNTER_BUFFER
	BOOST_CHECK(x != ev.atomic_counter_buffer);
# endif
	BOOST_CHECK(x == ev.copy_read_buffer);
# ifdef GL_COPY_WRITE_BUFFER
	BOOST_CHECK(x != ev.copy_write_buffer);
# endif
# ifdef GL_DISPATCH_INDIRECT_BUFFER
	BOOST_CHECK(x != ev.dispatch_indirect_buffer);
# endif
# ifdef GL_DRAW_INDIRECT_BUFFER
	BOOST_CHECK(x != ev.draw_indirect_buffer);
# endif
# ifdef GL_ELEMENT_ARRAY_BUFFER
	BOOST_CHECK(x != ev.element_array_buffer);
# endif
# ifdef GL_EXTERNAL_VIRTUAL_MEMORY_BUFFER_AMD
	BOOST_CHECK(x != ev.external_virtual_memory_buffer);
# endif
# ifdef GL_PARAMETER_BUFFER_ARB
	BOOST_CHECK(x != ev.parameter_buffer);
# endif
# ifdef GL_PIXEL_PACK_BUFFER
	BOOST_CHECK(x != ev.pixel_pack_buffer);
# endif
# ifdef GL_PIXEL_UNPACK_BUFFER
	BOOST_CHECK(x != ev.pixel_unpack_buffer);
# endif
# ifdef GL_QUERY_BUFFER
	BOOST_CHECK(x != ev.query_buffer);
# endif
# ifdef GL_SHADER_STORAGE_BUFFER
	BOOST_CHECK(x != ev.shader_storage_buffer);
# endif
# ifdef GL_TEXTURE_BUFFER
	BOOST_CHECK(x != ev.texture_buffer);
# endif
# ifdef GL_TRANSFORM_FEEDBACK_BUFFER
	BOOST_CHECK(x != ev.transform_feedback_buffer);
# endif
# ifdef GL_UNIFORM_BUFFER
	BOOST_CHECK(x != ev.uniform_buffer);
# endif
#endif

#ifdef GL_COPY_WRITE_BUFFER
	x = ev.copy_write_buffer;
# ifdef GL_ARRAY_BUFFER
	BOOST_CHECK(x != ev.array_buffer);
# endif
# ifdef GL_ATOMIC_COUNTER_BUFFER
	BOOST_CHECK(x != ev.atomic_counter_buffer);
# endif
# ifdef GL_COPY_READ_BUFFER
	BOOST_CHECK(x != ev.copy_read_buffer);
# endif
	BOOST_CHECK(x == ev.copy_write_buffer);
# ifdef GL_DISPATCH_INDIRECT_BUFFER
	BOOST_CHECK(x != ev.dispatch_indirect_buffer);
# endif
# ifdef GL_DRAW_INDIRECT_BUFFER
	BOOST_CHECK(x != ev.draw_indirect_buffer);
# endif
# ifdef GL_ELEMENT_ARRAY_BUFFER
	BOOST_CHECK(x != ev.element_array_buffer);
# endif
# ifdef GL_EXTERNAL_VIRTUAL_MEMORY_BUFFER_AMD
	BOOST_CHECK(x != ev.external_virtual_memory_buffer);
# endif
# ifdef GL_PARAMETER_BUFFER_ARB
	BOOST_CHECK(x != ev.parameter_buffer);
# endif
# ifdef GL_PIXEL_PACK_BUFFER
	BOOST_CHECK(x != ev.pixel_pack_buffer);
# endif
# ifdef GL_PIXEL_UNPACK_BUFFER
	BOOST_CHECK(x != ev.pixel_unpack_buffer);
# endif
# ifdef GL_QUERY_BUFFER
	BOOST_CHECK(x != ev.query_buffer);
# endif
# ifdef GL_SHADER_STORAGE_BUFFER
	BOOST_CHECK(x != ev.shader_storage_buffer);
# endif
# ifdef GL_TEXTURE_BUFFER
	BOOST_CHECK(x != ev.texture_buffer);
# endif
# ifdef GL_TRANSFORM_FEEDBACK_BUFFER
	BOOST_CHECK(x != ev.transform_feedback_buffer);
# endif
# ifdef GL_UNIFORM_BUFFER
	BOOST_CHECK(x != ev.uniform_buffer);
# endif
#endif

#ifdef GL_DISPATCH_INDIRECT_BUFFER
	x = ev.dispatch_indirect_buffer;
# ifdef GL_ARRAY_BUFFER
	BOOST_CHECK(x != ev.array_buffer);
# endif
# ifdef GL_ATOMIC_COUNTER_BUFFER
	BOOST_CHECK(x != ev.atomic_counter_buffer);
# endif
# ifdef GL_COPY_READ_BUFFER
	BOOST_CHECK(x != ev.copy_read_buffer);
# endif
# ifdef GL_COPY_WRITE_BUFFER
	BOOST_CHECK(x != ev.copy_write_buffer);
# endif
	BOOST_CHECK(x == ev.dispatch_indirect_buffer);
# ifdef GL_DRAW_INDIRECT_BUFFER
	BOOST_CHECK(x != ev.draw_indirect_buffer);
# endif
# ifdef GL_ELEMENT_ARRAY_BUFFER
	BOOST_CHECK(x != ev.element_array_buffer);
# endif
# ifdef GL_EXTERNAL_VIRTUAL_MEMORY_BUFFER_AMD
	BOOST_CHECK(x != ev.external_virtual_memory_buffer);
# endif
# ifdef GL_PARAMETER_BUFFER_ARB
	BOOST_CHECK(x != ev.parameter_buffer);
# endif
# ifdef GL_PIXEL_PACK_BUFFER
	BOOST_CHECK(x != ev.pixel_pack_buffer);
# endif
# ifdef GL_PIXEL_UNPACK_BUFFER
	BOOST_CHECK(x != ev.pixel_unpack_buffer);
# endif
# ifdef GL_QUERY_BUFFER
	BOOST_CHECK(x != ev.query_buffer);
# endif
# ifdef GL_SHADER_STORAGE_BUFFER
	BOOST_CHECK(x != ev.shader_storage_buffer);
# endif
# ifdef GL_TEXTURE_BUFFER
	BOOST_CHECK(x != ev.texture_buffer);
# endif
# ifdef GL_TRANSFORM_FEEDBACK_BUFFER
	BOOST_CHECK(x != ev.transform_feedback_buffer);
# endif
# ifdef GL_UNIFORM_BUFFER
	BOOST_CHECK(x != ev.uniform_buffer);
# endif
#endif

#ifdef GL_DRAW_INDIRECT_BUFFER
	x = ev.draw_indirect_buffer;
# ifdef GL_ARRAY_BUFFER
	BOOST_CHECK(x != ev.array_buffer);
# endif
# ifdef GL_ATOMIC_COUNTER_BUFFER
	BOOST_CHECK(x != ev.atomic_counter_buffer);
# endif
# ifdef GL_COPY_READ_BUFFER
	BOOST_CHECK(x != ev.copy_read_buffer);
# endif
# ifdef GL_COPY_WRITE_BUFFER
	BOOST_CHECK(x != ev.copy_write_buffer);
# endif
# ifdef GL_DISPATCH_INDIRECT_BUFFER
	BOOST_CHECK(x != ev.dispatch_indirect_buffer);
# endif
	BOOST_CHECK(x == ev.draw_indirect_buffer);
# ifdef GL_ELEMENT_ARRAY_BUFFER
	BOOST_CHECK(x != ev.element_array_buffer);
# endif
# ifdef GL_EXTERNAL_VIRTUAL_MEMORY_BUFFER_AMD
	BOOST_CHECK(x != ev.external_virtual_memory_buffer);
# endif
# ifdef GL_PARAMETER_BUFFER_ARB
	BOOST_CHECK(x != ev.parameter_buffer);
# endif
# ifdef GL_PIXEL_PACK_BUFFER
	BOOST_CHECK(x != ev.pixel_pack_buffer);
# endif
# ifdef GL_PIXEL_UNPACK_BUFFER
	BOOST_CHECK(x != ev.pixel_unpack_buffer);
# endif
# ifdef GL_QUERY_BUFFER
	BOOST_CHECK(x != ev.query_buffer);
# endif
# ifdef GL_SHADER_STORAGE_BUFFER
	BOOST_CHECK(x != ev.shader_storage_buffer);
# endif
# ifdef GL_TEXTURE_BUFFER
	BOOST_CHECK(x != ev.texture_buffer);
# endif
# ifdef GL_TRANSFORM_FEEDBACK_BUFFER
	BOOST_CHECK(x != ev.transform_feedback_buffer);
# endif
# ifdef GL_UNIFORM_BUFFER
	BOOST_CHECK(x != ev.uniform_buffer);
# endif
#endif

#ifdef GL_ELEMENT_ARRAY_BUFFER
	x = ev.element_array_buffer;
# ifdef GL_ARRAY_BUFFER
	BOOST_CHECK(x != ev.array_buffer);
# endif
# ifdef GL_ATOMIC_COUNTER_BUFFER
	BOOST_CHECK(x != ev.atomic_counter_buffer);
# endif
# ifdef GL_COPY_READ_BUFFER
	BOOST_CHECK(x != ev.copy_read_buffer);
# endif
# ifdef GL_COPY_WRITE_BUFFER
	BOOST_CHECK(x != ev.copy_write_buffer);
# endif
# ifdef GL_DISPATCH_INDIRECT_BUFFER
	BOOST_CHECK(x != ev.dispatch_indirect_buffer);
# endif
# ifdef GL_DRAW_INDIRECT_BUFFER
	BOOST_CHECK(x != ev.draw_indirect_buffer);
# endif
	BOOST_CHECK(x == ev.element_array_buffer);
# ifdef GL_EXTERNAL_VIRTUAL_MEMORY_BUFFER_AMD
	BOOST_CHECK(x != ev.external_virtual_memory_buffer);
# endif
# ifdef GL_PARAMETER_BUFFER_ARB
	BOOST_CHECK(x != ev.parameter_buffer);
# endif
# ifdef GL_PIXEL_PACK_BUFFER
	BOOST_CHECK(x != ev.pixel_pack_buffer);
# endif
# ifdef GL_PIXEL_UNPACK_BUFFER
	BOOST_CHECK(x != ev.pixel_unpack_buffer);
# endif
# ifdef GL_QUERY_BUFFER
	BOOST_CHECK(x != ev.query_buffer);
# endif
# ifdef GL_SHADER_STORAGE_BUFFER
	BOOST_CHECK(x != ev.shader_storage_buffer);
# endif
# ifdef GL_TEXTURE_BUFFER
	BOOST_CHECK(x != ev.texture_buffer);
# endif
# ifdef GL_TRANSFORM_FEEDBACK_BUFFER
	BOOST_CHECK(x != ev.transform_feedback_buffer);
# endif
# ifdef GL_UNIFORM_BUFFER
	BOOST_CHECK(x != ev.uniform_buffer);
# endif
#endif

#ifdef GL_EXTERNAL_VIRTUAL_MEMORY_BUFFER_AMD
	x = ev.external_virtual_memory_buffer;
# ifdef GL_ARRAY_BUFFER
	BOOST_CHECK(x != ev.array_buffer);
# endif
# ifdef GL_ATOMIC_COUNTER_BUFFER
	BOOST_CHECK(x != ev.atomic_counter_buffer);
# endif
# ifdef GL_COPY_READ_BUFFER
	BOOST_CHECK(x != ev.copy_read_buffer);
# endif
# ifdef GL_COPY_WRITE_BUFFER
	BOOST_CHECK(x != ev.copy_write_buffer);
# endif
# ifdef GL_DISPATCH_INDIRECT_BUFFER
	BOOST_CHECK(x != ev.dispatch_indirect_buffer);
# endif
# ifdef GL_DRAW_INDIRECT_BUFFER
	BOOST_CHECK(x != ev.draw_indirect_buffer);
# endif
# ifdef GL_ELEMENT_ARRAY_BUFFER
	BOOST_CHECK(x != ev.element_array_buffer);
# endif
	BOOST_CHECK(x == ev.external_virtual_memory_buffer);
# ifdef GL_PARAMETER_BUFFER_ARB
	BOOST_CHECK(x != ev.parameter_buffer);
# endif
# ifdef GL_PIXEL_PACK_BUFFER
	BOOST_CHECK(x != ev.pixel_pack_buffer);
# endif
# ifdef GL_PIXEL_UNPACK_BUFFER
	BOOST_CHECK(x != ev.pixel_unpack_buffer);
# endif
# ifdef GL_QUERY_BUFFER
	BOOST_CHECK(x != ev.query_buffer);
# endif
# ifdef GL_SHADER_STORAGE_BUFFER
	BOOST_CHECK(x != ev.shader_storage_buffer);
# endif
# ifdef GL_TEXTURE_BUFFER
	BOOST_CHECK(x != ev.texture_buffer);
# endif
# ifdef GL_TRANSFORM_FEEDBACK_BUFFER
	BOOST_CHECK(x != ev.transform_feedback_buffer);
# endif
# ifdef GL_UNIFORM_BUFFER
	BOOST_CHECK(x != ev.uniform_buffer);
# endif
#endif

#ifdef GL_PARAMETER_BUFFER_ARB
	x = ev.parameter_buffer;
# ifdef GL_ARRAY_BUFFER
	BOOST_CHECK(x != ev.array_buffer);
# endif
# ifdef GL_ATOMIC_COUNTER_BUFFER
	BOOST_CHECK(x != ev.atomic_counter_buffer);
# endif
# ifdef GL_COPY_READ_BUFFER
	BOOST_CHECK(x != ev.copy_read_buffer);
# endif
# ifdef GL_COPY_WRITE_BUFFER
	BOOST_CHECK(x != ev.copy_write_buffer);
# endif
# ifdef GL_DISPATCH_INDIRECT_BUFFER
	BOOST_CHECK(x != ev.dispatch_indirect_buffer);
# endif
# ifdef GL_DRAW_INDIRECT_BUFFER
	BOOST_CHECK(x != ev.draw_indirect_buffer);
# endif
# ifdef GL_ELEMENT_ARRAY_BUFFER
	BOOST_CHECK(x != ev.element_array_buffer);
# endif
# ifdef GL_EXTERNAL_VIRTUAL_MEMORY_BUFFER_AMD
	BOOST_CHECK(x != ev.external_virtual_memory_buffer);
# endif
	BOOST_CHECK(x == ev.parameter_buffer);
# ifdef GL_PIXEL_PACK_BUFFER
	BOOST_CHECK(x != ev.pixel_pack_buffer);
# endif
# ifdef GL_PIXEL_UNPACK_BUFFER
	BOOST_CHECK(x != ev.pixel_unpack_buffer);
# endif
# ifdef GL_QUERY_BUFFER
	BOOST_CHECK(x != ev.query_buffer);
# endif
# ifdef GL_SHADER_STORAGE_BUFFER
	BOOST_CHECK(x != ev.shader_storage_buffer);
# endif
# ifdef GL_TEXTURE_BUFFER
	BOOST_CHECK(x != ev.texture_buffer);
# endif
# ifdef GL_TRANSFORM_FEEDBACK_BUFFER
	BOOST_CHECK(x != ev.transform_feedback_buffer);
# endif
# ifdef GL_UNIFORM_BUFFER
	BOOST_CHECK(x != ev.uniform_buffer);
# endif
#endif

#ifdef GL_PIXEL_PACK_BUFFER
	x = ev.pixel_pack_buffer;
# ifdef GL_ARRAY_BUFFER
	BOOST_CHECK(x != ev.array_buffer);
# endif
# ifdef GL_ATOMIC_COUNTER_BUFFER
	BOOST_CHECK(x != ev.atomic_counter_buffer);
# endif
# ifdef GL_COPY_READ_BUFFER
	BOOST_CHECK(x != ev.copy_read_buffer);
# endif
# ifdef GL_COPY_WRITE_BUFFER
	BOOST_CHECK(x != ev.copy_write_buffer);
# endif
# ifdef GL_DISPATCH_INDIRECT_BUFFER
	BOOST_CHECK(x != ev.dispatch_indirect_buffer);
# endif
# ifdef GL_DRAW_INDIRECT_BUFFER
	BOOST_CHECK(x != ev.draw_indirect_buffer);
# endif
# ifdef GL_ELEMENT_ARRAY_BUFFER
	BOOST_CHECK(x != ev.element_array_buffer);
# endif
# ifdef GL_EXTERNAL_VIRTUAL_MEMORY_BUFFER_AMD
	BOOST_CHECK(x != ev.external_virtual_memory_buffer);
# endif
# ifdef GL_PARAMETER_BUFFER_ARB
	BOOST_CHECK(x != ev.parameter_buffer);
# endif
	BOOST_CHECK(x == ev.pixel_pack_buffer);
# ifdef GL_PIXEL_UNPACK_BUFFER
	BOOST_CHECK(x != ev.pixel_unpack_buffer);
# endif
# ifdef GL_QUERY_BUFFER
	BOOST_CHECK(x != ev.query_buffer);
# endif
# ifdef GL_SHADER_STORAGE_BUFFER
	BOOST_CHECK(x != ev.shader_storage_buffer);
# endif
# ifdef GL_TEXTURE_BUFFER
	BOOST_CHECK(x != ev.texture_buffer);
# endif
# ifdef GL_TRANSFORM_FEEDBACK_BUFFER
	BOOST_CHECK(x != ev.transform_feedback_buffer);
# endif
# ifdef GL_UNIFORM_BUFFER
	BOOST_CHECK(x != ev.uniform_buffer);
# endif
#endif

#ifdef GL_PIXEL_UNPACK_BUFFER
	x = ev.pixel_unpack_buffer;
# ifdef GL_ARRAY_BUFFER
	BOOST_CHECK(x != ev.array_buffer);
# endif
# ifdef GL_ATOMIC_COUNTER_BUFFER
	BOOST_CHECK(x != ev.atomic_counter_buffer);
# endif
# ifdef GL_COPY_READ_BUFFER
	BOOST_CHECK(x != ev.copy_read_buffer);
# endif
# ifdef GL_COPY_WRITE_BUFFER
	BOOST_CHECK(x != ev.copy_write_buffer);
# endif
# ifdef GL_DISPATCH_INDIRECT_BUFFER
	BOOST_CHECK(x != ev.dispatch_indirect_buffer);
# endif
# ifdef GL_DRAW_INDIRECT_BUFFER
	BOOST_CHECK(x != ev.draw_indirect_buffer);
# endif
# ifdef GL_ELEMENT_ARRAY_BUFFER
	BOOST_CHECK(x != ev.element_array_buffer);
# endif
# ifdef GL_EXTERNAL_VIRTUAL_MEMORY_BUFFER_AMD
	BOOST_CHECK(x != ev.external_virtual_memory_buffer);
# endif
# ifdef GL_PARAMETER_BUFFER_ARB
	BOOST_CHECK(x != ev.parameter_buffer);
# endif
# ifdef GL_PIXEL_PACK_BUFFER
	BOOST_CHECK(x != ev.pixel_pack_buffer);
# endif
	BOOST_CHECK(x == ev.pixel_unpack_buffer);
# ifdef GL_QUERY_BUFFER
	BOOST_CHECK(x != ev.query_buffer);
# endif
# ifdef GL_SHADER_STORAGE_BUFFER
	BOOST_CHECK(x != ev.shader_storage_buffer);
# endif
# ifdef GL_TEXTURE_BUFFER
	BOOST_CHECK(x != ev.texture_buffer);
# endif
# ifdef GL_TRANSFORM_FEEDBACK_BUFFER
	BOOST_CHECK(x != ev.transform_feedback_buffer);
# endif
# ifdef GL_UNIFORM_BUFFER
	BOOST_CHECK(x != ev.uniform_buffer);
# endif
#endif

#ifdef GL_QUERY_BUFFER
	x = ev.query_buffer;
# ifdef GL_ARRAY_BUFFER
	BOOST_CHECK(x != ev.array_buffer);
# endif
# ifdef GL_ATOMIC_COUNTER_BUFFER
	BOOST_CHECK(x != ev.atomic_counter_buffer);
# endif
# ifdef GL_COPY_READ_BUFFER
	BOOST_CHECK(x != ev.copy_read_buffer);
# endif
# ifdef GL_COPY_WRITE_BUFFER
	BOOST_CHECK(x != ev.copy_write_buffer);
# endif
# ifdef GL_DISPATCH_INDIRECT_BUFFER
	BOOST_CHECK(x != ev.dispatch_indirect_buffer);
# endif
# ifdef GL_DRAW_INDIRECT_BUFFER
	BOOST_CHECK(x != ev.draw_indirect_buffer);
# endif
# ifdef GL_ELEMENT_ARRAY_BUFFER
	BOOST_CHECK(x != ev.element_array_buffer);
# endif
# ifdef GL_EXTERNAL_VIRTUAL_MEMORY_BUFFER_AMD
	BOOST_CHECK(x != ev.external_virtual_memory_buffer);
# endif
# ifdef GL_PARAMETER_BUFFER_ARB
	BOOST_CHECK(x != ev.parameter_buffer);
# endif
# ifdef GL_PIXEL_PACK_BUFFER
	BOOST_CHECK(x != ev.pixel_pack_buffer);
# endif
# ifdef GL_PIXEL_UNPACK_BUFFER
	BOOST_CHECK(x != ev.pixel_unpack_buffer);
# endif
	BOOST_CHECK(x == ev.query_buffer);
# ifdef GL_SHADER_STORAGE_BUFFER
	BOOST_CHECK(x != ev.shader_storage_buffer);
# endif
# ifdef GL_TEXTURE_BUFFER
	BOOST_CHECK(x != ev.texture_buffer);
# endif
# ifdef GL_TRANSFORM_FEEDBACK_BUFFER
	BOOST_CHECK(x != ev.transform_feedback_buffer);
# endif
# ifdef GL_UNIFORM_BUFFER
	BOOST_CHECK(x != ev.uniform_buffer);
# endif
#endif

#ifdef GL_SHADER_STORAGE_BUFFER
	x = ev.shader_storage_buffer;
# ifdef GL_ARRAY_BUFFER
	BOOST_CHECK(x != ev.array_buffer);
# endif
# ifdef GL_ATOMIC_COUNTER_BUFFER
	BOOST_CHECK(x != ev.atomic_counter_buffer);
# endif
# ifdef GL_COPY_READ_BUFFER
	BOOST_CHECK(x != ev.copy_read_buffer);
# endif
# ifdef GL_COPY_WRITE_BUFFER
	BOOST_CHECK(x != ev.copy_write_buffer);
# endif
# ifdef GL_DISPATCH_INDIRECT_BUFFER
	BOOST_CHECK(x != ev.dispatch_indirect_buffer);
# endif
# ifdef GL_DRAW_INDIRECT_BUFFER
	BOOST_CHECK(x != ev.draw_indirect_buffer);
# endif
# ifdef GL_ELEMENT_ARRAY_BUFFER
	BOOST_CHECK(x != ev.element_array_buffer);
# endif
# ifdef GL_EXTERNAL_VIRTUAL_MEMORY_BUFFER_AMD
	BOOST_CHECK(x != ev.external_virtual_memory_buffer);
# endif
# ifdef GL_PARAMETER_BUFFER_ARB
	BOOST_CHECK(x != ev.parameter_buffer);
# endif
# ifdef GL_PIXEL_PACK_BUFFER
	BOOST_CHECK(x != ev.pixel_pack_buffer);
# endif
# ifdef GL_PIXEL_UNPACK_BUFFER
	BOOST_CHECK(x != ev.pixel_unpack_buffer);
# endif
# ifdef GL_QUERY_BUFFER
	BOOST_CHECK(x != ev.query_buffer);
# endif
	BOOST_CHECK(x == ev.shader_storage_buffer);
# ifdef GL_TEXTURE_BUFFER
	BOOST_CHECK(x != ev.texture_buffer);
# endif
# ifdef GL_TRANSFORM_FEEDBACK_BUFFER
	BOOST_CHECK(x != ev.transform_feedback_buffer);
# endif
# ifdef GL_UNIFORM_BUFFER
	BOOST_CHECK(x != ev.uniform_buffer);
# endif
#endif

#ifdef GL_TEXTURE_BUFFER
	x = ev.texture_buffer;
# ifdef GL_ARRAY_BUFFER
	BOOST_CHECK(x != ev.array_buffer);
# endif
# ifdef GL_ATOMIC_COUNTER_BUFFER
	BOOST_CHECK(x != ev.atomic_counter_buffer);
# endif
# ifdef GL_COPY_READ_BUFFER
	BOOST_CHECK(x != ev.copy_read_buffer);
# endif
# ifdef GL_COPY_WRITE_BUFFER
	BOOST_CHECK(x != ev.copy_write_buffer);
# endif
# ifdef GL_DISPATCH_INDIRECT_BUFFER
	BOOST_CHECK(x != ev.dispatch_indirect_buffer);
# endif
# ifdef GL_DRAW_INDIRECT_BUFFER
	BOOST_CHECK(x != ev.draw_indirect_buffer);
# endif
# ifdef GL_ELEMENT_ARRAY_BUFFER
	BOOST_CHECK(x != ev.element_array_buffer);
# endif
# ifdef GL_EXTERNAL_VIRTUAL_MEMORY_BUFFER_AMD
	BOOST_CHECK(x != ev.external_virtual_memory_buffer);
# endif
# ifdef GL_PARAMETER_BUFFER_ARB
	BOOST_CHECK(x != ev.parameter_buffer);
# endif
# ifdef GL_PIXEL_PACK_BUFFER
	BOOST_CHECK(x != ev.pixel_pack_buffer);
# endif
# ifdef GL_PIXEL_UNPACK_BUFFER
	BOOST_CHECK(x != ev.pixel_unpack_buffer);
# endif
# ifdef GL_QUERY_BUFFER
	BOOST_CHECK(x != ev.query_buffer);
# endif
# ifdef GL_SHADER_STORAGE_BUFFER
	BOOST_CHECK(x != ev.shader_storage_buffer);
# endif
	BOOST_CHECK(x == ev.texture_buffer);
# ifdef GL_TRANSFORM_FEEDBACK_BUFFER
	BOOST_CHECK(x != ev.transform_feedback_buffer);
# endif
# ifdef GL_UNIFORM_BUFFER
	BOOST_CHECK(x != ev.uniform_buffer);
# endif
#endif

#ifdef GL_TRANSFORM_FEEDBACK_BUFFER
	x = ev.transform_feedback_buffer;
# ifdef GL_ARRAY_BUFFER
	BOOST_CHECK(x != ev.array_buffer);
# endif
# ifdef GL_ATOMIC_COUNTER_BUFFER
	BOOST_CHECK(x != ev.atomic_counter_buffer);
# endif
# ifdef GL_COPY_READ_BUFFER
	BOOST_CHECK(x != ev.copy_read_buffer);
# endif
# ifdef GL_COPY_WRITE_BUFFER
	BOOST_CHECK(x != ev.copy_write_buffer);
# endif
# ifdef GL_DISPATCH_INDIRECT_BUFFER
	BOOST_CHECK(x != ev.dispatch_indirect_buffer);
# endif
# ifdef GL_DRAW_INDIRECT_BUFFER
	BOOST_CHECK(x != ev.draw_indirect_buffer);
# endif
# ifdef GL_ELEMENT_ARRAY_BUFFER
	BOOST_CHECK(x != ev.element_array_buffer);
# endif
# ifdef GL_EXTERNAL_VIRTUAL_MEMORY_BUFFER_AMD
	BOOST_CHECK(x != ev.external_virtual_memory_buffer);
# endif
# ifdef GL_PARAMETER_BUFFER_ARB
	BOOST_CHECK(x != ev.parameter_buffer);
# endif
# ifdef GL_PIXEL_PACK_BUFFER
	BOOST_CHECK(x != ev.pixel_pack_buffer);
# endif
# ifdef GL_PIXEL_UNPACK_BUFFER
	BOOST_CHECK(x != ev.pixel_unpack_buffer);
# endif
# ifdef GL_QUERY_BUFFER
	BOOST_CHECK(x != ev.query_buffer);
# endif
# ifdef GL_SHADER_STORAGE_BUFFER
	BOOST_CHECK(x != ev.shader_storage_buffer);
# endif
# ifdef GL_TEXTURE_BUFFER
	BOOST_CHECK(x != ev.texture_buffer);
# endif
	BOOST_CHECK(x == ev.transform_feedback_buffer);
# ifdef GL_UNIFORM_BUFFER
	BOOST_CHECK(x != ev.uniform_buffer);
# endif
#endif

#ifdef GL_UNIFORM_BUFFER
	x = ev.uniform_buffer;
# ifdef GL_ARRAY_BUFFER
	BOOST_CHECK(x != ev.array_buffer);
# endif
# ifdef GL_ATOMIC_COUNTER_BUFFER
	BOOST_CHECK(x != ev.atomic_counter_buffer);
# endif
# ifdef GL_COPY_READ_BUFFER
	BOOST_CHECK(x != ev.copy_read_buffer);
# endif
# ifdef GL_COPY_WRITE_BUFFER
	BOOST_CHECK(x != ev.copy_write_buffer);
# endif
# ifdef GL_DISPATCH_INDIRECT_BUFFER
	BOOST_CHECK(x != ev.dispatch_indirect_buffer);
# endif
# ifdef GL_DRAW_INDIRECT_BUFFER
	BOOST_CHECK(x != ev.draw_indirect_buffer);
# endif
# ifdef GL_ELEMENT_ARRAY_BUFFER
	BOOST_CHECK(x != ev.element_array_buffer);
# endif
# ifdef GL_EXTERNAL_VIRTUAL_MEMORY_BUFFER_AMD
	BOOST_CHECK(x != ev.external_virtual_memory_buffer);
# endif
# ifdef GL_PARAMETER_BUFFER_ARB
	BOOST_CHECK(x != ev.parameter_buffer);
# endif
# ifdef GL_PIXEL_PACK_BUFFER
	BOOST_CHECK(x != ev.pixel_pack_buffer);
# endif
# ifdef GL_PIXEL_UNPACK_BUFFER
	BOOST_CHECK(x != ev.pixel_unpack_buffer);
# endif
# ifdef GL_QUERY_BUFFER
	BOOST_CHECK(x != ev.query_buffer);
# endif
# ifdef GL_SHADER_STORAGE_BUFFER
	BOOST_CHECK(x != ev.shader_storage_buffer);
# endif
# ifdef GL_TEXTURE_BUFFER
	BOOST_CHECK(x != ev.texture_buffer);
# endif
# ifdef GL_TRANSFORM_FEEDBACK_BUFFER
	BOOST_CHECK(x != ev.transform_feedback_buffer);
# endif
	BOOST_CHECK(x == ev.uniform_buffer);
#endif
}

BOOST_AUTO_TEST_CASE(enum_buffer_target_names)
{
	using namespace oglplus;
	enum_values ev;
	(void)ev;
	buffer_target x;
	(void)x;

#ifdef GL_ARRAY_BUFFER
	x = ev.array_buffer;
	BOOST_ASSERT(enum_value_name(x).data() != nullptr);
	BOOST_CHECK(std::strcmp(
		enum_value_name(x).data(),
		"ARRAY_BUFFER"
	) == 0);
#endif

#ifdef GL_ATOMIC_COUNTER_BUFFER
	x = ev.atomic_counter_buffer;
	BOOST_ASSERT(enum_value_name(x).data() != nullptr);
	BOOST_CHECK(std::strcmp(
		enum_value_name(x).data(),
		"ATOMIC_COUNTER_BUFFER"
	) == 0);
#endif

#ifdef GL_COPY_READ_BUFFER
	x = ev.copy_read_buffer;
	BOOST_ASSERT(enum_value_name(x).data() != nullptr);
	BOOST_CHECK(std::strcmp(
		enum_value_name(x).data(),
		"COPY_READ_BUFFER"
	) == 0);
#endif

#ifdef GL_COPY_WRITE_BUFFER
	x = ev.copy_write_buffer;
	BOOST_ASSERT(enum_value_name(x).data() != nullptr);
	BOOST_CHECK(std::strcmp(
		enum_value_name(x).data(),
		"COPY_WRITE_BUFFER"
	) == 0);
#endif

#ifdef GL_DISPATCH_INDIRECT_BUFFER
	x = ev.dispatch_indirect_buffer;
	BOOST_ASSERT(enum_value_name(x).data() != nullptr);
	BOOST_CHECK(std::strcmp(
		enum_value_name(x).data(),
		"DISPATCH_INDIRECT_BUFFER"
	) == 0);
#endif

#ifdef GL_DRAW_INDIRECT_BUFFER
	x = ev.draw_indirect_buffer;
	BOOST_ASSERT(enum_value_name(x).data() != nullptr);
	BOOST_CHECK(std::strcmp(
		enum_value_name(x).data(),
		"DRAW_INDIRECT_BUFFER"
	) == 0);
#endif

#ifdef GL_ELEMENT_ARRAY_BUFFER
	x = ev.element_array_buffer;
	BOOST_ASSERT(enum_value_name(x).data() != nullptr);
	BOOST_CHECK(std::strcmp(
		enum_value_name(x).data(),
		"ELEMENT_ARRAY_BUFFER"
	) == 0);
#endif

#ifdef GL_EXTERNAL_VIRTUAL_MEMORY_BUFFER_AMD
	x = ev.external_virtual_memory_buffer;
	BOOST_ASSERT(enum_value_name(x).data() != nullptr);
	BOOST_CHECK(std::strcmp(
		enum_value_name(x).data(),
		"EXTERNAL_VIRTUAL_MEMORY_BUFFER_AMD"
	) == 0);
#endif

#ifdef GL_PARAMETER_BUFFER_ARB
	x = ev.parameter_buffer;
	BOOST_ASSERT(enum_value_name(x).data() != nullptr);
	BOOST_CHECK(std::strcmp(
		enum_value_name(x).data(),
		"PARAMETER_BUFFER_ARB"
	) == 0);
#endif

#ifdef GL_PIXEL_PACK_BUFFER
	x = ev.pixel_pack_buffer;
	BOOST_ASSERT(enum_value_name(x).data() != nullptr);
	BOOST_CHECK(std::strcmp(
		enum_value_name(x).data(),
		"PIXEL_PACK_BUFFER"
	) == 0);
#endif

#ifdef GL_PIXEL_UNPACK_BUFFER
	x = ev.pixel_unpack_buffer;
	BOOST_ASSERT(enum_value_name(x).data() != nullptr);
	BOOST_CHECK(std::strcmp(
		enum_value_name(x).data(),
		"PIXEL_UNPACK_BUFFER"
	) == 0);
#endif

#ifdef GL_QUERY_BUFFER
	x = ev.query_buffer;
	BOOST_ASSERT(enum_value_name(x).data() != nullptr);
	BOOST_CHECK(std::strcmp(
		enum_value_name(x).data(),
		"QUERY_BUFFER"
	) == 0);
#endif

#ifdef GL_SHADER_STORAGE_BUFFER
	x = ev.shader_storage_buffer;
	BOOST_ASSERT(enum_value_name(x).data() != nullptr);
	BOOST_CHECK(std::strcmp(
		enum_value_name(x).data(),
		"SHADER_STORAGE_BUFFER"
	) == 0);
#endif

#ifdef GL_TEXTURE_BUFFER
	x = ev.texture_buffer;
	BOOST_ASSERT(enum_value_name(x).data() != nullptr);
	BOOST_CHECK(std::strcmp(
		enum_value_name(x).data(),
		"TEXTURE_BUFFER"
	) == 0);
#endif

#ifdef GL_TRANSFORM_FEEDBACK_BUFFER
	x = ev.transform_feedback_buffer;
	BOOST_ASSERT(enum_value_name(x).data() != nullptr);
	BOOST_CHECK(std::strcmp(
		enum_value_name(x).data(),
		"TRANSFORM_FEEDBACK_BUFFER"
	) == 0);
#endif

#ifdef GL_UNIFORM_BUFFER
	x = ev.uniform_buffer;
	BOOST_ASSERT(enum_value_name(x).data() != nullptr);
	BOOST_CHECK(std::strcmp(
		enum_value_name(x).data(),
		"UNIFORM_BUFFER"
	) == 0);
#endif
}

BOOST_AUTO_TEST_SUITE_END()
