//  File test/oglplus/enums/patch_parameter.cpp
//
//  Automatically generated file, DO NOT modify manually.
//  Edit the enumeration source files in 'source/enums/oglplus'
//  or the 'source/enums/make_enum.py' script instead.
//
//  Copyright Matus Chochlik.
//  Distributed under the Boost Software License, Version 1.0.
//  See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt
//
#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE OGLPLUS_patch_parameter

#include <boost/test/unit_test.hpp>
#include "common.hpp"
#include <cstring>

BOOST_AUTO_TEST_SUITE(enum_patch_parameter)

BOOST_AUTO_TEST_CASE(enum_patch_parameter_values)
{
	using namespace oglplus;
	enum_values ev;
	(void)ev;
	patch_parameter x;
	(void)x;

#ifdef GL_PATCH_DEFAULT_INNER_LEVEL
	x = ev.patch_default_inner_level;
	BOOST_CHECK(x == ev.patch_default_inner_level);
# ifdef GL_PATCH_DEFAULT_OUTER_LEVEL
	BOOST_CHECK(x != ev.patch_default_outer_level);
# endif
# ifdef GL_PATCH_VERTICES
	BOOST_CHECK(x != ev.patch_vertices);
# endif
#endif

#ifdef GL_PATCH_DEFAULT_OUTER_LEVEL
	x = ev.patch_default_outer_level;
# ifdef GL_PATCH_DEFAULT_INNER_LEVEL
	BOOST_CHECK(x != ev.patch_default_inner_level);
# endif
	BOOST_CHECK(x == ev.patch_default_outer_level);
# ifdef GL_PATCH_VERTICES
	BOOST_CHECK(x != ev.patch_vertices);
# endif
#endif

#ifdef GL_PATCH_VERTICES
	x = ev.patch_vertices;
# ifdef GL_PATCH_DEFAULT_INNER_LEVEL
	BOOST_CHECK(x != ev.patch_default_inner_level);
# endif
# ifdef GL_PATCH_DEFAULT_OUTER_LEVEL
	BOOST_CHECK(x != ev.patch_default_outer_level);
# endif
	BOOST_CHECK(x == ev.patch_vertices);
#endif
}

BOOST_AUTO_TEST_CASE(enum_patch_parameter_names)
{
	using namespace oglplus;
	enum_values ev;
	(void)ev;
	patch_parameter x;
	(void)x;

#ifdef GL_PATCH_DEFAULT_INNER_LEVEL
	x = ev.patch_default_inner_level;
	BOOST_ASSERT(enum_value_name(x).data() != nullptr);
	BOOST_CHECK(std::strcmp(
		enum_value_name(x).data(),
		"PATCH_DEFAULT_INNER_LEVEL"
	) == 0);
#endif

#ifdef GL_PATCH_DEFAULT_OUTER_LEVEL
	x = ev.patch_default_outer_level;
	BOOST_ASSERT(enum_value_name(x).data() != nullptr);
	BOOST_CHECK(std::strcmp(
		enum_value_name(x).data(),
		"PATCH_DEFAULT_OUTER_LEVEL"
	) == 0);
#endif

#ifdef GL_PATCH_VERTICES
	x = ev.patch_vertices;
	BOOST_ASSERT(enum_value_name(x).data() != nullptr);
	BOOST_CHECK(std::strcmp(
		enum_value_name(x).data(),
		"PATCH_VERTICES"
	) == 0);
#endif
}

BOOST_AUTO_TEST_SUITE_END()
