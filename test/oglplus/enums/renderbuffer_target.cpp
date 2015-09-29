//  File test/oglplus/enums/renderbuffer_target.cpp
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
#define BOOST_TEST_MODULE OGLPLUS_renderbuffer_target

#include <boost/test/unit_test.hpp>
#include "common.hpp"

BOOST_AUTO_TEST_SUITE(enum_renderbuffer_target)

BOOST_AUTO_TEST_CASE(enum_renderbuffer_target_values)
{
	using namespace oglplus;
	enum_values ev;
	renderbuffer_target x;

#ifdef GL_RENDERBUFFER
	x = ev.renderbuffer;
	BOOST_CHECK(x == ev.renderbuffer);
#endif
}

BOOST_AUTO_TEST_SUITE_END()