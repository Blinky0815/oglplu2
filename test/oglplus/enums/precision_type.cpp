//  File test/oglplus/enums/precision_type.cpp
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
#define BOOST_TEST_MODULE OGLPLUS_precision_type

#include <boost/test/unit_test.hpp>
#include "common.hpp"
#include <cstring>

BOOST_AUTO_TEST_SUITE(enum_precision_type)

BOOST_AUTO_TEST_CASE(enum_precision_type_values)
{
	using namespace oglplus;
	enum_values ev;
	(void)ev;
	precision_type x;
	(void)x;

#ifdef GL_HIGH_FLOAT
	x = ev.high_float;
	BOOST_CHECK(x == ev.high_float);
# ifdef GL_HIGH_INT
	BOOST_CHECK(x != ev.high_int);
# endif
# ifdef GL_LOW_FLOAT
	BOOST_CHECK(x != ev.low_float);
# endif
# ifdef GL_LOW_INT
	BOOST_CHECK(x != ev.low_int);
# endif
# ifdef GL_MEDIUM_FLOAT
	BOOST_CHECK(x != ev.medium_float);
# endif
# ifdef GL_MEDIUM_INT
	BOOST_CHECK(x != ev.medium_int);
# endif
#endif

#ifdef GL_HIGH_INT
	x = ev.high_int;
# ifdef GL_HIGH_FLOAT
	BOOST_CHECK(x != ev.high_float);
# endif
	BOOST_CHECK(x == ev.high_int);
# ifdef GL_LOW_FLOAT
	BOOST_CHECK(x != ev.low_float);
# endif
# ifdef GL_LOW_INT
	BOOST_CHECK(x != ev.low_int);
# endif
# ifdef GL_MEDIUM_FLOAT
	BOOST_CHECK(x != ev.medium_float);
# endif
# ifdef GL_MEDIUM_INT
	BOOST_CHECK(x != ev.medium_int);
# endif
#endif

#ifdef GL_LOW_FLOAT
	x = ev.low_float;
# ifdef GL_HIGH_FLOAT
	BOOST_CHECK(x != ev.high_float);
# endif
# ifdef GL_HIGH_INT
	BOOST_CHECK(x != ev.high_int);
# endif
	BOOST_CHECK(x == ev.low_float);
# ifdef GL_LOW_INT
	BOOST_CHECK(x != ev.low_int);
# endif
# ifdef GL_MEDIUM_FLOAT
	BOOST_CHECK(x != ev.medium_float);
# endif
# ifdef GL_MEDIUM_INT
	BOOST_CHECK(x != ev.medium_int);
# endif
#endif

#ifdef GL_LOW_INT
	x = ev.low_int;
# ifdef GL_HIGH_FLOAT
	BOOST_CHECK(x != ev.high_float);
# endif
# ifdef GL_HIGH_INT
	BOOST_CHECK(x != ev.high_int);
# endif
# ifdef GL_LOW_FLOAT
	BOOST_CHECK(x != ev.low_float);
# endif
	BOOST_CHECK(x == ev.low_int);
# ifdef GL_MEDIUM_FLOAT
	BOOST_CHECK(x != ev.medium_float);
# endif
# ifdef GL_MEDIUM_INT
	BOOST_CHECK(x != ev.medium_int);
# endif
#endif

#ifdef GL_MEDIUM_FLOAT
	x = ev.medium_float;
# ifdef GL_HIGH_FLOAT
	BOOST_CHECK(x != ev.high_float);
# endif
# ifdef GL_HIGH_INT
	BOOST_CHECK(x != ev.high_int);
# endif
# ifdef GL_LOW_FLOAT
	BOOST_CHECK(x != ev.low_float);
# endif
# ifdef GL_LOW_INT
	BOOST_CHECK(x != ev.low_int);
# endif
	BOOST_CHECK(x == ev.medium_float);
# ifdef GL_MEDIUM_INT
	BOOST_CHECK(x != ev.medium_int);
# endif
#endif

#ifdef GL_MEDIUM_INT
	x = ev.medium_int;
# ifdef GL_HIGH_FLOAT
	BOOST_CHECK(x != ev.high_float);
# endif
# ifdef GL_HIGH_INT
	BOOST_CHECK(x != ev.high_int);
# endif
# ifdef GL_LOW_FLOAT
	BOOST_CHECK(x != ev.low_float);
# endif
# ifdef GL_LOW_INT
	BOOST_CHECK(x != ev.low_int);
# endif
# ifdef GL_MEDIUM_FLOAT
	BOOST_CHECK(x != ev.medium_float);
# endif
	BOOST_CHECK(x == ev.medium_int);
#endif
}

BOOST_AUTO_TEST_CASE(enum_precision_type_names)
{
	using namespace oglplus;
	enum_values ev;
	(void)ev;
	precision_type x;
	(void)x;

#ifdef GL_HIGH_FLOAT
	x = ev.high_float;
	BOOST_ASSERT(enum_value_name(x).data() != nullptr);
	BOOST_CHECK(std::strcmp(
		enum_value_name(x).data(),
		"HIGH_FLOAT"
	) == 0);
#endif

#ifdef GL_HIGH_INT
	x = ev.high_int;
	BOOST_ASSERT(enum_value_name(x).data() != nullptr);
	BOOST_CHECK(std::strcmp(
		enum_value_name(x).data(),
		"HIGH_INT"
	) == 0);
#endif

#ifdef GL_LOW_FLOAT
	x = ev.low_float;
	BOOST_ASSERT(enum_value_name(x).data() != nullptr);
	BOOST_CHECK(std::strcmp(
		enum_value_name(x).data(),
		"LOW_FLOAT"
	) == 0);
#endif

#ifdef GL_LOW_INT
	x = ev.low_int;
	BOOST_ASSERT(enum_value_name(x).data() != nullptr);
	BOOST_CHECK(std::strcmp(
		enum_value_name(x).data(),
		"LOW_INT"
	) == 0);
#endif

#ifdef GL_MEDIUM_FLOAT
	x = ev.medium_float;
	BOOST_ASSERT(enum_value_name(x).data() != nullptr);
	BOOST_CHECK(std::strcmp(
		enum_value_name(x).data(),
		"MEDIUM_FLOAT"
	) == 0);
#endif

#ifdef GL_MEDIUM_INT
	x = ev.medium_int;
	BOOST_ASSERT(enum_value_name(x).data() != nullptr);
	BOOST_CHECK(std::strcmp(
		enum_value_name(x).data(),
		"MEDIUM_INT"
	) == 0);
#endif
}

BOOST_AUTO_TEST_SUITE_END()
