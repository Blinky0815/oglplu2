//  File test/oglplus/enums/image_unit_format.cpp
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
#define BOOST_TEST_MODULE OGLPLUS_image_unit_format

#include <boost/test/unit_test.hpp>
#include "common.hpp"

BOOST_AUTO_TEST_SUITE(enum_image_unit_format)

BOOST_AUTO_TEST_CASE(enum_image_unit_format_values)
{
	using namespace oglplus;
	enum_values ev;
	image_unit_format x;

#ifdef GL_R11F_G11F_B10F
	x = ev.r11f_g11f_b10f;
	BOOST_CHECK(x == ev.r11f_g11f_b10f);
# ifdef GL_R16
	BOOST_CHECK(x != ev.r16);
# endif
# ifdef GL_R16_SNORM
	BOOST_CHECK(x != ev.r16_snorm);
# endif
# ifdef GL_R16F
	BOOST_CHECK(x != ev.r16f);
# endif
# ifdef GL_R16I
	BOOST_CHECK(x != ev.r16i);
# endif
# ifdef GL_R16UI
	BOOST_CHECK(x != ev.r16ui);
# endif
# ifdef GL_R32F
	BOOST_CHECK(x != ev.r32f);
# endif
# ifdef GL_R32I
	BOOST_CHECK(x != ev.r32i);
# endif
# ifdef GL_R32UI
	BOOST_CHECK(x != ev.r32ui);
# endif
# ifdef GL_R8
	BOOST_CHECK(x != ev.r8);
# endif
# ifdef GL_R8_SNORM
	BOOST_CHECK(x != ev.r8_snorm);
# endif
# ifdef GL_R8I
	BOOST_CHECK(x != ev.r8i);
# endif
# ifdef GL_R8UI
	BOOST_CHECK(x != ev.r8ui);
# endif
# ifdef GL_RG16
	BOOST_CHECK(x != ev.rg16);
# endif
# ifdef GL_RG16_SNORM
	BOOST_CHECK(x != ev.rg16_snorm);
# endif
# ifdef GL_RG16F
	BOOST_CHECK(x != ev.rg16f);
# endif
# ifdef GL_RG16I
	BOOST_CHECK(x != ev.rg16i);
# endif
# ifdef GL_RG16UI
	BOOST_CHECK(x != ev.rg16ui);
# endif
# ifdef GL_RG32F
	BOOST_CHECK(x != ev.rg32f);
# endif
# ifdef GL_RG32I
	BOOST_CHECK(x != ev.rg32i);
# endif
# ifdef GL_RG32UI
	BOOST_CHECK(x != ev.rg32ui);
# endif
# ifdef GL_RG8
	BOOST_CHECK(x != ev.rg8);
# endif
# ifdef GL_RG8_SNORM
	BOOST_CHECK(x != ev.rg8_snorm);
# endif
# ifdef GL_RG8I
	BOOST_CHECK(x != ev.rg8i);
# endif
# ifdef GL_RG8UI
	BOOST_CHECK(x != ev.rg8ui);
# endif
# ifdef GL_RGB10_A2
	BOOST_CHECK(x != ev.rgb10_a2);
# endif
# ifdef GL_RGB10_A2UI
	BOOST_CHECK(x != ev.rgb10_a2ui);
# endif
# ifdef GL_RGBA16
	BOOST_CHECK(x != ev.rgba16);
# endif
# ifdef GL_RGBA16_SNORM
	BOOST_CHECK(x != ev.rgba16_snorm);
# endif
# ifdef GL_RGBA16F
	BOOST_CHECK(x != ev.rgba16f);
# endif
# ifdef GL_RGBA16I
	BOOST_CHECK(x != ev.rgba16i);
# endif
# ifdef GL_RGBA16UI
	BOOST_CHECK(x != ev.rgba16ui);
# endif
# ifdef GL_RGBA32F
	BOOST_CHECK(x != ev.rgba32f);
# endif
# ifdef GL_RGBA32I
	BOOST_CHECK(x != ev.rgba32i);
# endif
# ifdef GL_RGBA32UI
	BOOST_CHECK(x != ev.rgba32ui);
# endif
# ifdef GL_RGBA8
	BOOST_CHECK(x != ev.rgba8);
# endif
# ifdef GL_RGBA8_SNORM
	BOOST_CHECK(x != ev.rgba8_snorm);
# endif
# ifdef GL_RGBA8I
	BOOST_CHECK(x != ev.rgba8i);
# endif
# ifdef GL_RGBA8UI
	BOOST_CHECK(x != ev.rgba8ui);
# endif
#endif

#ifdef GL_R16
	x = ev.r16;
# ifdef GL_R11F_G11F_B10F
	BOOST_CHECK(x != ev.r11f_g11f_b10f);
# endif
	BOOST_CHECK(x == ev.r16);
# ifdef GL_R16_SNORM
	BOOST_CHECK(x != ev.r16_snorm);
# endif
# ifdef GL_R16F
	BOOST_CHECK(x != ev.r16f);
# endif
# ifdef GL_R16I
	BOOST_CHECK(x != ev.r16i);
# endif
# ifdef GL_R16UI
	BOOST_CHECK(x != ev.r16ui);
# endif
# ifdef GL_R32F
	BOOST_CHECK(x != ev.r32f);
# endif
# ifdef GL_R32I
	BOOST_CHECK(x != ev.r32i);
# endif
# ifdef GL_R32UI
	BOOST_CHECK(x != ev.r32ui);
# endif
# ifdef GL_R8
	BOOST_CHECK(x != ev.r8);
# endif
# ifdef GL_R8_SNORM
	BOOST_CHECK(x != ev.r8_snorm);
# endif
# ifdef GL_R8I
	BOOST_CHECK(x != ev.r8i);
# endif
# ifdef GL_R8UI
	BOOST_CHECK(x != ev.r8ui);
# endif
# ifdef GL_RG16
	BOOST_CHECK(x != ev.rg16);
# endif
# ifdef GL_RG16_SNORM
	BOOST_CHECK(x != ev.rg16_snorm);
# endif
# ifdef GL_RG16F
	BOOST_CHECK(x != ev.rg16f);
# endif
# ifdef GL_RG16I
	BOOST_CHECK(x != ev.rg16i);
# endif
# ifdef GL_RG16UI
	BOOST_CHECK(x != ev.rg16ui);
# endif
# ifdef GL_RG32F
	BOOST_CHECK(x != ev.rg32f);
# endif
# ifdef GL_RG32I
	BOOST_CHECK(x != ev.rg32i);
# endif
# ifdef GL_RG32UI
	BOOST_CHECK(x != ev.rg32ui);
# endif
# ifdef GL_RG8
	BOOST_CHECK(x != ev.rg8);
# endif
# ifdef GL_RG8_SNORM
	BOOST_CHECK(x != ev.rg8_snorm);
# endif
# ifdef GL_RG8I
	BOOST_CHECK(x != ev.rg8i);
# endif
# ifdef GL_RG8UI
	BOOST_CHECK(x != ev.rg8ui);
# endif
# ifdef GL_RGB10_A2
	BOOST_CHECK(x != ev.rgb10_a2);
# endif
# ifdef GL_RGB10_A2UI
	BOOST_CHECK(x != ev.rgb10_a2ui);
# endif
# ifdef GL_RGBA16
	BOOST_CHECK(x != ev.rgba16);
# endif
# ifdef GL_RGBA16_SNORM
	BOOST_CHECK(x != ev.rgba16_snorm);
# endif
# ifdef GL_RGBA16F
	BOOST_CHECK(x != ev.rgba16f);
# endif
# ifdef GL_RGBA16I
	BOOST_CHECK(x != ev.rgba16i);
# endif
# ifdef GL_RGBA16UI
	BOOST_CHECK(x != ev.rgba16ui);
# endif
# ifdef GL_RGBA32F
	BOOST_CHECK(x != ev.rgba32f);
# endif
# ifdef GL_RGBA32I
	BOOST_CHECK(x != ev.rgba32i);
# endif
# ifdef GL_RGBA32UI
	BOOST_CHECK(x != ev.rgba32ui);
# endif
# ifdef GL_RGBA8
	BOOST_CHECK(x != ev.rgba8);
# endif
# ifdef GL_RGBA8_SNORM
	BOOST_CHECK(x != ev.rgba8_snorm);
# endif
# ifdef GL_RGBA8I
	BOOST_CHECK(x != ev.rgba8i);
# endif
# ifdef GL_RGBA8UI
	BOOST_CHECK(x != ev.rgba8ui);
# endif
#endif

#ifdef GL_R16_SNORM
	x = ev.r16_snorm;
# ifdef GL_R11F_G11F_B10F
	BOOST_CHECK(x != ev.r11f_g11f_b10f);
# endif
# ifdef GL_R16
	BOOST_CHECK(x != ev.r16);
# endif
	BOOST_CHECK(x == ev.r16_snorm);
# ifdef GL_R16F
	BOOST_CHECK(x != ev.r16f);
# endif
# ifdef GL_R16I
	BOOST_CHECK(x != ev.r16i);
# endif
# ifdef GL_R16UI
	BOOST_CHECK(x != ev.r16ui);
# endif
# ifdef GL_R32F
	BOOST_CHECK(x != ev.r32f);
# endif
# ifdef GL_R32I
	BOOST_CHECK(x != ev.r32i);
# endif
# ifdef GL_R32UI
	BOOST_CHECK(x != ev.r32ui);
# endif
# ifdef GL_R8
	BOOST_CHECK(x != ev.r8);
# endif
# ifdef GL_R8_SNORM
	BOOST_CHECK(x != ev.r8_snorm);
# endif
# ifdef GL_R8I
	BOOST_CHECK(x != ev.r8i);
# endif
# ifdef GL_R8UI
	BOOST_CHECK(x != ev.r8ui);
# endif
# ifdef GL_RG16
	BOOST_CHECK(x != ev.rg16);
# endif
# ifdef GL_RG16_SNORM
	BOOST_CHECK(x != ev.rg16_snorm);
# endif
# ifdef GL_RG16F
	BOOST_CHECK(x != ev.rg16f);
# endif
# ifdef GL_RG16I
	BOOST_CHECK(x != ev.rg16i);
# endif
# ifdef GL_RG16UI
	BOOST_CHECK(x != ev.rg16ui);
# endif
# ifdef GL_RG32F
	BOOST_CHECK(x != ev.rg32f);
# endif
# ifdef GL_RG32I
	BOOST_CHECK(x != ev.rg32i);
# endif
# ifdef GL_RG32UI
	BOOST_CHECK(x != ev.rg32ui);
# endif
# ifdef GL_RG8
	BOOST_CHECK(x != ev.rg8);
# endif
# ifdef GL_RG8_SNORM
	BOOST_CHECK(x != ev.rg8_snorm);
# endif
# ifdef GL_RG8I
	BOOST_CHECK(x != ev.rg8i);
# endif
# ifdef GL_RG8UI
	BOOST_CHECK(x != ev.rg8ui);
# endif
# ifdef GL_RGB10_A2
	BOOST_CHECK(x != ev.rgb10_a2);
# endif
# ifdef GL_RGB10_A2UI
	BOOST_CHECK(x != ev.rgb10_a2ui);
# endif
# ifdef GL_RGBA16
	BOOST_CHECK(x != ev.rgba16);
# endif
# ifdef GL_RGBA16_SNORM
	BOOST_CHECK(x != ev.rgba16_snorm);
# endif
# ifdef GL_RGBA16F
	BOOST_CHECK(x != ev.rgba16f);
# endif
# ifdef GL_RGBA16I
	BOOST_CHECK(x != ev.rgba16i);
# endif
# ifdef GL_RGBA16UI
	BOOST_CHECK(x != ev.rgba16ui);
# endif
# ifdef GL_RGBA32F
	BOOST_CHECK(x != ev.rgba32f);
# endif
# ifdef GL_RGBA32I
	BOOST_CHECK(x != ev.rgba32i);
# endif
# ifdef GL_RGBA32UI
	BOOST_CHECK(x != ev.rgba32ui);
# endif
# ifdef GL_RGBA8
	BOOST_CHECK(x != ev.rgba8);
# endif
# ifdef GL_RGBA8_SNORM
	BOOST_CHECK(x != ev.rgba8_snorm);
# endif
# ifdef GL_RGBA8I
	BOOST_CHECK(x != ev.rgba8i);
# endif
# ifdef GL_RGBA8UI
	BOOST_CHECK(x != ev.rgba8ui);
# endif
#endif

#ifdef GL_R16F
	x = ev.r16f;
# ifdef GL_R11F_G11F_B10F
	BOOST_CHECK(x != ev.r11f_g11f_b10f);
# endif
# ifdef GL_R16
	BOOST_CHECK(x != ev.r16);
# endif
# ifdef GL_R16_SNORM
	BOOST_CHECK(x != ev.r16_snorm);
# endif
	BOOST_CHECK(x == ev.r16f);
# ifdef GL_R16I
	BOOST_CHECK(x != ev.r16i);
# endif
# ifdef GL_R16UI
	BOOST_CHECK(x != ev.r16ui);
# endif
# ifdef GL_R32F
	BOOST_CHECK(x != ev.r32f);
# endif
# ifdef GL_R32I
	BOOST_CHECK(x != ev.r32i);
# endif
# ifdef GL_R32UI
	BOOST_CHECK(x != ev.r32ui);
# endif
# ifdef GL_R8
	BOOST_CHECK(x != ev.r8);
# endif
# ifdef GL_R8_SNORM
	BOOST_CHECK(x != ev.r8_snorm);
# endif
# ifdef GL_R8I
	BOOST_CHECK(x != ev.r8i);
# endif
# ifdef GL_R8UI
	BOOST_CHECK(x != ev.r8ui);
# endif
# ifdef GL_RG16
	BOOST_CHECK(x != ev.rg16);
# endif
# ifdef GL_RG16_SNORM
	BOOST_CHECK(x != ev.rg16_snorm);
# endif
# ifdef GL_RG16F
	BOOST_CHECK(x != ev.rg16f);
# endif
# ifdef GL_RG16I
	BOOST_CHECK(x != ev.rg16i);
# endif
# ifdef GL_RG16UI
	BOOST_CHECK(x != ev.rg16ui);
# endif
# ifdef GL_RG32F
	BOOST_CHECK(x != ev.rg32f);
# endif
# ifdef GL_RG32I
	BOOST_CHECK(x != ev.rg32i);
# endif
# ifdef GL_RG32UI
	BOOST_CHECK(x != ev.rg32ui);
# endif
# ifdef GL_RG8
	BOOST_CHECK(x != ev.rg8);
# endif
# ifdef GL_RG8_SNORM
	BOOST_CHECK(x != ev.rg8_snorm);
# endif
# ifdef GL_RG8I
	BOOST_CHECK(x != ev.rg8i);
# endif
# ifdef GL_RG8UI
	BOOST_CHECK(x != ev.rg8ui);
# endif
# ifdef GL_RGB10_A2
	BOOST_CHECK(x != ev.rgb10_a2);
# endif
# ifdef GL_RGB10_A2UI
	BOOST_CHECK(x != ev.rgb10_a2ui);
# endif
# ifdef GL_RGBA16
	BOOST_CHECK(x != ev.rgba16);
# endif
# ifdef GL_RGBA16_SNORM
	BOOST_CHECK(x != ev.rgba16_snorm);
# endif
# ifdef GL_RGBA16F
	BOOST_CHECK(x != ev.rgba16f);
# endif
# ifdef GL_RGBA16I
	BOOST_CHECK(x != ev.rgba16i);
# endif
# ifdef GL_RGBA16UI
	BOOST_CHECK(x != ev.rgba16ui);
# endif
# ifdef GL_RGBA32F
	BOOST_CHECK(x != ev.rgba32f);
# endif
# ifdef GL_RGBA32I
	BOOST_CHECK(x != ev.rgba32i);
# endif
# ifdef GL_RGBA32UI
	BOOST_CHECK(x != ev.rgba32ui);
# endif
# ifdef GL_RGBA8
	BOOST_CHECK(x != ev.rgba8);
# endif
# ifdef GL_RGBA8_SNORM
	BOOST_CHECK(x != ev.rgba8_snorm);
# endif
# ifdef GL_RGBA8I
	BOOST_CHECK(x != ev.rgba8i);
# endif
# ifdef GL_RGBA8UI
	BOOST_CHECK(x != ev.rgba8ui);
# endif
#endif

#ifdef GL_R16I
	x = ev.r16i;
# ifdef GL_R11F_G11F_B10F
	BOOST_CHECK(x != ev.r11f_g11f_b10f);
# endif
# ifdef GL_R16
	BOOST_CHECK(x != ev.r16);
# endif
# ifdef GL_R16_SNORM
	BOOST_CHECK(x != ev.r16_snorm);
# endif
# ifdef GL_R16F
	BOOST_CHECK(x != ev.r16f);
# endif
	BOOST_CHECK(x == ev.r16i);
# ifdef GL_R16UI
	BOOST_CHECK(x != ev.r16ui);
# endif
# ifdef GL_R32F
	BOOST_CHECK(x != ev.r32f);
# endif
# ifdef GL_R32I
	BOOST_CHECK(x != ev.r32i);
# endif
# ifdef GL_R32UI
	BOOST_CHECK(x != ev.r32ui);
# endif
# ifdef GL_R8
	BOOST_CHECK(x != ev.r8);
# endif
# ifdef GL_R8_SNORM
	BOOST_CHECK(x != ev.r8_snorm);
# endif
# ifdef GL_R8I
	BOOST_CHECK(x != ev.r8i);
# endif
# ifdef GL_R8UI
	BOOST_CHECK(x != ev.r8ui);
# endif
# ifdef GL_RG16
	BOOST_CHECK(x != ev.rg16);
# endif
# ifdef GL_RG16_SNORM
	BOOST_CHECK(x != ev.rg16_snorm);
# endif
# ifdef GL_RG16F
	BOOST_CHECK(x != ev.rg16f);
# endif
# ifdef GL_RG16I
	BOOST_CHECK(x != ev.rg16i);
# endif
# ifdef GL_RG16UI
	BOOST_CHECK(x != ev.rg16ui);
# endif
# ifdef GL_RG32F
	BOOST_CHECK(x != ev.rg32f);
# endif
# ifdef GL_RG32I
	BOOST_CHECK(x != ev.rg32i);
# endif
# ifdef GL_RG32UI
	BOOST_CHECK(x != ev.rg32ui);
# endif
# ifdef GL_RG8
	BOOST_CHECK(x != ev.rg8);
# endif
# ifdef GL_RG8_SNORM
	BOOST_CHECK(x != ev.rg8_snorm);
# endif
# ifdef GL_RG8I
	BOOST_CHECK(x != ev.rg8i);
# endif
# ifdef GL_RG8UI
	BOOST_CHECK(x != ev.rg8ui);
# endif
# ifdef GL_RGB10_A2
	BOOST_CHECK(x != ev.rgb10_a2);
# endif
# ifdef GL_RGB10_A2UI
	BOOST_CHECK(x != ev.rgb10_a2ui);
# endif
# ifdef GL_RGBA16
	BOOST_CHECK(x != ev.rgba16);
# endif
# ifdef GL_RGBA16_SNORM
	BOOST_CHECK(x != ev.rgba16_snorm);
# endif
# ifdef GL_RGBA16F
	BOOST_CHECK(x != ev.rgba16f);
# endif
# ifdef GL_RGBA16I
	BOOST_CHECK(x != ev.rgba16i);
# endif
# ifdef GL_RGBA16UI
	BOOST_CHECK(x != ev.rgba16ui);
# endif
# ifdef GL_RGBA32F
	BOOST_CHECK(x != ev.rgba32f);
# endif
# ifdef GL_RGBA32I
	BOOST_CHECK(x != ev.rgba32i);
# endif
# ifdef GL_RGBA32UI
	BOOST_CHECK(x != ev.rgba32ui);
# endif
# ifdef GL_RGBA8
	BOOST_CHECK(x != ev.rgba8);
# endif
# ifdef GL_RGBA8_SNORM
	BOOST_CHECK(x != ev.rgba8_snorm);
# endif
# ifdef GL_RGBA8I
	BOOST_CHECK(x != ev.rgba8i);
# endif
# ifdef GL_RGBA8UI
	BOOST_CHECK(x != ev.rgba8ui);
# endif
#endif

#ifdef GL_R16UI
	x = ev.r16ui;
# ifdef GL_R11F_G11F_B10F
	BOOST_CHECK(x != ev.r11f_g11f_b10f);
# endif
# ifdef GL_R16
	BOOST_CHECK(x != ev.r16);
# endif
# ifdef GL_R16_SNORM
	BOOST_CHECK(x != ev.r16_snorm);
# endif
# ifdef GL_R16F
	BOOST_CHECK(x != ev.r16f);
# endif
# ifdef GL_R16I
	BOOST_CHECK(x != ev.r16i);
# endif
	BOOST_CHECK(x == ev.r16ui);
# ifdef GL_R32F
	BOOST_CHECK(x != ev.r32f);
# endif
# ifdef GL_R32I
	BOOST_CHECK(x != ev.r32i);
# endif
# ifdef GL_R32UI
	BOOST_CHECK(x != ev.r32ui);
# endif
# ifdef GL_R8
	BOOST_CHECK(x != ev.r8);
# endif
# ifdef GL_R8_SNORM
	BOOST_CHECK(x != ev.r8_snorm);
# endif
# ifdef GL_R8I
	BOOST_CHECK(x != ev.r8i);
# endif
# ifdef GL_R8UI
	BOOST_CHECK(x != ev.r8ui);
# endif
# ifdef GL_RG16
	BOOST_CHECK(x != ev.rg16);
# endif
# ifdef GL_RG16_SNORM
	BOOST_CHECK(x != ev.rg16_snorm);
# endif
# ifdef GL_RG16F
	BOOST_CHECK(x != ev.rg16f);
# endif
# ifdef GL_RG16I
	BOOST_CHECK(x != ev.rg16i);
# endif
# ifdef GL_RG16UI
	BOOST_CHECK(x != ev.rg16ui);
# endif
# ifdef GL_RG32F
	BOOST_CHECK(x != ev.rg32f);
# endif
# ifdef GL_RG32I
	BOOST_CHECK(x != ev.rg32i);
# endif
# ifdef GL_RG32UI
	BOOST_CHECK(x != ev.rg32ui);
# endif
# ifdef GL_RG8
	BOOST_CHECK(x != ev.rg8);
# endif
# ifdef GL_RG8_SNORM
	BOOST_CHECK(x != ev.rg8_snorm);
# endif
# ifdef GL_RG8I
	BOOST_CHECK(x != ev.rg8i);
# endif
# ifdef GL_RG8UI
	BOOST_CHECK(x != ev.rg8ui);
# endif
# ifdef GL_RGB10_A2
	BOOST_CHECK(x != ev.rgb10_a2);
# endif
# ifdef GL_RGB10_A2UI
	BOOST_CHECK(x != ev.rgb10_a2ui);
# endif
# ifdef GL_RGBA16
	BOOST_CHECK(x != ev.rgba16);
# endif
# ifdef GL_RGBA16_SNORM
	BOOST_CHECK(x != ev.rgba16_snorm);
# endif
# ifdef GL_RGBA16F
	BOOST_CHECK(x != ev.rgba16f);
# endif
# ifdef GL_RGBA16I
	BOOST_CHECK(x != ev.rgba16i);
# endif
# ifdef GL_RGBA16UI
	BOOST_CHECK(x != ev.rgba16ui);
# endif
# ifdef GL_RGBA32F
	BOOST_CHECK(x != ev.rgba32f);
# endif
# ifdef GL_RGBA32I
	BOOST_CHECK(x != ev.rgba32i);
# endif
# ifdef GL_RGBA32UI
	BOOST_CHECK(x != ev.rgba32ui);
# endif
# ifdef GL_RGBA8
	BOOST_CHECK(x != ev.rgba8);
# endif
# ifdef GL_RGBA8_SNORM
	BOOST_CHECK(x != ev.rgba8_snorm);
# endif
# ifdef GL_RGBA8I
	BOOST_CHECK(x != ev.rgba8i);
# endif
# ifdef GL_RGBA8UI
	BOOST_CHECK(x != ev.rgba8ui);
# endif
#endif

#ifdef GL_R32F
	x = ev.r32f;
# ifdef GL_R11F_G11F_B10F
	BOOST_CHECK(x != ev.r11f_g11f_b10f);
# endif
# ifdef GL_R16
	BOOST_CHECK(x != ev.r16);
# endif
# ifdef GL_R16_SNORM
	BOOST_CHECK(x != ev.r16_snorm);
# endif
# ifdef GL_R16F
	BOOST_CHECK(x != ev.r16f);
# endif
# ifdef GL_R16I
	BOOST_CHECK(x != ev.r16i);
# endif
# ifdef GL_R16UI
	BOOST_CHECK(x != ev.r16ui);
# endif
	BOOST_CHECK(x == ev.r32f);
# ifdef GL_R32I
	BOOST_CHECK(x != ev.r32i);
# endif
# ifdef GL_R32UI
	BOOST_CHECK(x != ev.r32ui);
# endif
# ifdef GL_R8
	BOOST_CHECK(x != ev.r8);
# endif
# ifdef GL_R8_SNORM
	BOOST_CHECK(x != ev.r8_snorm);
# endif
# ifdef GL_R8I
	BOOST_CHECK(x != ev.r8i);
# endif
# ifdef GL_R8UI
	BOOST_CHECK(x != ev.r8ui);
# endif
# ifdef GL_RG16
	BOOST_CHECK(x != ev.rg16);
# endif
# ifdef GL_RG16_SNORM
	BOOST_CHECK(x != ev.rg16_snorm);
# endif
# ifdef GL_RG16F
	BOOST_CHECK(x != ev.rg16f);
# endif
# ifdef GL_RG16I
	BOOST_CHECK(x != ev.rg16i);
# endif
# ifdef GL_RG16UI
	BOOST_CHECK(x != ev.rg16ui);
# endif
# ifdef GL_RG32F
	BOOST_CHECK(x != ev.rg32f);
# endif
# ifdef GL_RG32I
	BOOST_CHECK(x != ev.rg32i);
# endif
# ifdef GL_RG32UI
	BOOST_CHECK(x != ev.rg32ui);
# endif
# ifdef GL_RG8
	BOOST_CHECK(x != ev.rg8);
# endif
# ifdef GL_RG8_SNORM
	BOOST_CHECK(x != ev.rg8_snorm);
# endif
# ifdef GL_RG8I
	BOOST_CHECK(x != ev.rg8i);
# endif
# ifdef GL_RG8UI
	BOOST_CHECK(x != ev.rg8ui);
# endif
# ifdef GL_RGB10_A2
	BOOST_CHECK(x != ev.rgb10_a2);
# endif
# ifdef GL_RGB10_A2UI
	BOOST_CHECK(x != ev.rgb10_a2ui);
# endif
# ifdef GL_RGBA16
	BOOST_CHECK(x != ev.rgba16);
# endif
# ifdef GL_RGBA16_SNORM
	BOOST_CHECK(x != ev.rgba16_snorm);
# endif
# ifdef GL_RGBA16F
	BOOST_CHECK(x != ev.rgba16f);
# endif
# ifdef GL_RGBA16I
	BOOST_CHECK(x != ev.rgba16i);
# endif
# ifdef GL_RGBA16UI
	BOOST_CHECK(x != ev.rgba16ui);
# endif
# ifdef GL_RGBA32F
	BOOST_CHECK(x != ev.rgba32f);
# endif
# ifdef GL_RGBA32I
	BOOST_CHECK(x != ev.rgba32i);
# endif
# ifdef GL_RGBA32UI
	BOOST_CHECK(x != ev.rgba32ui);
# endif
# ifdef GL_RGBA8
	BOOST_CHECK(x != ev.rgba8);
# endif
# ifdef GL_RGBA8_SNORM
	BOOST_CHECK(x != ev.rgba8_snorm);
# endif
# ifdef GL_RGBA8I
	BOOST_CHECK(x != ev.rgba8i);
# endif
# ifdef GL_RGBA8UI
	BOOST_CHECK(x != ev.rgba8ui);
# endif
#endif

#ifdef GL_R32I
	x = ev.r32i;
# ifdef GL_R11F_G11F_B10F
	BOOST_CHECK(x != ev.r11f_g11f_b10f);
# endif
# ifdef GL_R16
	BOOST_CHECK(x != ev.r16);
# endif
# ifdef GL_R16_SNORM
	BOOST_CHECK(x != ev.r16_snorm);
# endif
# ifdef GL_R16F
	BOOST_CHECK(x != ev.r16f);
# endif
# ifdef GL_R16I
	BOOST_CHECK(x != ev.r16i);
# endif
# ifdef GL_R16UI
	BOOST_CHECK(x != ev.r16ui);
# endif
# ifdef GL_R32F
	BOOST_CHECK(x != ev.r32f);
# endif
	BOOST_CHECK(x == ev.r32i);
# ifdef GL_R32UI
	BOOST_CHECK(x != ev.r32ui);
# endif
# ifdef GL_R8
	BOOST_CHECK(x != ev.r8);
# endif
# ifdef GL_R8_SNORM
	BOOST_CHECK(x != ev.r8_snorm);
# endif
# ifdef GL_R8I
	BOOST_CHECK(x != ev.r8i);
# endif
# ifdef GL_R8UI
	BOOST_CHECK(x != ev.r8ui);
# endif
# ifdef GL_RG16
	BOOST_CHECK(x != ev.rg16);
# endif
# ifdef GL_RG16_SNORM
	BOOST_CHECK(x != ev.rg16_snorm);
# endif
# ifdef GL_RG16F
	BOOST_CHECK(x != ev.rg16f);
# endif
# ifdef GL_RG16I
	BOOST_CHECK(x != ev.rg16i);
# endif
# ifdef GL_RG16UI
	BOOST_CHECK(x != ev.rg16ui);
# endif
# ifdef GL_RG32F
	BOOST_CHECK(x != ev.rg32f);
# endif
# ifdef GL_RG32I
	BOOST_CHECK(x != ev.rg32i);
# endif
# ifdef GL_RG32UI
	BOOST_CHECK(x != ev.rg32ui);
# endif
# ifdef GL_RG8
	BOOST_CHECK(x != ev.rg8);
# endif
# ifdef GL_RG8_SNORM
	BOOST_CHECK(x != ev.rg8_snorm);
# endif
# ifdef GL_RG8I
	BOOST_CHECK(x != ev.rg8i);
# endif
# ifdef GL_RG8UI
	BOOST_CHECK(x != ev.rg8ui);
# endif
# ifdef GL_RGB10_A2
	BOOST_CHECK(x != ev.rgb10_a2);
# endif
# ifdef GL_RGB10_A2UI
	BOOST_CHECK(x != ev.rgb10_a2ui);
# endif
# ifdef GL_RGBA16
	BOOST_CHECK(x != ev.rgba16);
# endif
# ifdef GL_RGBA16_SNORM
	BOOST_CHECK(x != ev.rgba16_snorm);
# endif
# ifdef GL_RGBA16F
	BOOST_CHECK(x != ev.rgba16f);
# endif
# ifdef GL_RGBA16I
	BOOST_CHECK(x != ev.rgba16i);
# endif
# ifdef GL_RGBA16UI
	BOOST_CHECK(x != ev.rgba16ui);
# endif
# ifdef GL_RGBA32F
	BOOST_CHECK(x != ev.rgba32f);
# endif
# ifdef GL_RGBA32I
	BOOST_CHECK(x != ev.rgba32i);
# endif
# ifdef GL_RGBA32UI
	BOOST_CHECK(x != ev.rgba32ui);
# endif
# ifdef GL_RGBA8
	BOOST_CHECK(x != ev.rgba8);
# endif
# ifdef GL_RGBA8_SNORM
	BOOST_CHECK(x != ev.rgba8_snorm);
# endif
# ifdef GL_RGBA8I
	BOOST_CHECK(x != ev.rgba8i);
# endif
# ifdef GL_RGBA8UI
	BOOST_CHECK(x != ev.rgba8ui);
# endif
#endif

#ifdef GL_R32UI
	x = ev.r32ui;
# ifdef GL_R11F_G11F_B10F
	BOOST_CHECK(x != ev.r11f_g11f_b10f);
# endif
# ifdef GL_R16
	BOOST_CHECK(x != ev.r16);
# endif
# ifdef GL_R16_SNORM
	BOOST_CHECK(x != ev.r16_snorm);
# endif
# ifdef GL_R16F
	BOOST_CHECK(x != ev.r16f);
# endif
# ifdef GL_R16I
	BOOST_CHECK(x != ev.r16i);
# endif
# ifdef GL_R16UI
	BOOST_CHECK(x != ev.r16ui);
# endif
# ifdef GL_R32F
	BOOST_CHECK(x != ev.r32f);
# endif
# ifdef GL_R32I
	BOOST_CHECK(x != ev.r32i);
# endif
	BOOST_CHECK(x == ev.r32ui);
# ifdef GL_R8
	BOOST_CHECK(x != ev.r8);
# endif
# ifdef GL_R8_SNORM
	BOOST_CHECK(x != ev.r8_snorm);
# endif
# ifdef GL_R8I
	BOOST_CHECK(x != ev.r8i);
# endif
# ifdef GL_R8UI
	BOOST_CHECK(x != ev.r8ui);
# endif
# ifdef GL_RG16
	BOOST_CHECK(x != ev.rg16);
# endif
# ifdef GL_RG16_SNORM
	BOOST_CHECK(x != ev.rg16_snorm);
# endif
# ifdef GL_RG16F
	BOOST_CHECK(x != ev.rg16f);
# endif
# ifdef GL_RG16I
	BOOST_CHECK(x != ev.rg16i);
# endif
# ifdef GL_RG16UI
	BOOST_CHECK(x != ev.rg16ui);
# endif
# ifdef GL_RG32F
	BOOST_CHECK(x != ev.rg32f);
# endif
# ifdef GL_RG32I
	BOOST_CHECK(x != ev.rg32i);
# endif
# ifdef GL_RG32UI
	BOOST_CHECK(x != ev.rg32ui);
# endif
# ifdef GL_RG8
	BOOST_CHECK(x != ev.rg8);
# endif
# ifdef GL_RG8_SNORM
	BOOST_CHECK(x != ev.rg8_snorm);
# endif
# ifdef GL_RG8I
	BOOST_CHECK(x != ev.rg8i);
# endif
# ifdef GL_RG8UI
	BOOST_CHECK(x != ev.rg8ui);
# endif
# ifdef GL_RGB10_A2
	BOOST_CHECK(x != ev.rgb10_a2);
# endif
# ifdef GL_RGB10_A2UI
	BOOST_CHECK(x != ev.rgb10_a2ui);
# endif
# ifdef GL_RGBA16
	BOOST_CHECK(x != ev.rgba16);
# endif
# ifdef GL_RGBA16_SNORM
	BOOST_CHECK(x != ev.rgba16_snorm);
# endif
# ifdef GL_RGBA16F
	BOOST_CHECK(x != ev.rgba16f);
# endif
# ifdef GL_RGBA16I
	BOOST_CHECK(x != ev.rgba16i);
# endif
# ifdef GL_RGBA16UI
	BOOST_CHECK(x != ev.rgba16ui);
# endif
# ifdef GL_RGBA32F
	BOOST_CHECK(x != ev.rgba32f);
# endif
# ifdef GL_RGBA32I
	BOOST_CHECK(x != ev.rgba32i);
# endif
# ifdef GL_RGBA32UI
	BOOST_CHECK(x != ev.rgba32ui);
# endif
# ifdef GL_RGBA8
	BOOST_CHECK(x != ev.rgba8);
# endif
# ifdef GL_RGBA8_SNORM
	BOOST_CHECK(x != ev.rgba8_snorm);
# endif
# ifdef GL_RGBA8I
	BOOST_CHECK(x != ev.rgba8i);
# endif
# ifdef GL_RGBA8UI
	BOOST_CHECK(x != ev.rgba8ui);
# endif
#endif

#ifdef GL_R8
	x = ev.r8;
# ifdef GL_R11F_G11F_B10F
	BOOST_CHECK(x != ev.r11f_g11f_b10f);
# endif
# ifdef GL_R16
	BOOST_CHECK(x != ev.r16);
# endif
# ifdef GL_R16_SNORM
	BOOST_CHECK(x != ev.r16_snorm);
# endif
# ifdef GL_R16F
	BOOST_CHECK(x != ev.r16f);
# endif
# ifdef GL_R16I
	BOOST_CHECK(x != ev.r16i);
# endif
# ifdef GL_R16UI
	BOOST_CHECK(x != ev.r16ui);
# endif
# ifdef GL_R32F
	BOOST_CHECK(x != ev.r32f);
# endif
# ifdef GL_R32I
	BOOST_CHECK(x != ev.r32i);
# endif
# ifdef GL_R32UI
	BOOST_CHECK(x != ev.r32ui);
# endif
	BOOST_CHECK(x == ev.r8);
# ifdef GL_R8_SNORM
	BOOST_CHECK(x != ev.r8_snorm);
# endif
# ifdef GL_R8I
	BOOST_CHECK(x != ev.r8i);
# endif
# ifdef GL_R8UI
	BOOST_CHECK(x != ev.r8ui);
# endif
# ifdef GL_RG16
	BOOST_CHECK(x != ev.rg16);
# endif
# ifdef GL_RG16_SNORM
	BOOST_CHECK(x != ev.rg16_snorm);
# endif
# ifdef GL_RG16F
	BOOST_CHECK(x != ev.rg16f);
# endif
# ifdef GL_RG16I
	BOOST_CHECK(x != ev.rg16i);
# endif
# ifdef GL_RG16UI
	BOOST_CHECK(x != ev.rg16ui);
# endif
# ifdef GL_RG32F
	BOOST_CHECK(x != ev.rg32f);
# endif
# ifdef GL_RG32I
	BOOST_CHECK(x != ev.rg32i);
# endif
# ifdef GL_RG32UI
	BOOST_CHECK(x != ev.rg32ui);
# endif
# ifdef GL_RG8
	BOOST_CHECK(x != ev.rg8);
# endif
# ifdef GL_RG8_SNORM
	BOOST_CHECK(x != ev.rg8_snorm);
# endif
# ifdef GL_RG8I
	BOOST_CHECK(x != ev.rg8i);
# endif
# ifdef GL_RG8UI
	BOOST_CHECK(x != ev.rg8ui);
# endif
# ifdef GL_RGB10_A2
	BOOST_CHECK(x != ev.rgb10_a2);
# endif
# ifdef GL_RGB10_A2UI
	BOOST_CHECK(x != ev.rgb10_a2ui);
# endif
# ifdef GL_RGBA16
	BOOST_CHECK(x != ev.rgba16);
# endif
# ifdef GL_RGBA16_SNORM
	BOOST_CHECK(x != ev.rgba16_snorm);
# endif
# ifdef GL_RGBA16F
	BOOST_CHECK(x != ev.rgba16f);
# endif
# ifdef GL_RGBA16I
	BOOST_CHECK(x != ev.rgba16i);
# endif
# ifdef GL_RGBA16UI
	BOOST_CHECK(x != ev.rgba16ui);
# endif
# ifdef GL_RGBA32F
	BOOST_CHECK(x != ev.rgba32f);
# endif
# ifdef GL_RGBA32I
	BOOST_CHECK(x != ev.rgba32i);
# endif
# ifdef GL_RGBA32UI
	BOOST_CHECK(x != ev.rgba32ui);
# endif
# ifdef GL_RGBA8
	BOOST_CHECK(x != ev.rgba8);
# endif
# ifdef GL_RGBA8_SNORM
	BOOST_CHECK(x != ev.rgba8_snorm);
# endif
# ifdef GL_RGBA8I
	BOOST_CHECK(x != ev.rgba8i);
# endif
# ifdef GL_RGBA8UI
	BOOST_CHECK(x != ev.rgba8ui);
# endif
#endif

#ifdef GL_R8_SNORM
	x = ev.r8_snorm;
# ifdef GL_R11F_G11F_B10F
	BOOST_CHECK(x != ev.r11f_g11f_b10f);
# endif
# ifdef GL_R16
	BOOST_CHECK(x != ev.r16);
# endif
# ifdef GL_R16_SNORM
	BOOST_CHECK(x != ev.r16_snorm);
# endif
# ifdef GL_R16F
	BOOST_CHECK(x != ev.r16f);
# endif
# ifdef GL_R16I
	BOOST_CHECK(x != ev.r16i);
# endif
# ifdef GL_R16UI
	BOOST_CHECK(x != ev.r16ui);
# endif
# ifdef GL_R32F
	BOOST_CHECK(x != ev.r32f);
# endif
# ifdef GL_R32I
	BOOST_CHECK(x != ev.r32i);
# endif
# ifdef GL_R32UI
	BOOST_CHECK(x != ev.r32ui);
# endif
# ifdef GL_R8
	BOOST_CHECK(x != ev.r8);
# endif
	BOOST_CHECK(x == ev.r8_snorm);
# ifdef GL_R8I
	BOOST_CHECK(x != ev.r8i);
# endif
# ifdef GL_R8UI
	BOOST_CHECK(x != ev.r8ui);
# endif
# ifdef GL_RG16
	BOOST_CHECK(x != ev.rg16);
# endif
# ifdef GL_RG16_SNORM
	BOOST_CHECK(x != ev.rg16_snorm);
# endif
# ifdef GL_RG16F
	BOOST_CHECK(x != ev.rg16f);
# endif
# ifdef GL_RG16I
	BOOST_CHECK(x != ev.rg16i);
# endif
# ifdef GL_RG16UI
	BOOST_CHECK(x != ev.rg16ui);
# endif
# ifdef GL_RG32F
	BOOST_CHECK(x != ev.rg32f);
# endif
# ifdef GL_RG32I
	BOOST_CHECK(x != ev.rg32i);
# endif
# ifdef GL_RG32UI
	BOOST_CHECK(x != ev.rg32ui);
# endif
# ifdef GL_RG8
	BOOST_CHECK(x != ev.rg8);
# endif
# ifdef GL_RG8_SNORM
	BOOST_CHECK(x != ev.rg8_snorm);
# endif
# ifdef GL_RG8I
	BOOST_CHECK(x != ev.rg8i);
# endif
# ifdef GL_RG8UI
	BOOST_CHECK(x != ev.rg8ui);
# endif
# ifdef GL_RGB10_A2
	BOOST_CHECK(x != ev.rgb10_a2);
# endif
# ifdef GL_RGB10_A2UI
	BOOST_CHECK(x != ev.rgb10_a2ui);
# endif
# ifdef GL_RGBA16
	BOOST_CHECK(x != ev.rgba16);
# endif
# ifdef GL_RGBA16_SNORM
	BOOST_CHECK(x != ev.rgba16_snorm);
# endif
# ifdef GL_RGBA16F
	BOOST_CHECK(x != ev.rgba16f);
# endif
# ifdef GL_RGBA16I
	BOOST_CHECK(x != ev.rgba16i);
# endif
# ifdef GL_RGBA16UI
	BOOST_CHECK(x != ev.rgba16ui);
# endif
# ifdef GL_RGBA32F
	BOOST_CHECK(x != ev.rgba32f);
# endif
# ifdef GL_RGBA32I
	BOOST_CHECK(x != ev.rgba32i);
# endif
# ifdef GL_RGBA32UI
	BOOST_CHECK(x != ev.rgba32ui);
# endif
# ifdef GL_RGBA8
	BOOST_CHECK(x != ev.rgba8);
# endif
# ifdef GL_RGBA8_SNORM
	BOOST_CHECK(x != ev.rgba8_snorm);
# endif
# ifdef GL_RGBA8I
	BOOST_CHECK(x != ev.rgba8i);
# endif
# ifdef GL_RGBA8UI
	BOOST_CHECK(x != ev.rgba8ui);
# endif
#endif

#ifdef GL_R8I
	x = ev.r8i;
# ifdef GL_R11F_G11F_B10F
	BOOST_CHECK(x != ev.r11f_g11f_b10f);
# endif
# ifdef GL_R16
	BOOST_CHECK(x != ev.r16);
# endif
# ifdef GL_R16_SNORM
	BOOST_CHECK(x != ev.r16_snorm);
# endif
# ifdef GL_R16F
	BOOST_CHECK(x != ev.r16f);
# endif
# ifdef GL_R16I
	BOOST_CHECK(x != ev.r16i);
# endif
# ifdef GL_R16UI
	BOOST_CHECK(x != ev.r16ui);
# endif
# ifdef GL_R32F
	BOOST_CHECK(x != ev.r32f);
# endif
# ifdef GL_R32I
	BOOST_CHECK(x != ev.r32i);
# endif
# ifdef GL_R32UI
	BOOST_CHECK(x != ev.r32ui);
# endif
# ifdef GL_R8
	BOOST_CHECK(x != ev.r8);
# endif
# ifdef GL_R8_SNORM
	BOOST_CHECK(x != ev.r8_snorm);
# endif
	BOOST_CHECK(x == ev.r8i);
# ifdef GL_R8UI
	BOOST_CHECK(x != ev.r8ui);
# endif
# ifdef GL_RG16
	BOOST_CHECK(x != ev.rg16);
# endif
# ifdef GL_RG16_SNORM
	BOOST_CHECK(x != ev.rg16_snorm);
# endif
# ifdef GL_RG16F
	BOOST_CHECK(x != ev.rg16f);
# endif
# ifdef GL_RG16I
	BOOST_CHECK(x != ev.rg16i);
# endif
# ifdef GL_RG16UI
	BOOST_CHECK(x != ev.rg16ui);
# endif
# ifdef GL_RG32F
	BOOST_CHECK(x != ev.rg32f);
# endif
# ifdef GL_RG32I
	BOOST_CHECK(x != ev.rg32i);
# endif
# ifdef GL_RG32UI
	BOOST_CHECK(x != ev.rg32ui);
# endif
# ifdef GL_RG8
	BOOST_CHECK(x != ev.rg8);
# endif
# ifdef GL_RG8_SNORM
	BOOST_CHECK(x != ev.rg8_snorm);
# endif
# ifdef GL_RG8I
	BOOST_CHECK(x != ev.rg8i);
# endif
# ifdef GL_RG8UI
	BOOST_CHECK(x != ev.rg8ui);
# endif
# ifdef GL_RGB10_A2
	BOOST_CHECK(x != ev.rgb10_a2);
# endif
# ifdef GL_RGB10_A2UI
	BOOST_CHECK(x != ev.rgb10_a2ui);
# endif
# ifdef GL_RGBA16
	BOOST_CHECK(x != ev.rgba16);
# endif
# ifdef GL_RGBA16_SNORM
	BOOST_CHECK(x != ev.rgba16_snorm);
# endif
# ifdef GL_RGBA16F
	BOOST_CHECK(x != ev.rgba16f);
# endif
# ifdef GL_RGBA16I
	BOOST_CHECK(x != ev.rgba16i);
# endif
# ifdef GL_RGBA16UI
	BOOST_CHECK(x != ev.rgba16ui);
# endif
# ifdef GL_RGBA32F
	BOOST_CHECK(x != ev.rgba32f);
# endif
# ifdef GL_RGBA32I
	BOOST_CHECK(x != ev.rgba32i);
# endif
# ifdef GL_RGBA32UI
	BOOST_CHECK(x != ev.rgba32ui);
# endif
# ifdef GL_RGBA8
	BOOST_CHECK(x != ev.rgba8);
# endif
# ifdef GL_RGBA8_SNORM
	BOOST_CHECK(x != ev.rgba8_snorm);
# endif
# ifdef GL_RGBA8I
	BOOST_CHECK(x != ev.rgba8i);
# endif
# ifdef GL_RGBA8UI
	BOOST_CHECK(x != ev.rgba8ui);
# endif
#endif

#ifdef GL_R8UI
	x = ev.r8ui;
# ifdef GL_R11F_G11F_B10F
	BOOST_CHECK(x != ev.r11f_g11f_b10f);
# endif
# ifdef GL_R16
	BOOST_CHECK(x != ev.r16);
# endif
# ifdef GL_R16_SNORM
	BOOST_CHECK(x != ev.r16_snorm);
# endif
# ifdef GL_R16F
	BOOST_CHECK(x != ev.r16f);
# endif
# ifdef GL_R16I
	BOOST_CHECK(x != ev.r16i);
# endif
# ifdef GL_R16UI
	BOOST_CHECK(x != ev.r16ui);
# endif
# ifdef GL_R32F
	BOOST_CHECK(x != ev.r32f);
# endif
# ifdef GL_R32I
	BOOST_CHECK(x != ev.r32i);
# endif
# ifdef GL_R32UI
	BOOST_CHECK(x != ev.r32ui);
# endif
# ifdef GL_R8
	BOOST_CHECK(x != ev.r8);
# endif
# ifdef GL_R8_SNORM
	BOOST_CHECK(x != ev.r8_snorm);
# endif
# ifdef GL_R8I
	BOOST_CHECK(x != ev.r8i);
# endif
	BOOST_CHECK(x == ev.r8ui);
# ifdef GL_RG16
	BOOST_CHECK(x != ev.rg16);
# endif
# ifdef GL_RG16_SNORM
	BOOST_CHECK(x != ev.rg16_snorm);
# endif
# ifdef GL_RG16F
	BOOST_CHECK(x != ev.rg16f);
# endif
# ifdef GL_RG16I
	BOOST_CHECK(x != ev.rg16i);
# endif
# ifdef GL_RG16UI
	BOOST_CHECK(x != ev.rg16ui);
# endif
# ifdef GL_RG32F
	BOOST_CHECK(x != ev.rg32f);
# endif
# ifdef GL_RG32I
	BOOST_CHECK(x != ev.rg32i);
# endif
# ifdef GL_RG32UI
	BOOST_CHECK(x != ev.rg32ui);
# endif
# ifdef GL_RG8
	BOOST_CHECK(x != ev.rg8);
# endif
# ifdef GL_RG8_SNORM
	BOOST_CHECK(x != ev.rg8_snorm);
# endif
# ifdef GL_RG8I
	BOOST_CHECK(x != ev.rg8i);
# endif
# ifdef GL_RG8UI
	BOOST_CHECK(x != ev.rg8ui);
# endif
# ifdef GL_RGB10_A2
	BOOST_CHECK(x != ev.rgb10_a2);
# endif
# ifdef GL_RGB10_A2UI
	BOOST_CHECK(x != ev.rgb10_a2ui);
# endif
# ifdef GL_RGBA16
	BOOST_CHECK(x != ev.rgba16);
# endif
# ifdef GL_RGBA16_SNORM
	BOOST_CHECK(x != ev.rgba16_snorm);
# endif
# ifdef GL_RGBA16F
	BOOST_CHECK(x != ev.rgba16f);
# endif
# ifdef GL_RGBA16I
	BOOST_CHECK(x != ev.rgba16i);
# endif
# ifdef GL_RGBA16UI
	BOOST_CHECK(x != ev.rgba16ui);
# endif
# ifdef GL_RGBA32F
	BOOST_CHECK(x != ev.rgba32f);
# endif
# ifdef GL_RGBA32I
	BOOST_CHECK(x != ev.rgba32i);
# endif
# ifdef GL_RGBA32UI
	BOOST_CHECK(x != ev.rgba32ui);
# endif
# ifdef GL_RGBA8
	BOOST_CHECK(x != ev.rgba8);
# endif
# ifdef GL_RGBA8_SNORM
	BOOST_CHECK(x != ev.rgba8_snorm);
# endif
# ifdef GL_RGBA8I
	BOOST_CHECK(x != ev.rgba8i);
# endif
# ifdef GL_RGBA8UI
	BOOST_CHECK(x != ev.rgba8ui);
# endif
#endif

#ifdef GL_RG16
	x = ev.rg16;
# ifdef GL_R11F_G11F_B10F
	BOOST_CHECK(x != ev.r11f_g11f_b10f);
# endif
# ifdef GL_R16
	BOOST_CHECK(x != ev.r16);
# endif
# ifdef GL_R16_SNORM
	BOOST_CHECK(x != ev.r16_snorm);
# endif
# ifdef GL_R16F
	BOOST_CHECK(x != ev.r16f);
# endif
# ifdef GL_R16I
	BOOST_CHECK(x != ev.r16i);
# endif
# ifdef GL_R16UI
	BOOST_CHECK(x != ev.r16ui);
# endif
# ifdef GL_R32F
	BOOST_CHECK(x != ev.r32f);
# endif
# ifdef GL_R32I
	BOOST_CHECK(x != ev.r32i);
# endif
# ifdef GL_R32UI
	BOOST_CHECK(x != ev.r32ui);
# endif
# ifdef GL_R8
	BOOST_CHECK(x != ev.r8);
# endif
# ifdef GL_R8_SNORM
	BOOST_CHECK(x != ev.r8_snorm);
# endif
# ifdef GL_R8I
	BOOST_CHECK(x != ev.r8i);
# endif
# ifdef GL_R8UI
	BOOST_CHECK(x != ev.r8ui);
# endif
	BOOST_CHECK(x == ev.rg16);
# ifdef GL_RG16_SNORM
	BOOST_CHECK(x != ev.rg16_snorm);
# endif
# ifdef GL_RG16F
	BOOST_CHECK(x != ev.rg16f);
# endif
# ifdef GL_RG16I
	BOOST_CHECK(x != ev.rg16i);
# endif
# ifdef GL_RG16UI
	BOOST_CHECK(x != ev.rg16ui);
# endif
# ifdef GL_RG32F
	BOOST_CHECK(x != ev.rg32f);
# endif
# ifdef GL_RG32I
	BOOST_CHECK(x != ev.rg32i);
# endif
# ifdef GL_RG32UI
	BOOST_CHECK(x != ev.rg32ui);
# endif
# ifdef GL_RG8
	BOOST_CHECK(x != ev.rg8);
# endif
# ifdef GL_RG8_SNORM
	BOOST_CHECK(x != ev.rg8_snorm);
# endif
# ifdef GL_RG8I
	BOOST_CHECK(x != ev.rg8i);
# endif
# ifdef GL_RG8UI
	BOOST_CHECK(x != ev.rg8ui);
# endif
# ifdef GL_RGB10_A2
	BOOST_CHECK(x != ev.rgb10_a2);
# endif
# ifdef GL_RGB10_A2UI
	BOOST_CHECK(x != ev.rgb10_a2ui);
# endif
# ifdef GL_RGBA16
	BOOST_CHECK(x != ev.rgba16);
# endif
# ifdef GL_RGBA16_SNORM
	BOOST_CHECK(x != ev.rgba16_snorm);
# endif
# ifdef GL_RGBA16F
	BOOST_CHECK(x != ev.rgba16f);
# endif
# ifdef GL_RGBA16I
	BOOST_CHECK(x != ev.rgba16i);
# endif
# ifdef GL_RGBA16UI
	BOOST_CHECK(x != ev.rgba16ui);
# endif
# ifdef GL_RGBA32F
	BOOST_CHECK(x != ev.rgba32f);
# endif
# ifdef GL_RGBA32I
	BOOST_CHECK(x != ev.rgba32i);
# endif
# ifdef GL_RGBA32UI
	BOOST_CHECK(x != ev.rgba32ui);
# endif
# ifdef GL_RGBA8
	BOOST_CHECK(x != ev.rgba8);
# endif
# ifdef GL_RGBA8_SNORM
	BOOST_CHECK(x != ev.rgba8_snorm);
# endif
# ifdef GL_RGBA8I
	BOOST_CHECK(x != ev.rgba8i);
# endif
# ifdef GL_RGBA8UI
	BOOST_CHECK(x != ev.rgba8ui);
# endif
#endif

#ifdef GL_RG16_SNORM
	x = ev.rg16_snorm;
# ifdef GL_R11F_G11F_B10F
	BOOST_CHECK(x != ev.r11f_g11f_b10f);
# endif
# ifdef GL_R16
	BOOST_CHECK(x != ev.r16);
# endif
# ifdef GL_R16_SNORM
	BOOST_CHECK(x != ev.r16_snorm);
# endif
# ifdef GL_R16F
	BOOST_CHECK(x != ev.r16f);
# endif
# ifdef GL_R16I
	BOOST_CHECK(x != ev.r16i);
# endif
# ifdef GL_R16UI
	BOOST_CHECK(x != ev.r16ui);
# endif
# ifdef GL_R32F
	BOOST_CHECK(x != ev.r32f);
# endif
# ifdef GL_R32I
	BOOST_CHECK(x != ev.r32i);
# endif
# ifdef GL_R32UI
	BOOST_CHECK(x != ev.r32ui);
# endif
# ifdef GL_R8
	BOOST_CHECK(x != ev.r8);
# endif
# ifdef GL_R8_SNORM
	BOOST_CHECK(x != ev.r8_snorm);
# endif
# ifdef GL_R8I
	BOOST_CHECK(x != ev.r8i);
# endif
# ifdef GL_R8UI
	BOOST_CHECK(x != ev.r8ui);
# endif
# ifdef GL_RG16
	BOOST_CHECK(x != ev.rg16);
# endif
	BOOST_CHECK(x == ev.rg16_snorm);
# ifdef GL_RG16F
	BOOST_CHECK(x != ev.rg16f);
# endif
# ifdef GL_RG16I
	BOOST_CHECK(x != ev.rg16i);
# endif
# ifdef GL_RG16UI
	BOOST_CHECK(x != ev.rg16ui);
# endif
# ifdef GL_RG32F
	BOOST_CHECK(x != ev.rg32f);
# endif
# ifdef GL_RG32I
	BOOST_CHECK(x != ev.rg32i);
# endif
# ifdef GL_RG32UI
	BOOST_CHECK(x != ev.rg32ui);
# endif
# ifdef GL_RG8
	BOOST_CHECK(x != ev.rg8);
# endif
# ifdef GL_RG8_SNORM
	BOOST_CHECK(x != ev.rg8_snorm);
# endif
# ifdef GL_RG8I
	BOOST_CHECK(x != ev.rg8i);
# endif
# ifdef GL_RG8UI
	BOOST_CHECK(x != ev.rg8ui);
# endif
# ifdef GL_RGB10_A2
	BOOST_CHECK(x != ev.rgb10_a2);
# endif
# ifdef GL_RGB10_A2UI
	BOOST_CHECK(x != ev.rgb10_a2ui);
# endif
# ifdef GL_RGBA16
	BOOST_CHECK(x != ev.rgba16);
# endif
# ifdef GL_RGBA16_SNORM
	BOOST_CHECK(x != ev.rgba16_snorm);
# endif
# ifdef GL_RGBA16F
	BOOST_CHECK(x != ev.rgba16f);
# endif
# ifdef GL_RGBA16I
	BOOST_CHECK(x != ev.rgba16i);
# endif
# ifdef GL_RGBA16UI
	BOOST_CHECK(x != ev.rgba16ui);
# endif
# ifdef GL_RGBA32F
	BOOST_CHECK(x != ev.rgba32f);
# endif
# ifdef GL_RGBA32I
	BOOST_CHECK(x != ev.rgba32i);
# endif
# ifdef GL_RGBA32UI
	BOOST_CHECK(x != ev.rgba32ui);
# endif
# ifdef GL_RGBA8
	BOOST_CHECK(x != ev.rgba8);
# endif
# ifdef GL_RGBA8_SNORM
	BOOST_CHECK(x != ev.rgba8_snorm);
# endif
# ifdef GL_RGBA8I
	BOOST_CHECK(x != ev.rgba8i);
# endif
# ifdef GL_RGBA8UI
	BOOST_CHECK(x != ev.rgba8ui);
# endif
#endif

#ifdef GL_RG16F
	x = ev.rg16f;
# ifdef GL_R11F_G11F_B10F
	BOOST_CHECK(x != ev.r11f_g11f_b10f);
# endif
# ifdef GL_R16
	BOOST_CHECK(x != ev.r16);
# endif
# ifdef GL_R16_SNORM
	BOOST_CHECK(x != ev.r16_snorm);
# endif
# ifdef GL_R16F
	BOOST_CHECK(x != ev.r16f);
# endif
# ifdef GL_R16I
	BOOST_CHECK(x != ev.r16i);
# endif
# ifdef GL_R16UI
	BOOST_CHECK(x != ev.r16ui);
# endif
# ifdef GL_R32F
	BOOST_CHECK(x != ev.r32f);
# endif
# ifdef GL_R32I
	BOOST_CHECK(x != ev.r32i);
# endif
# ifdef GL_R32UI
	BOOST_CHECK(x != ev.r32ui);
# endif
# ifdef GL_R8
	BOOST_CHECK(x != ev.r8);
# endif
# ifdef GL_R8_SNORM
	BOOST_CHECK(x != ev.r8_snorm);
# endif
# ifdef GL_R8I
	BOOST_CHECK(x != ev.r8i);
# endif
# ifdef GL_R8UI
	BOOST_CHECK(x != ev.r8ui);
# endif
# ifdef GL_RG16
	BOOST_CHECK(x != ev.rg16);
# endif
# ifdef GL_RG16_SNORM
	BOOST_CHECK(x != ev.rg16_snorm);
# endif
	BOOST_CHECK(x == ev.rg16f);
# ifdef GL_RG16I
	BOOST_CHECK(x != ev.rg16i);
# endif
# ifdef GL_RG16UI
	BOOST_CHECK(x != ev.rg16ui);
# endif
# ifdef GL_RG32F
	BOOST_CHECK(x != ev.rg32f);
# endif
# ifdef GL_RG32I
	BOOST_CHECK(x != ev.rg32i);
# endif
# ifdef GL_RG32UI
	BOOST_CHECK(x != ev.rg32ui);
# endif
# ifdef GL_RG8
	BOOST_CHECK(x != ev.rg8);
# endif
# ifdef GL_RG8_SNORM
	BOOST_CHECK(x != ev.rg8_snorm);
# endif
# ifdef GL_RG8I
	BOOST_CHECK(x != ev.rg8i);
# endif
# ifdef GL_RG8UI
	BOOST_CHECK(x != ev.rg8ui);
# endif
# ifdef GL_RGB10_A2
	BOOST_CHECK(x != ev.rgb10_a2);
# endif
# ifdef GL_RGB10_A2UI
	BOOST_CHECK(x != ev.rgb10_a2ui);
# endif
# ifdef GL_RGBA16
	BOOST_CHECK(x != ev.rgba16);
# endif
# ifdef GL_RGBA16_SNORM
	BOOST_CHECK(x != ev.rgba16_snorm);
# endif
# ifdef GL_RGBA16F
	BOOST_CHECK(x != ev.rgba16f);
# endif
# ifdef GL_RGBA16I
	BOOST_CHECK(x != ev.rgba16i);
# endif
# ifdef GL_RGBA16UI
	BOOST_CHECK(x != ev.rgba16ui);
# endif
# ifdef GL_RGBA32F
	BOOST_CHECK(x != ev.rgba32f);
# endif
# ifdef GL_RGBA32I
	BOOST_CHECK(x != ev.rgba32i);
# endif
# ifdef GL_RGBA32UI
	BOOST_CHECK(x != ev.rgba32ui);
# endif
# ifdef GL_RGBA8
	BOOST_CHECK(x != ev.rgba8);
# endif
# ifdef GL_RGBA8_SNORM
	BOOST_CHECK(x != ev.rgba8_snorm);
# endif
# ifdef GL_RGBA8I
	BOOST_CHECK(x != ev.rgba8i);
# endif
# ifdef GL_RGBA8UI
	BOOST_CHECK(x != ev.rgba8ui);
# endif
#endif

#ifdef GL_RG16I
	x = ev.rg16i;
# ifdef GL_R11F_G11F_B10F
	BOOST_CHECK(x != ev.r11f_g11f_b10f);
# endif
# ifdef GL_R16
	BOOST_CHECK(x != ev.r16);
# endif
# ifdef GL_R16_SNORM
	BOOST_CHECK(x != ev.r16_snorm);
# endif
# ifdef GL_R16F
	BOOST_CHECK(x != ev.r16f);
# endif
# ifdef GL_R16I
	BOOST_CHECK(x != ev.r16i);
# endif
# ifdef GL_R16UI
	BOOST_CHECK(x != ev.r16ui);
# endif
# ifdef GL_R32F
	BOOST_CHECK(x != ev.r32f);
# endif
# ifdef GL_R32I
	BOOST_CHECK(x != ev.r32i);
# endif
# ifdef GL_R32UI
	BOOST_CHECK(x != ev.r32ui);
# endif
# ifdef GL_R8
	BOOST_CHECK(x != ev.r8);
# endif
# ifdef GL_R8_SNORM
	BOOST_CHECK(x != ev.r8_snorm);
# endif
# ifdef GL_R8I
	BOOST_CHECK(x != ev.r8i);
# endif
# ifdef GL_R8UI
	BOOST_CHECK(x != ev.r8ui);
# endif
# ifdef GL_RG16
	BOOST_CHECK(x != ev.rg16);
# endif
# ifdef GL_RG16_SNORM
	BOOST_CHECK(x != ev.rg16_snorm);
# endif
# ifdef GL_RG16F
	BOOST_CHECK(x != ev.rg16f);
# endif
	BOOST_CHECK(x == ev.rg16i);
# ifdef GL_RG16UI
	BOOST_CHECK(x != ev.rg16ui);
# endif
# ifdef GL_RG32F
	BOOST_CHECK(x != ev.rg32f);
# endif
# ifdef GL_RG32I
	BOOST_CHECK(x != ev.rg32i);
# endif
# ifdef GL_RG32UI
	BOOST_CHECK(x != ev.rg32ui);
# endif
# ifdef GL_RG8
	BOOST_CHECK(x != ev.rg8);
# endif
# ifdef GL_RG8_SNORM
	BOOST_CHECK(x != ev.rg8_snorm);
# endif
# ifdef GL_RG8I
	BOOST_CHECK(x != ev.rg8i);
# endif
# ifdef GL_RG8UI
	BOOST_CHECK(x != ev.rg8ui);
# endif
# ifdef GL_RGB10_A2
	BOOST_CHECK(x != ev.rgb10_a2);
# endif
# ifdef GL_RGB10_A2UI
	BOOST_CHECK(x != ev.rgb10_a2ui);
# endif
# ifdef GL_RGBA16
	BOOST_CHECK(x != ev.rgba16);
# endif
# ifdef GL_RGBA16_SNORM
	BOOST_CHECK(x != ev.rgba16_snorm);
# endif
# ifdef GL_RGBA16F
	BOOST_CHECK(x != ev.rgba16f);
# endif
# ifdef GL_RGBA16I
	BOOST_CHECK(x != ev.rgba16i);
# endif
# ifdef GL_RGBA16UI
	BOOST_CHECK(x != ev.rgba16ui);
# endif
# ifdef GL_RGBA32F
	BOOST_CHECK(x != ev.rgba32f);
# endif
# ifdef GL_RGBA32I
	BOOST_CHECK(x != ev.rgba32i);
# endif
# ifdef GL_RGBA32UI
	BOOST_CHECK(x != ev.rgba32ui);
# endif
# ifdef GL_RGBA8
	BOOST_CHECK(x != ev.rgba8);
# endif
# ifdef GL_RGBA8_SNORM
	BOOST_CHECK(x != ev.rgba8_snorm);
# endif
# ifdef GL_RGBA8I
	BOOST_CHECK(x != ev.rgba8i);
# endif
# ifdef GL_RGBA8UI
	BOOST_CHECK(x != ev.rgba8ui);
# endif
#endif

#ifdef GL_RG16UI
	x = ev.rg16ui;
# ifdef GL_R11F_G11F_B10F
	BOOST_CHECK(x != ev.r11f_g11f_b10f);
# endif
# ifdef GL_R16
	BOOST_CHECK(x != ev.r16);
# endif
# ifdef GL_R16_SNORM
	BOOST_CHECK(x != ev.r16_snorm);
# endif
# ifdef GL_R16F
	BOOST_CHECK(x != ev.r16f);
# endif
# ifdef GL_R16I
	BOOST_CHECK(x != ev.r16i);
# endif
# ifdef GL_R16UI
	BOOST_CHECK(x != ev.r16ui);
# endif
# ifdef GL_R32F
	BOOST_CHECK(x != ev.r32f);
# endif
# ifdef GL_R32I
	BOOST_CHECK(x != ev.r32i);
# endif
# ifdef GL_R32UI
	BOOST_CHECK(x != ev.r32ui);
# endif
# ifdef GL_R8
	BOOST_CHECK(x != ev.r8);
# endif
# ifdef GL_R8_SNORM
	BOOST_CHECK(x != ev.r8_snorm);
# endif
# ifdef GL_R8I
	BOOST_CHECK(x != ev.r8i);
# endif
# ifdef GL_R8UI
	BOOST_CHECK(x != ev.r8ui);
# endif
# ifdef GL_RG16
	BOOST_CHECK(x != ev.rg16);
# endif
# ifdef GL_RG16_SNORM
	BOOST_CHECK(x != ev.rg16_snorm);
# endif
# ifdef GL_RG16F
	BOOST_CHECK(x != ev.rg16f);
# endif
# ifdef GL_RG16I
	BOOST_CHECK(x != ev.rg16i);
# endif
	BOOST_CHECK(x == ev.rg16ui);
# ifdef GL_RG32F
	BOOST_CHECK(x != ev.rg32f);
# endif
# ifdef GL_RG32I
	BOOST_CHECK(x != ev.rg32i);
# endif
# ifdef GL_RG32UI
	BOOST_CHECK(x != ev.rg32ui);
# endif
# ifdef GL_RG8
	BOOST_CHECK(x != ev.rg8);
# endif
# ifdef GL_RG8_SNORM
	BOOST_CHECK(x != ev.rg8_snorm);
# endif
# ifdef GL_RG8I
	BOOST_CHECK(x != ev.rg8i);
# endif
# ifdef GL_RG8UI
	BOOST_CHECK(x != ev.rg8ui);
# endif
# ifdef GL_RGB10_A2
	BOOST_CHECK(x != ev.rgb10_a2);
# endif
# ifdef GL_RGB10_A2UI
	BOOST_CHECK(x != ev.rgb10_a2ui);
# endif
# ifdef GL_RGBA16
	BOOST_CHECK(x != ev.rgba16);
# endif
# ifdef GL_RGBA16_SNORM
	BOOST_CHECK(x != ev.rgba16_snorm);
# endif
# ifdef GL_RGBA16F
	BOOST_CHECK(x != ev.rgba16f);
# endif
# ifdef GL_RGBA16I
	BOOST_CHECK(x != ev.rgba16i);
# endif
# ifdef GL_RGBA16UI
	BOOST_CHECK(x != ev.rgba16ui);
# endif
# ifdef GL_RGBA32F
	BOOST_CHECK(x != ev.rgba32f);
# endif
# ifdef GL_RGBA32I
	BOOST_CHECK(x != ev.rgba32i);
# endif
# ifdef GL_RGBA32UI
	BOOST_CHECK(x != ev.rgba32ui);
# endif
# ifdef GL_RGBA8
	BOOST_CHECK(x != ev.rgba8);
# endif
# ifdef GL_RGBA8_SNORM
	BOOST_CHECK(x != ev.rgba8_snorm);
# endif
# ifdef GL_RGBA8I
	BOOST_CHECK(x != ev.rgba8i);
# endif
# ifdef GL_RGBA8UI
	BOOST_CHECK(x != ev.rgba8ui);
# endif
#endif

#ifdef GL_RG32F
	x = ev.rg32f;
# ifdef GL_R11F_G11F_B10F
	BOOST_CHECK(x != ev.r11f_g11f_b10f);
# endif
# ifdef GL_R16
	BOOST_CHECK(x != ev.r16);
# endif
# ifdef GL_R16_SNORM
	BOOST_CHECK(x != ev.r16_snorm);
# endif
# ifdef GL_R16F
	BOOST_CHECK(x != ev.r16f);
# endif
# ifdef GL_R16I
	BOOST_CHECK(x != ev.r16i);
# endif
# ifdef GL_R16UI
	BOOST_CHECK(x != ev.r16ui);
# endif
# ifdef GL_R32F
	BOOST_CHECK(x != ev.r32f);
# endif
# ifdef GL_R32I
	BOOST_CHECK(x != ev.r32i);
# endif
# ifdef GL_R32UI
	BOOST_CHECK(x != ev.r32ui);
# endif
# ifdef GL_R8
	BOOST_CHECK(x != ev.r8);
# endif
# ifdef GL_R8_SNORM
	BOOST_CHECK(x != ev.r8_snorm);
# endif
# ifdef GL_R8I
	BOOST_CHECK(x != ev.r8i);
# endif
# ifdef GL_R8UI
	BOOST_CHECK(x != ev.r8ui);
# endif
# ifdef GL_RG16
	BOOST_CHECK(x != ev.rg16);
# endif
# ifdef GL_RG16_SNORM
	BOOST_CHECK(x != ev.rg16_snorm);
# endif
# ifdef GL_RG16F
	BOOST_CHECK(x != ev.rg16f);
# endif
# ifdef GL_RG16I
	BOOST_CHECK(x != ev.rg16i);
# endif
# ifdef GL_RG16UI
	BOOST_CHECK(x != ev.rg16ui);
# endif
	BOOST_CHECK(x == ev.rg32f);
# ifdef GL_RG32I
	BOOST_CHECK(x != ev.rg32i);
# endif
# ifdef GL_RG32UI
	BOOST_CHECK(x != ev.rg32ui);
# endif
# ifdef GL_RG8
	BOOST_CHECK(x != ev.rg8);
# endif
# ifdef GL_RG8_SNORM
	BOOST_CHECK(x != ev.rg8_snorm);
# endif
# ifdef GL_RG8I
	BOOST_CHECK(x != ev.rg8i);
# endif
# ifdef GL_RG8UI
	BOOST_CHECK(x != ev.rg8ui);
# endif
# ifdef GL_RGB10_A2
	BOOST_CHECK(x != ev.rgb10_a2);
# endif
# ifdef GL_RGB10_A2UI
	BOOST_CHECK(x != ev.rgb10_a2ui);
# endif
# ifdef GL_RGBA16
	BOOST_CHECK(x != ev.rgba16);
# endif
# ifdef GL_RGBA16_SNORM
	BOOST_CHECK(x != ev.rgba16_snorm);
# endif
# ifdef GL_RGBA16F
	BOOST_CHECK(x != ev.rgba16f);
# endif
# ifdef GL_RGBA16I
	BOOST_CHECK(x != ev.rgba16i);
# endif
# ifdef GL_RGBA16UI
	BOOST_CHECK(x != ev.rgba16ui);
# endif
# ifdef GL_RGBA32F
	BOOST_CHECK(x != ev.rgba32f);
# endif
# ifdef GL_RGBA32I
	BOOST_CHECK(x != ev.rgba32i);
# endif
# ifdef GL_RGBA32UI
	BOOST_CHECK(x != ev.rgba32ui);
# endif
# ifdef GL_RGBA8
	BOOST_CHECK(x != ev.rgba8);
# endif
# ifdef GL_RGBA8_SNORM
	BOOST_CHECK(x != ev.rgba8_snorm);
# endif
# ifdef GL_RGBA8I
	BOOST_CHECK(x != ev.rgba8i);
# endif
# ifdef GL_RGBA8UI
	BOOST_CHECK(x != ev.rgba8ui);
# endif
#endif

#ifdef GL_RG32I
	x = ev.rg32i;
# ifdef GL_R11F_G11F_B10F
	BOOST_CHECK(x != ev.r11f_g11f_b10f);
# endif
# ifdef GL_R16
	BOOST_CHECK(x != ev.r16);
# endif
# ifdef GL_R16_SNORM
	BOOST_CHECK(x != ev.r16_snorm);
# endif
# ifdef GL_R16F
	BOOST_CHECK(x != ev.r16f);
# endif
# ifdef GL_R16I
	BOOST_CHECK(x != ev.r16i);
# endif
# ifdef GL_R16UI
	BOOST_CHECK(x != ev.r16ui);
# endif
# ifdef GL_R32F
	BOOST_CHECK(x != ev.r32f);
# endif
# ifdef GL_R32I
	BOOST_CHECK(x != ev.r32i);
# endif
# ifdef GL_R32UI
	BOOST_CHECK(x != ev.r32ui);
# endif
# ifdef GL_R8
	BOOST_CHECK(x != ev.r8);
# endif
# ifdef GL_R8_SNORM
	BOOST_CHECK(x != ev.r8_snorm);
# endif
# ifdef GL_R8I
	BOOST_CHECK(x != ev.r8i);
# endif
# ifdef GL_R8UI
	BOOST_CHECK(x != ev.r8ui);
# endif
# ifdef GL_RG16
	BOOST_CHECK(x != ev.rg16);
# endif
# ifdef GL_RG16_SNORM
	BOOST_CHECK(x != ev.rg16_snorm);
# endif
# ifdef GL_RG16F
	BOOST_CHECK(x != ev.rg16f);
# endif
# ifdef GL_RG16I
	BOOST_CHECK(x != ev.rg16i);
# endif
# ifdef GL_RG16UI
	BOOST_CHECK(x != ev.rg16ui);
# endif
# ifdef GL_RG32F
	BOOST_CHECK(x != ev.rg32f);
# endif
	BOOST_CHECK(x == ev.rg32i);
# ifdef GL_RG32UI
	BOOST_CHECK(x != ev.rg32ui);
# endif
# ifdef GL_RG8
	BOOST_CHECK(x != ev.rg8);
# endif
# ifdef GL_RG8_SNORM
	BOOST_CHECK(x != ev.rg8_snorm);
# endif
# ifdef GL_RG8I
	BOOST_CHECK(x != ev.rg8i);
# endif
# ifdef GL_RG8UI
	BOOST_CHECK(x != ev.rg8ui);
# endif
# ifdef GL_RGB10_A2
	BOOST_CHECK(x != ev.rgb10_a2);
# endif
# ifdef GL_RGB10_A2UI
	BOOST_CHECK(x != ev.rgb10_a2ui);
# endif
# ifdef GL_RGBA16
	BOOST_CHECK(x != ev.rgba16);
# endif
# ifdef GL_RGBA16_SNORM
	BOOST_CHECK(x != ev.rgba16_snorm);
# endif
# ifdef GL_RGBA16F
	BOOST_CHECK(x != ev.rgba16f);
# endif
# ifdef GL_RGBA16I
	BOOST_CHECK(x != ev.rgba16i);
# endif
# ifdef GL_RGBA16UI
	BOOST_CHECK(x != ev.rgba16ui);
# endif
# ifdef GL_RGBA32F
	BOOST_CHECK(x != ev.rgba32f);
# endif
# ifdef GL_RGBA32I
	BOOST_CHECK(x != ev.rgba32i);
# endif
# ifdef GL_RGBA32UI
	BOOST_CHECK(x != ev.rgba32ui);
# endif
# ifdef GL_RGBA8
	BOOST_CHECK(x != ev.rgba8);
# endif
# ifdef GL_RGBA8_SNORM
	BOOST_CHECK(x != ev.rgba8_snorm);
# endif
# ifdef GL_RGBA8I
	BOOST_CHECK(x != ev.rgba8i);
# endif
# ifdef GL_RGBA8UI
	BOOST_CHECK(x != ev.rgba8ui);
# endif
#endif

#ifdef GL_RG32UI
	x = ev.rg32ui;
# ifdef GL_R11F_G11F_B10F
	BOOST_CHECK(x != ev.r11f_g11f_b10f);
# endif
# ifdef GL_R16
	BOOST_CHECK(x != ev.r16);
# endif
# ifdef GL_R16_SNORM
	BOOST_CHECK(x != ev.r16_snorm);
# endif
# ifdef GL_R16F
	BOOST_CHECK(x != ev.r16f);
# endif
# ifdef GL_R16I
	BOOST_CHECK(x != ev.r16i);
# endif
# ifdef GL_R16UI
	BOOST_CHECK(x != ev.r16ui);
# endif
# ifdef GL_R32F
	BOOST_CHECK(x != ev.r32f);
# endif
# ifdef GL_R32I
	BOOST_CHECK(x != ev.r32i);
# endif
# ifdef GL_R32UI
	BOOST_CHECK(x != ev.r32ui);
# endif
# ifdef GL_R8
	BOOST_CHECK(x != ev.r8);
# endif
# ifdef GL_R8_SNORM
	BOOST_CHECK(x != ev.r8_snorm);
# endif
# ifdef GL_R8I
	BOOST_CHECK(x != ev.r8i);
# endif
# ifdef GL_R8UI
	BOOST_CHECK(x != ev.r8ui);
# endif
# ifdef GL_RG16
	BOOST_CHECK(x != ev.rg16);
# endif
# ifdef GL_RG16_SNORM
	BOOST_CHECK(x != ev.rg16_snorm);
# endif
# ifdef GL_RG16F
	BOOST_CHECK(x != ev.rg16f);
# endif
# ifdef GL_RG16I
	BOOST_CHECK(x != ev.rg16i);
# endif
# ifdef GL_RG16UI
	BOOST_CHECK(x != ev.rg16ui);
# endif
# ifdef GL_RG32F
	BOOST_CHECK(x != ev.rg32f);
# endif
# ifdef GL_RG32I
	BOOST_CHECK(x != ev.rg32i);
# endif
	BOOST_CHECK(x == ev.rg32ui);
# ifdef GL_RG8
	BOOST_CHECK(x != ev.rg8);
# endif
# ifdef GL_RG8_SNORM
	BOOST_CHECK(x != ev.rg8_snorm);
# endif
# ifdef GL_RG8I
	BOOST_CHECK(x != ev.rg8i);
# endif
# ifdef GL_RG8UI
	BOOST_CHECK(x != ev.rg8ui);
# endif
# ifdef GL_RGB10_A2
	BOOST_CHECK(x != ev.rgb10_a2);
# endif
# ifdef GL_RGB10_A2UI
	BOOST_CHECK(x != ev.rgb10_a2ui);
# endif
# ifdef GL_RGBA16
	BOOST_CHECK(x != ev.rgba16);
# endif
# ifdef GL_RGBA16_SNORM
	BOOST_CHECK(x != ev.rgba16_snorm);
# endif
# ifdef GL_RGBA16F
	BOOST_CHECK(x != ev.rgba16f);
# endif
# ifdef GL_RGBA16I
	BOOST_CHECK(x != ev.rgba16i);
# endif
# ifdef GL_RGBA16UI
	BOOST_CHECK(x != ev.rgba16ui);
# endif
# ifdef GL_RGBA32F
	BOOST_CHECK(x != ev.rgba32f);
# endif
# ifdef GL_RGBA32I
	BOOST_CHECK(x != ev.rgba32i);
# endif
# ifdef GL_RGBA32UI
	BOOST_CHECK(x != ev.rgba32ui);
# endif
# ifdef GL_RGBA8
	BOOST_CHECK(x != ev.rgba8);
# endif
# ifdef GL_RGBA8_SNORM
	BOOST_CHECK(x != ev.rgba8_snorm);
# endif
# ifdef GL_RGBA8I
	BOOST_CHECK(x != ev.rgba8i);
# endif
# ifdef GL_RGBA8UI
	BOOST_CHECK(x != ev.rgba8ui);
# endif
#endif

#ifdef GL_RG8
	x = ev.rg8;
# ifdef GL_R11F_G11F_B10F
	BOOST_CHECK(x != ev.r11f_g11f_b10f);
# endif
# ifdef GL_R16
	BOOST_CHECK(x != ev.r16);
# endif
# ifdef GL_R16_SNORM
	BOOST_CHECK(x != ev.r16_snorm);
# endif
# ifdef GL_R16F
	BOOST_CHECK(x != ev.r16f);
# endif
# ifdef GL_R16I
	BOOST_CHECK(x != ev.r16i);
# endif
# ifdef GL_R16UI
	BOOST_CHECK(x != ev.r16ui);
# endif
# ifdef GL_R32F
	BOOST_CHECK(x != ev.r32f);
# endif
# ifdef GL_R32I
	BOOST_CHECK(x != ev.r32i);
# endif
# ifdef GL_R32UI
	BOOST_CHECK(x != ev.r32ui);
# endif
# ifdef GL_R8
	BOOST_CHECK(x != ev.r8);
# endif
# ifdef GL_R8_SNORM
	BOOST_CHECK(x != ev.r8_snorm);
# endif
# ifdef GL_R8I
	BOOST_CHECK(x != ev.r8i);
# endif
# ifdef GL_R8UI
	BOOST_CHECK(x != ev.r8ui);
# endif
# ifdef GL_RG16
	BOOST_CHECK(x != ev.rg16);
# endif
# ifdef GL_RG16_SNORM
	BOOST_CHECK(x != ev.rg16_snorm);
# endif
# ifdef GL_RG16F
	BOOST_CHECK(x != ev.rg16f);
# endif
# ifdef GL_RG16I
	BOOST_CHECK(x != ev.rg16i);
# endif
# ifdef GL_RG16UI
	BOOST_CHECK(x != ev.rg16ui);
# endif
# ifdef GL_RG32F
	BOOST_CHECK(x != ev.rg32f);
# endif
# ifdef GL_RG32I
	BOOST_CHECK(x != ev.rg32i);
# endif
# ifdef GL_RG32UI
	BOOST_CHECK(x != ev.rg32ui);
# endif
	BOOST_CHECK(x == ev.rg8);
# ifdef GL_RG8_SNORM
	BOOST_CHECK(x != ev.rg8_snorm);
# endif
# ifdef GL_RG8I
	BOOST_CHECK(x != ev.rg8i);
# endif
# ifdef GL_RG8UI
	BOOST_CHECK(x != ev.rg8ui);
# endif
# ifdef GL_RGB10_A2
	BOOST_CHECK(x != ev.rgb10_a2);
# endif
# ifdef GL_RGB10_A2UI
	BOOST_CHECK(x != ev.rgb10_a2ui);
# endif
# ifdef GL_RGBA16
	BOOST_CHECK(x != ev.rgba16);
# endif
# ifdef GL_RGBA16_SNORM
	BOOST_CHECK(x != ev.rgba16_snorm);
# endif
# ifdef GL_RGBA16F
	BOOST_CHECK(x != ev.rgba16f);
# endif
# ifdef GL_RGBA16I
	BOOST_CHECK(x != ev.rgba16i);
# endif
# ifdef GL_RGBA16UI
	BOOST_CHECK(x != ev.rgba16ui);
# endif
# ifdef GL_RGBA32F
	BOOST_CHECK(x != ev.rgba32f);
# endif
# ifdef GL_RGBA32I
	BOOST_CHECK(x != ev.rgba32i);
# endif
# ifdef GL_RGBA32UI
	BOOST_CHECK(x != ev.rgba32ui);
# endif
# ifdef GL_RGBA8
	BOOST_CHECK(x != ev.rgba8);
# endif
# ifdef GL_RGBA8_SNORM
	BOOST_CHECK(x != ev.rgba8_snorm);
# endif
# ifdef GL_RGBA8I
	BOOST_CHECK(x != ev.rgba8i);
# endif
# ifdef GL_RGBA8UI
	BOOST_CHECK(x != ev.rgba8ui);
# endif
#endif

#ifdef GL_RG8_SNORM
	x = ev.rg8_snorm;
# ifdef GL_R11F_G11F_B10F
	BOOST_CHECK(x != ev.r11f_g11f_b10f);
# endif
# ifdef GL_R16
	BOOST_CHECK(x != ev.r16);
# endif
# ifdef GL_R16_SNORM
	BOOST_CHECK(x != ev.r16_snorm);
# endif
# ifdef GL_R16F
	BOOST_CHECK(x != ev.r16f);
# endif
# ifdef GL_R16I
	BOOST_CHECK(x != ev.r16i);
# endif
# ifdef GL_R16UI
	BOOST_CHECK(x != ev.r16ui);
# endif
# ifdef GL_R32F
	BOOST_CHECK(x != ev.r32f);
# endif
# ifdef GL_R32I
	BOOST_CHECK(x != ev.r32i);
# endif
# ifdef GL_R32UI
	BOOST_CHECK(x != ev.r32ui);
# endif
# ifdef GL_R8
	BOOST_CHECK(x != ev.r8);
# endif
# ifdef GL_R8_SNORM
	BOOST_CHECK(x != ev.r8_snorm);
# endif
# ifdef GL_R8I
	BOOST_CHECK(x != ev.r8i);
# endif
# ifdef GL_R8UI
	BOOST_CHECK(x != ev.r8ui);
# endif
# ifdef GL_RG16
	BOOST_CHECK(x != ev.rg16);
# endif
# ifdef GL_RG16_SNORM
	BOOST_CHECK(x != ev.rg16_snorm);
# endif
# ifdef GL_RG16F
	BOOST_CHECK(x != ev.rg16f);
# endif
# ifdef GL_RG16I
	BOOST_CHECK(x != ev.rg16i);
# endif
# ifdef GL_RG16UI
	BOOST_CHECK(x != ev.rg16ui);
# endif
# ifdef GL_RG32F
	BOOST_CHECK(x != ev.rg32f);
# endif
# ifdef GL_RG32I
	BOOST_CHECK(x != ev.rg32i);
# endif
# ifdef GL_RG32UI
	BOOST_CHECK(x != ev.rg32ui);
# endif
# ifdef GL_RG8
	BOOST_CHECK(x != ev.rg8);
# endif
	BOOST_CHECK(x == ev.rg8_snorm);
# ifdef GL_RG8I
	BOOST_CHECK(x != ev.rg8i);
# endif
# ifdef GL_RG8UI
	BOOST_CHECK(x != ev.rg8ui);
# endif
# ifdef GL_RGB10_A2
	BOOST_CHECK(x != ev.rgb10_a2);
# endif
# ifdef GL_RGB10_A2UI
	BOOST_CHECK(x != ev.rgb10_a2ui);
# endif
# ifdef GL_RGBA16
	BOOST_CHECK(x != ev.rgba16);
# endif
# ifdef GL_RGBA16_SNORM
	BOOST_CHECK(x != ev.rgba16_snorm);
# endif
# ifdef GL_RGBA16F
	BOOST_CHECK(x != ev.rgba16f);
# endif
# ifdef GL_RGBA16I
	BOOST_CHECK(x != ev.rgba16i);
# endif
# ifdef GL_RGBA16UI
	BOOST_CHECK(x != ev.rgba16ui);
# endif
# ifdef GL_RGBA32F
	BOOST_CHECK(x != ev.rgba32f);
# endif
# ifdef GL_RGBA32I
	BOOST_CHECK(x != ev.rgba32i);
# endif
# ifdef GL_RGBA32UI
	BOOST_CHECK(x != ev.rgba32ui);
# endif
# ifdef GL_RGBA8
	BOOST_CHECK(x != ev.rgba8);
# endif
# ifdef GL_RGBA8_SNORM
	BOOST_CHECK(x != ev.rgba8_snorm);
# endif
# ifdef GL_RGBA8I
	BOOST_CHECK(x != ev.rgba8i);
# endif
# ifdef GL_RGBA8UI
	BOOST_CHECK(x != ev.rgba8ui);
# endif
#endif

#ifdef GL_RG8I
	x = ev.rg8i;
# ifdef GL_R11F_G11F_B10F
	BOOST_CHECK(x != ev.r11f_g11f_b10f);
# endif
# ifdef GL_R16
	BOOST_CHECK(x != ev.r16);
# endif
# ifdef GL_R16_SNORM
	BOOST_CHECK(x != ev.r16_snorm);
# endif
# ifdef GL_R16F
	BOOST_CHECK(x != ev.r16f);
# endif
# ifdef GL_R16I
	BOOST_CHECK(x != ev.r16i);
# endif
# ifdef GL_R16UI
	BOOST_CHECK(x != ev.r16ui);
# endif
# ifdef GL_R32F
	BOOST_CHECK(x != ev.r32f);
# endif
# ifdef GL_R32I
	BOOST_CHECK(x != ev.r32i);
# endif
# ifdef GL_R32UI
	BOOST_CHECK(x != ev.r32ui);
# endif
# ifdef GL_R8
	BOOST_CHECK(x != ev.r8);
# endif
# ifdef GL_R8_SNORM
	BOOST_CHECK(x != ev.r8_snorm);
# endif
# ifdef GL_R8I
	BOOST_CHECK(x != ev.r8i);
# endif
# ifdef GL_R8UI
	BOOST_CHECK(x != ev.r8ui);
# endif
# ifdef GL_RG16
	BOOST_CHECK(x != ev.rg16);
# endif
# ifdef GL_RG16_SNORM
	BOOST_CHECK(x != ev.rg16_snorm);
# endif
# ifdef GL_RG16F
	BOOST_CHECK(x != ev.rg16f);
# endif
# ifdef GL_RG16I
	BOOST_CHECK(x != ev.rg16i);
# endif
# ifdef GL_RG16UI
	BOOST_CHECK(x != ev.rg16ui);
# endif
# ifdef GL_RG32F
	BOOST_CHECK(x != ev.rg32f);
# endif
# ifdef GL_RG32I
	BOOST_CHECK(x != ev.rg32i);
# endif
# ifdef GL_RG32UI
	BOOST_CHECK(x != ev.rg32ui);
# endif
# ifdef GL_RG8
	BOOST_CHECK(x != ev.rg8);
# endif
# ifdef GL_RG8_SNORM
	BOOST_CHECK(x != ev.rg8_snorm);
# endif
	BOOST_CHECK(x == ev.rg8i);
# ifdef GL_RG8UI
	BOOST_CHECK(x != ev.rg8ui);
# endif
# ifdef GL_RGB10_A2
	BOOST_CHECK(x != ev.rgb10_a2);
# endif
# ifdef GL_RGB10_A2UI
	BOOST_CHECK(x != ev.rgb10_a2ui);
# endif
# ifdef GL_RGBA16
	BOOST_CHECK(x != ev.rgba16);
# endif
# ifdef GL_RGBA16_SNORM
	BOOST_CHECK(x != ev.rgba16_snorm);
# endif
# ifdef GL_RGBA16F
	BOOST_CHECK(x != ev.rgba16f);
# endif
# ifdef GL_RGBA16I
	BOOST_CHECK(x != ev.rgba16i);
# endif
# ifdef GL_RGBA16UI
	BOOST_CHECK(x != ev.rgba16ui);
# endif
# ifdef GL_RGBA32F
	BOOST_CHECK(x != ev.rgba32f);
# endif
# ifdef GL_RGBA32I
	BOOST_CHECK(x != ev.rgba32i);
# endif
# ifdef GL_RGBA32UI
	BOOST_CHECK(x != ev.rgba32ui);
# endif
# ifdef GL_RGBA8
	BOOST_CHECK(x != ev.rgba8);
# endif
# ifdef GL_RGBA8_SNORM
	BOOST_CHECK(x != ev.rgba8_snorm);
# endif
# ifdef GL_RGBA8I
	BOOST_CHECK(x != ev.rgba8i);
# endif
# ifdef GL_RGBA8UI
	BOOST_CHECK(x != ev.rgba8ui);
# endif
#endif

#ifdef GL_RG8UI
	x = ev.rg8ui;
# ifdef GL_R11F_G11F_B10F
	BOOST_CHECK(x != ev.r11f_g11f_b10f);
# endif
# ifdef GL_R16
	BOOST_CHECK(x != ev.r16);
# endif
# ifdef GL_R16_SNORM
	BOOST_CHECK(x != ev.r16_snorm);
# endif
# ifdef GL_R16F
	BOOST_CHECK(x != ev.r16f);
# endif
# ifdef GL_R16I
	BOOST_CHECK(x != ev.r16i);
# endif
# ifdef GL_R16UI
	BOOST_CHECK(x != ev.r16ui);
# endif
# ifdef GL_R32F
	BOOST_CHECK(x != ev.r32f);
# endif
# ifdef GL_R32I
	BOOST_CHECK(x != ev.r32i);
# endif
# ifdef GL_R32UI
	BOOST_CHECK(x != ev.r32ui);
# endif
# ifdef GL_R8
	BOOST_CHECK(x != ev.r8);
# endif
# ifdef GL_R8_SNORM
	BOOST_CHECK(x != ev.r8_snorm);
# endif
# ifdef GL_R8I
	BOOST_CHECK(x != ev.r8i);
# endif
# ifdef GL_R8UI
	BOOST_CHECK(x != ev.r8ui);
# endif
# ifdef GL_RG16
	BOOST_CHECK(x != ev.rg16);
# endif
# ifdef GL_RG16_SNORM
	BOOST_CHECK(x != ev.rg16_snorm);
# endif
# ifdef GL_RG16F
	BOOST_CHECK(x != ev.rg16f);
# endif
# ifdef GL_RG16I
	BOOST_CHECK(x != ev.rg16i);
# endif
# ifdef GL_RG16UI
	BOOST_CHECK(x != ev.rg16ui);
# endif
# ifdef GL_RG32F
	BOOST_CHECK(x != ev.rg32f);
# endif
# ifdef GL_RG32I
	BOOST_CHECK(x != ev.rg32i);
# endif
# ifdef GL_RG32UI
	BOOST_CHECK(x != ev.rg32ui);
# endif
# ifdef GL_RG8
	BOOST_CHECK(x != ev.rg8);
# endif
# ifdef GL_RG8_SNORM
	BOOST_CHECK(x != ev.rg8_snorm);
# endif
# ifdef GL_RG8I
	BOOST_CHECK(x != ev.rg8i);
# endif
	BOOST_CHECK(x == ev.rg8ui);
# ifdef GL_RGB10_A2
	BOOST_CHECK(x != ev.rgb10_a2);
# endif
# ifdef GL_RGB10_A2UI
	BOOST_CHECK(x != ev.rgb10_a2ui);
# endif
# ifdef GL_RGBA16
	BOOST_CHECK(x != ev.rgba16);
# endif
# ifdef GL_RGBA16_SNORM
	BOOST_CHECK(x != ev.rgba16_snorm);
# endif
# ifdef GL_RGBA16F
	BOOST_CHECK(x != ev.rgba16f);
# endif
# ifdef GL_RGBA16I
	BOOST_CHECK(x != ev.rgba16i);
# endif
# ifdef GL_RGBA16UI
	BOOST_CHECK(x != ev.rgba16ui);
# endif
# ifdef GL_RGBA32F
	BOOST_CHECK(x != ev.rgba32f);
# endif
# ifdef GL_RGBA32I
	BOOST_CHECK(x != ev.rgba32i);
# endif
# ifdef GL_RGBA32UI
	BOOST_CHECK(x != ev.rgba32ui);
# endif
# ifdef GL_RGBA8
	BOOST_CHECK(x != ev.rgba8);
# endif
# ifdef GL_RGBA8_SNORM
	BOOST_CHECK(x != ev.rgba8_snorm);
# endif
# ifdef GL_RGBA8I
	BOOST_CHECK(x != ev.rgba8i);
# endif
# ifdef GL_RGBA8UI
	BOOST_CHECK(x != ev.rgba8ui);
# endif
#endif

#ifdef GL_RGB10_A2
	x = ev.rgb10_a2;
# ifdef GL_R11F_G11F_B10F
	BOOST_CHECK(x != ev.r11f_g11f_b10f);
# endif
# ifdef GL_R16
	BOOST_CHECK(x != ev.r16);
# endif
# ifdef GL_R16_SNORM
	BOOST_CHECK(x != ev.r16_snorm);
# endif
# ifdef GL_R16F
	BOOST_CHECK(x != ev.r16f);
# endif
# ifdef GL_R16I
	BOOST_CHECK(x != ev.r16i);
# endif
# ifdef GL_R16UI
	BOOST_CHECK(x != ev.r16ui);
# endif
# ifdef GL_R32F
	BOOST_CHECK(x != ev.r32f);
# endif
# ifdef GL_R32I
	BOOST_CHECK(x != ev.r32i);
# endif
# ifdef GL_R32UI
	BOOST_CHECK(x != ev.r32ui);
# endif
# ifdef GL_R8
	BOOST_CHECK(x != ev.r8);
# endif
# ifdef GL_R8_SNORM
	BOOST_CHECK(x != ev.r8_snorm);
# endif
# ifdef GL_R8I
	BOOST_CHECK(x != ev.r8i);
# endif
# ifdef GL_R8UI
	BOOST_CHECK(x != ev.r8ui);
# endif
# ifdef GL_RG16
	BOOST_CHECK(x != ev.rg16);
# endif
# ifdef GL_RG16_SNORM
	BOOST_CHECK(x != ev.rg16_snorm);
# endif
# ifdef GL_RG16F
	BOOST_CHECK(x != ev.rg16f);
# endif
# ifdef GL_RG16I
	BOOST_CHECK(x != ev.rg16i);
# endif
# ifdef GL_RG16UI
	BOOST_CHECK(x != ev.rg16ui);
# endif
# ifdef GL_RG32F
	BOOST_CHECK(x != ev.rg32f);
# endif
# ifdef GL_RG32I
	BOOST_CHECK(x != ev.rg32i);
# endif
# ifdef GL_RG32UI
	BOOST_CHECK(x != ev.rg32ui);
# endif
# ifdef GL_RG8
	BOOST_CHECK(x != ev.rg8);
# endif
# ifdef GL_RG8_SNORM
	BOOST_CHECK(x != ev.rg8_snorm);
# endif
# ifdef GL_RG8I
	BOOST_CHECK(x != ev.rg8i);
# endif
# ifdef GL_RG8UI
	BOOST_CHECK(x != ev.rg8ui);
# endif
	BOOST_CHECK(x == ev.rgb10_a2);
# ifdef GL_RGB10_A2UI
	BOOST_CHECK(x != ev.rgb10_a2ui);
# endif
# ifdef GL_RGBA16
	BOOST_CHECK(x != ev.rgba16);
# endif
# ifdef GL_RGBA16_SNORM
	BOOST_CHECK(x != ev.rgba16_snorm);
# endif
# ifdef GL_RGBA16F
	BOOST_CHECK(x != ev.rgba16f);
# endif
# ifdef GL_RGBA16I
	BOOST_CHECK(x != ev.rgba16i);
# endif
# ifdef GL_RGBA16UI
	BOOST_CHECK(x != ev.rgba16ui);
# endif
# ifdef GL_RGBA32F
	BOOST_CHECK(x != ev.rgba32f);
# endif
# ifdef GL_RGBA32I
	BOOST_CHECK(x != ev.rgba32i);
# endif
# ifdef GL_RGBA32UI
	BOOST_CHECK(x != ev.rgba32ui);
# endif
# ifdef GL_RGBA8
	BOOST_CHECK(x != ev.rgba8);
# endif
# ifdef GL_RGBA8_SNORM
	BOOST_CHECK(x != ev.rgba8_snorm);
# endif
# ifdef GL_RGBA8I
	BOOST_CHECK(x != ev.rgba8i);
# endif
# ifdef GL_RGBA8UI
	BOOST_CHECK(x != ev.rgba8ui);
# endif
#endif

#ifdef GL_RGB10_A2UI
	x = ev.rgb10_a2ui;
# ifdef GL_R11F_G11F_B10F
	BOOST_CHECK(x != ev.r11f_g11f_b10f);
# endif
# ifdef GL_R16
	BOOST_CHECK(x != ev.r16);
# endif
# ifdef GL_R16_SNORM
	BOOST_CHECK(x != ev.r16_snorm);
# endif
# ifdef GL_R16F
	BOOST_CHECK(x != ev.r16f);
# endif
# ifdef GL_R16I
	BOOST_CHECK(x != ev.r16i);
# endif
# ifdef GL_R16UI
	BOOST_CHECK(x != ev.r16ui);
# endif
# ifdef GL_R32F
	BOOST_CHECK(x != ev.r32f);
# endif
# ifdef GL_R32I
	BOOST_CHECK(x != ev.r32i);
# endif
# ifdef GL_R32UI
	BOOST_CHECK(x != ev.r32ui);
# endif
# ifdef GL_R8
	BOOST_CHECK(x != ev.r8);
# endif
# ifdef GL_R8_SNORM
	BOOST_CHECK(x != ev.r8_snorm);
# endif
# ifdef GL_R8I
	BOOST_CHECK(x != ev.r8i);
# endif
# ifdef GL_R8UI
	BOOST_CHECK(x != ev.r8ui);
# endif
# ifdef GL_RG16
	BOOST_CHECK(x != ev.rg16);
# endif
# ifdef GL_RG16_SNORM
	BOOST_CHECK(x != ev.rg16_snorm);
# endif
# ifdef GL_RG16F
	BOOST_CHECK(x != ev.rg16f);
# endif
# ifdef GL_RG16I
	BOOST_CHECK(x != ev.rg16i);
# endif
# ifdef GL_RG16UI
	BOOST_CHECK(x != ev.rg16ui);
# endif
# ifdef GL_RG32F
	BOOST_CHECK(x != ev.rg32f);
# endif
# ifdef GL_RG32I
	BOOST_CHECK(x != ev.rg32i);
# endif
# ifdef GL_RG32UI
	BOOST_CHECK(x != ev.rg32ui);
# endif
# ifdef GL_RG8
	BOOST_CHECK(x != ev.rg8);
# endif
# ifdef GL_RG8_SNORM
	BOOST_CHECK(x != ev.rg8_snorm);
# endif
# ifdef GL_RG8I
	BOOST_CHECK(x != ev.rg8i);
# endif
# ifdef GL_RG8UI
	BOOST_CHECK(x != ev.rg8ui);
# endif
# ifdef GL_RGB10_A2
	BOOST_CHECK(x != ev.rgb10_a2);
# endif
	BOOST_CHECK(x == ev.rgb10_a2ui);
# ifdef GL_RGBA16
	BOOST_CHECK(x != ev.rgba16);
# endif
# ifdef GL_RGBA16_SNORM
	BOOST_CHECK(x != ev.rgba16_snorm);
# endif
# ifdef GL_RGBA16F
	BOOST_CHECK(x != ev.rgba16f);
# endif
# ifdef GL_RGBA16I
	BOOST_CHECK(x != ev.rgba16i);
# endif
# ifdef GL_RGBA16UI
	BOOST_CHECK(x != ev.rgba16ui);
# endif
# ifdef GL_RGBA32F
	BOOST_CHECK(x != ev.rgba32f);
# endif
# ifdef GL_RGBA32I
	BOOST_CHECK(x != ev.rgba32i);
# endif
# ifdef GL_RGBA32UI
	BOOST_CHECK(x != ev.rgba32ui);
# endif
# ifdef GL_RGBA8
	BOOST_CHECK(x != ev.rgba8);
# endif
# ifdef GL_RGBA8_SNORM
	BOOST_CHECK(x != ev.rgba8_snorm);
# endif
# ifdef GL_RGBA8I
	BOOST_CHECK(x != ev.rgba8i);
# endif
# ifdef GL_RGBA8UI
	BOOST_CHECK(x != ev.rgba8ui);
# endif
#endif

#ifdef GL_RGBA16
	x = ev.rgba16;
# ifdef GL_R11F_G11F_B10F
	BOOST_CHECK(x != ev.r11f_g11f_b10f);
# endif
# ifdef GL_R16
	BOOST_CHECK(x != ev.r16);
# endif
# ifdef GL_R16_SNORM
	BOOST_CHECK(x != ev.r16_snorm);
# endif
# ifdef GL_R16F
	BOOST_CHECK(x != ev.r16f);
# endif
# ifdef GL_R16I
	BOOST_CHECK(x != ev.r16i);
# endif
# ifdef GL_R16UI
	BOOST_CHECK(x != ev.r16ui);
# endif
# ifdef GL_R32F
	BOOST_CHECK(x != ev.r32f);
# endif
# ifdef GL_R32I
	BOOST_CHECK(x != ev.r32i);
# endif
# ifdef GL_R32UI
	BOOST_CHECK(x != ev.r32ui);
# endif
# ifdef GL_R8
	BOOST_CHECK(x != ev.r8);
# endif
# ifdef GL_R8_SNORM
	BOOST_CHECK(x != ev.r8_snorm);
# endif
# ifdef GL_R8I
	BOOST_CHECK(x != ev.r8i);
# endif
# ifdef GL_R8UI
	BOOST_CHECK(x != ev.r8ui);
# endif
# ifdef GL_RG16
	BOOST_CHECK(x != ev.rg16);
# endif
# ifdef GL_RG16_SNORM
	BOOST_CHECK(x != ev.rg16_snorm);
# endif
# ifdef GL_RG16F
	BOOST_CHECK(x != ev.rg16f);
# endif
# ifdef GL_RG16I
	BOOST_CHECK(x != ev.rg16i);
# endif
# ifdef GL_RG16UI
	BOOST_CHECK(x != ev.rg16ui);
# endif
# ifdef GL_RG32F
	BOOST_CHECK(x != ev.rg32f);
# endif
# ifdef GL_RG32I
	BOOST_CHECK(x != ev.rg32i);
# endif
# ifdef GL_RG32UI
	BOOST_CHECK(x != ev.rg32ui);
# endif
# ifdef GL_RG8
	BOOST_CHECK(x != ev.rg8);
# endif
# ifdef GL_RG8_SNORM
	BOOST_CHECK(x != ev.rg8_snorm);
# endif
# ifdef GL_RG8I
	BOOST_CHECK(x != ev.rg8i);
# endif
# ifdef GL_RG8UI
	BOOST_CHECK(x != ev.rg8ui);
# endif
# ifdef GL_RGB10_A2
	BOOST_CHECK(x != ev.rgb10_a2);
# endif
# ifdef GL_RGB10_A2UI
	BOOST_CHECK(x != ev.rgb10_a2ui);
# endif
	BOOST_CHECK(x == ev.rgba16);
# ifdef GL_RGBA16_SNORM
	BOOST_CHECK(x != ev.rgba16_snorm);
# endif
# ifdef GL_RGBA16F
	BOOST_CHECK(x != ev.rgba16f);
# endif
# ifdef GL_RGBA16I
	BOOST_CHECK(x != ev.rgba16i);
# endif
# ifdef GL_RGBA16UI
	BOOST_CHECK(x != ev.rgba16ui);
# endif
# ifdef GL_RGBA32F
	BOOST_CHECK(x != ev.rgba32f);
# endif
# ifdef GL_RGBA32I
	BOOST_CHECK(x != ev.rgba32i);
# endif
# ifdef GL_RGBA32UI
	BOOST_CHECK(x != ev.rgba32ui);
# endif
# ifdef GL_RGBA8
	BOOST_CHECK(x != ev.rgba8);
# endif
# ifdef GL_RGBA8_SNORM
	BOOST_CHECK(x != ev.rgba8_snorm);
# endif
# ifdef GL_RGBA8I
	BOOST_CHECK(x != ev.rgba8i);
# endif
# ifdef GL_RGBA8UI
	BOOST_CHECK(x != ev.rgba8ui);
# endif
#endif

#ifdef GL_RGBA16_SNORM
	x = ev.rgba16_snorm;
# ifdef GL_R11F_G11F_B10F
	BOOST_CHECK(x != ev.r11f_g11f_b10f);
# endif
# ifdef GL_R16
	BOOST_CHECK(x != ev.r16);
# endif
# ifdef GL_R16_SNORM
	BOOST_CHECK(x != ev.r16_snorm);
# endif
# ifdef GL_R16F
	BOOST_CHECK(x != ev.r16f);
# endif
# ifdef GL_R16I
	BOOST_CHECK(x != ev.r16i);
# endif
# ifdef GL_R16UI
	BOOST_CHECK(x != ev.r16ui);
# endif
# ifdef GL_R32F
	BOOST_CHECK(x != ev.r32f);
# endif
# ifdef GL_R32I
	BOOST_CHECK(x != ev.r32i);
# endif
# ifdef GL_R32UI
	BOOST_CHECK(x != ev.r32ui);
# endif
# ifdef GL_R8
	BOOST_CHECK(x != ev.r8);
# endif
# ifdef GL_R8_SNORM
	BOOST_CHECK(x != ev.r8_snorm);
# endif
# ifdef GL_R8I
	BOOST_CHECK(x != ev.r8i);
# endif
# ifdef GL_R8UI
	BOOST_CHECK(x != ev.r8ui);
# endif
# ifdef GL_RG16
	BOOST_CHECK(x != ev.rg16);
# endif
# ifdef GL_RG16_SNORM
	BOOST_CHECK(x != ev.rg16_snorm);
# endif
# ifdef GL_RG16F
	BOOST_CHECK(x != ev.rg16f);
# endif
# ifdef GL_RG16I
	BOOST_CHECK(x != ev.rg16i);
# endif
# ifdef GL_RG16UI
	BOOST_CHECK(x != ev.rg16ui);
# endif
# ifdef GL_RG32F
	BOOST_CHECK(x != ev.rg32f);
# endif
# ifdef GL_RG32I
	BOOST_CHECK(x != ev.rg32i);
# endif
# ifdef GL_RG32UI
	BOOST_CHECK(x != ev.rg32ui);
# endif
# ifdef GL_RG8
	BOOST_CHECK(x != ev.rg8);
# endif
# ifdef GL_RG8_SNORM
	BOOST_CHECK(x != ev.rg8_snorm);
# endif
# ifdef GL_RG8I
	BOOST_CHECK(x != ev.rg8i);
# endif
# ifdef GL_RG8UI
	BOOST_CHECK(x != ev.rg8ui);
# endif
# ifdef GL_RGB10_A2
	BOOST_CHECK(x != ev.rgb10_a2);
# endif
# ifdef GL_RGB10_A2UI
	BOOST_CHECK(x != ev.rgb10_a2ui);
# endif
# ifdef GL_RGBA16
	BOOST_CHECK(x != ev.rgba16);
# endif
	BOOST_CHECK(x == ev.rgba16_snorm);
# ifdef GL_RGBA16F
	BOOST_CHECK(x != ev.rgba16f);
# endif
# ifdef GL_RGBA16I
	BOOST_CHECK(x != ev.rgba16i);
# endif
# ifdef GL_RGBA16UI
	BOOST_CHECK(x != ev.rgba16ui);
# endif
# ifdef GL_RGBA32F
	BOOST_CHECK(x != ev.rgba32f);
# endif
# ifdef GL_RGBA32I
	BOOST_CHECK(x != ev.rgba32i);
# endif
# ifdef GL_RGBA32UI
	BOOST_CHECK(x != ev.rgba32ui);
# endif
# ifdef GL_RGBA8
	BOOST_CHECK(x != ev.rgba8);
# endif
# ifdef GL_RGBA8_SNORM
	BOOST_CHECK(x != ev.rgba8_snorm);
# endif
# ifdef GL_RGBA8I
	BOOST_CHECK(x != ev.rgba8i);
# endif
# ifdef GL_RGBA8UI
	BOOST_CHECK(x != ev.rgba8ui);
# endif
#endif

#ifdef GL_RGBA16F
	x = ev.rgba16f;
# ifdef GL_R11F_G11F_B10F
	BOOST_CHECK(x != ev.r11f_g11f_b10f);
# endif
# ifdef GL_R16
	BOOST_CHECK(x != ev.r16);
# endif
# ifdef GL_R16_SNORM
	BOOST_CHECK(x != ev.r16_snorm);
# endif
# ifdef GL_R16F
	BOOST_CHECK(x != ev.r16f);
# endif
# ifdef GL_R16I
	BOOST_CHECK(x != ev.r16i);
# endif
# ifdef GL_R16UI
	BOOST_CHECK(x != ev.r16ui);
# endif
# ifdef GL_R32F
	BOOST_CHECK(x != ev.r32f);
# endif
# ifdef GL_R32I
	BOOST_CHECK(x != ev.r32i);
# endif
# ifdef GL_R32UI
	BOOST_CHECK(x != ev.r32ui);
# endif
# ifdef GL_R8
	BOOST_CHECK(x != ev.r8);
# endif
# ifdef GL_R8_SNORM
	BOOST_CHECK(x != ev.r8_snorm);
# endif
# ifdef GL_R8I
	BOOST_CHECK(x != ev.r8i);
# endif
# ifdef GL_R8UI
	BOOST_CHECK(x != ev.r8ui);
# endif
# ifdef GL_RG16
	BOOST_CHECK(x != ev.rg16);
# endif
# ifdef GL_RG16_SNORM
	BOOST_CHECK(x != ev.rg16_snorm);
# endif
# ifdef GL_RG16F
	BOOST_CHECK(x != ev.rg16f);
# endif
# ifdef GL_RG16I
	BOOST_CHECK(x != ev.rg16i);
# endif
# ifdef GL_RG16UI
	BOOST_CHECK(x != ev.rg16ui);
# endif
# ifdef GL_RG32F
	BOOST_CHECK(x != ev.rg32f);
# endif
# ifdef GL_RG32I
	BOOST_CHECK(x != ev.rg32i);
# endif
# ifdef GL_RG32UI
	BOOST_CHECK(x != ev.rg32ui);
# endif
# ifdef GL_RG8
	BOOST_CHECK(x != ev.rg8);
# endif
# ifdef GL_RG8_SNORM
	BOOST_CHECK(x != ev.rg8_snorm);
# endif
# ifdef GL_RG8I
	BOOST_CHECK(x != ev.rg8i);
# endif
# ifdef GL_RG8UI
	BOOST_CHECK(x != ev.rg8ui);
# endif
# ifdef GL_RGB10_A2
	BOOST_CHECK(x != ev.rgb10_a2);
# endif
# ifdef GL_RGB10_A2UI
	BOOST_CHECK(x != ev.rgb10_a2ui);
# endif
# ifdef GL_RGBA16
	BOOST_CHECK(x != ev.rgba16);
# endif
# ifdef GL_RGBA16_SNORM
	BOOST_CHECK(x != ev.rgba16_snorm);
# endif
	BOOST_CHECK(x == ev.rgba16f);
# ifdef GL_RGBA16I
	BOOST_CHECK(x != ev.rgba16i);
# endif
# ifdef GL_RGBA16UI
	BOOST_CHECK(x != ev.rgba16ui);
# endif
# ifdef GL_RGBA32F
	BOOST_CHECK(x != ev.rgba32f);
# endif
# ifdef GL_RGBA32I
	BOOST_CHECK(x != ev.rgba32i);
# endif
# ifdef GL_RGBA32UI
	BOOST_CHECK(x != ev.rgba32ui);
# endif
# ifdef GL_RGBA8
	BOOST_CHECK(x != ev.rgba8);
# endif
# ifdef GL_RGBA8_SNORM
	BOOST_CHECK(x != ev.rgba8_snorm);
# endif
# ifdef GL_RGBA8I
	BOOST_CHECK(x != ev.rgba8i);
# endif
# ifdef GL_RGBA8UI
	BOOST_CHECK(x != ev.rgba8ui);
# endif
#endif

#ifdef GL_RGBA16I
	x = ev.rgba16i;
# ifdef GL_R11F_G11F_B10F
	BOOST_CHECK(x != ev.r11f_g11f_b10f);
# endif
# ifdef GL_R16
	BOOST_CHECK(x != ev.r16);
# endif
# ifdef GL_R16_SNORM
	BOOST_CHECK(x != ev.r16_snorm);
# endif
# ifdef GL_R16F
	BOOST_CHECK(x != ev.r16f);
# endif
# ifdef GL_R16I
	BOOST_CHECK(x != ev.r16i);
# endif
# ifdef GL_R16UI
	BOOST_CHECK(x != ev.r16ui);
# endif
# ifdef GL_R32F
	BOOST_CHECK(x != ev.r32f);
# endif
# ifdef GL_R32I
	BOOST_CHECK(x != ev.r32i);
# endif
# ifdef GL_R32UI
	BOOST_CHECK(x != ev.r32ui);
# endif
# ifdef GL_R8
	BOOST_CHECK(x != ev.r8);
# endif
# ifdef GL_R8_SNORM
	BOOST_CHECK(x != ev.r8_snorm);
# endif
# ifdef GL_R8I
	BOOST_CHECK(x != ev.r8i);
# endif
# ifdef GL_R8UI
	BOOST_CHECK(x != ev.r8ui);
# endif
# ifdef GL_RG16
	BOOST_CHECK(x != ev.rg16);
# endif
# ifdef GL_RG16_SNORM
	BOOST_CHECK(x != ev.rg16_snorm);
# endif
# ifdef GL_RG16F
	BOOST_CHECK(x != ev.rg16f);
# endif
# ifdef GL_RG16I
	BOOST_CHECK(x != ev.rg16i);
# endif
# ifdef GL_RG16UI
	BOOST_CHECK(x != ev.rg16ui);
# endif
# ifdef GL_RG32F
	BOOST_CHECK(x != ev.rg32f);
# endif
# ifdef GL_RG32I
	BOOST_CHECK(x != ev.rg32i);
# endif
# ifdef GL_RG32UI
	BOOST_CHECK(x != ev.rg32ui);
# endif
# ifdef GL_RG8
	BOOST_CHECK(x != ev.rg8);
# endif
# ifdef GL_RG8_SNORM
	BOOST_CHECK(x != ev.rg8_snorm);
# endif
# ifdef GL_RG8I
	BOOST_CHECK(x != ev.rg8i);
# endif
# ifdef GL_RG8UI
	BOOST_CHECK(x != ev.rg8ui);
# endif
# ifdef GL_RGB10_A2
	BOOST_CHECK(x != ev.rgb10_a2);
# endif
# ifdef GL_RGB10_A2UI
	BOOST_CHECK(x != ev.rgb10_a2ui);
# endif
# ifdef GL_RGBA16
	BOOST_CHECK(x != ev.rgba16);
# endif
# ifdef GL_RGBA16_SNORM
	BOOST_CHECK(x != ev.rgba16_snorm);
# endif
# ifdef GL_RGBA16F
	BOOST_CHECK(x != ev.rgba16f);
# endif
	BOOST_CHECK(x == ev.rgba16i);
# ifdef GL_RGBA16UI
	BOOST_CHECK(x != ev.rgba16ui);
# endif
# ifdef GL_RGBA32F
	BOOST_CHECK(x != ev.rgba32f);
# endif
# ifdef GL_RGBA32I
	BOOST_CHECK(x != ev.rgba32i);
# endif
# ifdef GL_RGBA32UI
	BOOST_CHECK(x != ev.rgba32ui);
# endif
# ifdef GL_RGBA8
	BOOST_CHECK(x != ev.rgba8);
# endif
# ifdef GL_RGBA8_SNORM
	BOOST_CHECK(x != ev.rgba8_snorm);
# endif
# ifdef GL_RGBA8I
	BOOST_CHECK(x != ev.rgba8i);
# endif
# ifdef GL_RGBA8UI
	BOOST_CHECK(x != ev.rgba8ui);
# endif
#endif

#ifdef GL_RGBA16UI
	x = ev.rgba16ui;
# ifdef GL_R11F_G11F_B10F
	BOOST_CHECK(x != ev.r11f_g11f_b10f);
# endif
# ifdef GL_R16
	BOOST_CHECK(x != ev.r16);
# endif
# ifdef GL_R16_SNORM
	BOOST_CHECK(x != ev.r16_snorm);
# endif
# ifdef GL_R16F
	BOOST_CHECK(x != ev.r16f);
# endif
# ifdef GL_R16I
	BOOST_CHECK(x != ev.r16i);
# endif
# ifdef GL_R16UI
	BOOST_CHECK(x != ev.r16ui);
# endif
# ifdef GL_R32F
	BOOST_CHECK(x != ev.r32f);
# endif
# ifdef GL_R32I
	BOOST_CHECK(x != ev.r32i);
# endif
# ifdef GL_R32UI
	BOOST_CHECK(x != ev.r32ui);
# endif
# ifdef GL_R8
	BOOST_CHECK(x != ev.r8);
# endif
# ifdef GL_R8_SNORM
	BOOST_CHECK(x != ev.r8_snorm);
# endif
# ifdef GL_R8I
	BOOST_CHECK(x != ev.r8i);
# endif
# ifdef GL_R8UI
	BOOST_CHECK(x != ev.r8ui);
# endif
# ifdef GL_RG16
	BOOST_CHECK(x != ev.rg16);
# endif
# ifdef GL_RG16_SNORM
	BOOST_CHECK(x != ev.rg16_snorm);
# endif
# ifdef GL_RG16F
	BOOST_CHECK(x != ev.rg16f);
# endif
# ifdef GL_RG16I
	BOOST_CHECK(x != ev.rg16i);
# endif
# ifdef GL_RG16UI
	BOOST_CHECK(x != ev.rg16ui);
# endif
# ifdef GL_RG32F
	BOOST_CHECK(x != ev.rg32f);
# endif
# ifdef GL_RG32I
	BOOST_CHECK(x != ev.rg32i);
# endif
# ifdef GL_RG32UI
	BOOST_CHECK(x != ev.rg32ui);
# endif
# ifdef GL_RG8
	BOOST_CHECK(x != ev.rg8);
# endif
# ifdef GL_RG8_SNORM
	BOOST_CHECK(x != ev.rg8_snorm);
# endif
# ifdef GL_RG8I
	BOOST_CHECK(x != ev.rg8i);
# endif
# ifdef GL_RG8UI
	BOOST_CHECK(x != ev.rg8ui);
# endif
# ifdef GL_RGB10_A2
	BOOST_CHECK(x != ev.rgb10_a2);
# endif
# ifdef GL_RGB10_A2UI
	BOOST_CHECK(x != ev.rgb10_a2ui);
# endif
# ifdef GL_RGBA16
	BOOST_CHECK(x != ev.rgba16);
# endif
# ifdef GL_RGBA16_SNORM
	BOOST_CHECK(x != ev.rgba16_snorm);
# endif
# ifdef GL_RGBA16F
	BOOST_CHECK(x != ev.rgba16f);
# endif
# ifdef GL_RGBA16I
	BOOST_CHECK(x != ev.rgba16i);
# endif
	BOOST_CHECK(x == ev.rgba16ui);
# ifdef GL_RGBA32F
	BOOST_CHECK(x != ev.rgba32f);
# endif
# ifdef GL_RGBA32I
	BOOST_CHECK(x != ev.rgba32i);
# endif
# ifdef GL_RGBA32UI
	BOOST_CHECK(x != ev.rgba32ui);
# endif
# ifdef GL_RGBA8
	BOOST_CHECK(x != ev.rgba8);
# endif
# ifdef GL_RGBA8_SNORM
	BOOST_CHECK(x != ev.rgba8_snorm);
# endif
# ifdef GL_RGBA8I
	BOOST_CHECK(x != ev.rgba8i);
# endif
# ifdef GL_RGBA8UI
	BOOST_CHECK(x != ev.rgba8ui);
# endif
#endif

#ifdef GL_RGBA32F
	x = ev.rgba32f;
# ifdef GL_R11F_G11F_B10F
	BOOST_CHECK(x != ev.r11f_g11f_b10f);
# endif
# ifdef GL_R16
	BOOST_CHECK(x != ev.r16);
# endif
# ifdef GL_R16_SNORM
	BOOST_CHECK(x != ev.r16_snorm);
# endif
# ifdef GL_R16F
	BOOST_CHECK(x != ev.r16f);
# endif
# ifdef GL_R16I
	BOOST_CHECK(x != ev.r16i);
# endif
# ifdef GL_R16UI
	BOOST_CHECK(x != ev.r16ui);
# endif
# ifdef GL_R32F
	BOOST_CHECK(x != ev.r32f);
# endif
# ifdef GL_R32I
	BOOST_CHECK(x != ev.r32i);
# endif
# ifdef GL_R32UI
	BOOST_CHECK(x != ev.r32ui);
# endif
# ifdef GL_R8
	BOOST_CHECK(x != ev.r8);
# endif
# ifdef GL_R8_SNORM
	BOOST_CHECK(x != ev.r8_snorm);
# endif
# ifdef GL_R8I
	BOOST_CHECK(x != ev.r8i);
# endif
# ifdef GL_R8UI
	BOOST_CHECK(x != ev.r8ui);
# endif
# ifdef GL_RG16
	BOOST_CHECK(x != ev.rg16);
# endif
# ifdef GL_RG16_SNORM
	BOOST_CHECK(x != ev.rg16_snorm);
# endif
# ifdef GL_RG16F
	BOOST_CHECK(x != ev.rg16f);
# endif
# ifdef GL_RG16I
	BOOST_CHECK(x != ev.rg16i);
# endif
# ifdef GL_RG16UI
	BOOST_CHECK(x != ev.rg16ui);
# endif
# ifdef GL_RG32F
	BOOST_CHECK(x != ev.rg32f);
# endif
# ifdef GL_RG32I
	BOOST_CHECK(x != ev.rg32i);
# endif
# ifdef GL_RG32UI
	BOOST_CHECK(x != ev.rg32ui);
# endif
# ifdef GL_RG8
	BOOST_CHECK(x != ev.rg8);
# endif
# ifdef GL_RG8_SNORM
	BOOST_CHECK(x != ev.rg8_snorm);
# endif
# ifdef GL_RG8I
	BOOST_CHECK(x != ev.rg8i);
# endif
# ifdef GL_RG8UI
	BOOST_CHECK(x != ev.rg8ui);
# endif
# ifdef GL_RGB10_A2
	BOOST_CHECK(x != ev.rgb10_a2);
# endif
# ifdef GL_RGB10_A2UI
	BOOST_CHECK(x != ev.rgb10_a2ui);
# endif
# ifdef GL_RGBA16
	BOOST_CHECK(x != ev.rgba16);
# endif
# ifdef GL_RGBA16_SNORM
	BOOST_CHECK(x != ev.rgba16_snorm);
# endif
# ifdef GL_RGBA16F
	BOOST_CHECK(x != ev.rgba16f);
# endif
# ifdef GL_RGBA16I
	BOOST_CHECK(x != ev.rgba16i);
# endif
# ifdef GL_RGBA16UI
	BOOST_CHECK(x != ev.rgba16ui);
# endif
	BOOST_CHECK(x == ev.rgba32f);
# ifdef GL_RGBA32I
	BOOST_CHECK(x != ev.rgba32i);
# endif
# ifdef GL_RGBA32UI
	BOOST_CHECK(x != ev.rgba32ui);
# endif
# ifdef GL_RGBA8
	BOOST_CHECK(x != ev.rgba8);
# endif
# ifdef GL_RGBA8_SNORM
	BOOST_CHECK(x != ev.rgba8_snorm);
# endif
# ifdef GL_RGBA8I
	BOOST_CHECK(x != ev.rgba8i);
# endif
# ifdef GL_RGBA8UI
	BOOST_CHECK(x != ev.rgba8ui);
# endif
#endif

#ifdef GL_RGBA32I
	x = ev.rgba32i;
# ifdef GL_R11F_G11F_B10F
	BOOST_CHECK(x != ev.r11f_g11f_b10f);
# endif
# ifdef GL_R16
	BOOST_CHECK(x != ev.r16);
# endif
# ifdef GL_R16_SNORM
	BOOST_CHECK(x != ev.r16_snorm);
# endif
# ifdef GL_R16F
	BOOST_CHECK(x != ev.r16f);
# endif
# ifdef GL_R16I
	BOOST_CHECK(x != ev.r16i);
# endif
# ifdef GL_R16UI
	BOOST_CHECK(x != ev.r16ui);
# endif
# ifdef GL_R32F
	BOOST_CHECK(x != ev.r32f);
# endif
# ifdef GL_R32I
	BOOST_CHECK(x != ev.r32i);
# endif
# ifdef GL_R32UI
	BOOST_CHECK(x != ev.r32ui);
# endif
# ifdef GL_R8
	BOOST_CHECK(x != ev.r8);
# endif
# ifdef GL_R8_SNORM
	BOOST_CHECK(x != ev.r8_snorm);
# endif
# ifdef GL_R8I
	BOOST_CHECK(x != ev.r8i);
# endif
# ifdef GL_R8UI
	BOOST_CHECK(x != ev.r8ui);
# endif
# ifdef GL_RG16
	BOOST_CHECK(x != ev.rg16);
# endif
# ifdef GL_RG16_SNORM
	BOOST_CHECK(x != ev.rg16_snorm);
# endif
# ifdef GL_RG16F
	BOOST_CHECK(x != ev.rg16f);
# endif
# ifdef GL_RG16I
	BOOST_CHECK(x != ev.rg16i);
# endif
# ifdef GL_RG16UI
	BOOST_CHECK(x != ev.rg16ui);
# endif
# ifdef GL_RG32F
	BOOST_CHECK(x != ev.rg32f);
# endif
# ifdef GL_RG32I
	BOOST_CHECK(x != ev.rg32i);
# endif
# ifdef GL_RG32UI
	BOOST_CHECK(x != ev.rg32ui);
# endif
# ifdef GL_RG8
	BOOST_CHECK(x != ev.rg8);
# endif
# ifdef GL_RG8_SNORM
	BOOST_CHECK(x != ev.rg8_snorm);
# endif
# ifdef GL_RG8I
	BOOST_CHECK(x != ev.rg8i);
# endif
# ifdef GL_RG8UI
	BOOST_CHECK(x != ev.rg8ui);
# endif
# ifdef GL_RGB10_A2
	BOOST_CHECK(x != ev.rgb10_a2);
# endif
# ifdef GL_RGB10_A2UI
	BOOST_CHECK(x != ev.rgb10_a2ui);
# endif
# ifdef GL_RGBA16
	BOOST_CHECK(x != ev.rgba16);
# endif
# ifdef GL_RGBA16_SNORM
	BOOST_CHECK(x != ev.rgba16_snorm);
# endif
# ifdef GL_RGBA16F
	BOOST_CHECK(x != ev.rgba16f);
# endif
# ifdef GL_RGBA16I
	BOOST_CHECK(x != ev.rgba16i);
# endif
# ifdef GL_RGBA16UI
	BOOST_CHECK(x != ev.rgba16ui);
# endif
# ifdef GL_RGBA32F
	BOOST_CHECK(x != ev.rgba32f);
# endif
	BOOST_CHECK(x == ev.rgba32i);
# ifdef GL_RGBA32UI
	BOOST_CHECK(x != ev.rgba32ui);
# endif
# ifdef GL_RGBA8
	BOOST_CHECK(x != ev.rgba8);
# endif
# ifdef GL_RGBA8_SNORM
	BOOST_CHECK(x != ev.rgba8_snorm);
# endif
# ifdef GL_RGBA8I
	BOOST_CHECK(x != ev.rgba8i);
# endif
# ifdef GL_RGBA8UI
	BOOST_CHECK(x != ev.rgba8ui);
# endif
#endif

#ifdef GL_RGBA32UI
	x = ev.rgba32ui;
# ifdef GL_R11F_G11F_B10F
	BOOST_CHECK(x != ev.r11f_g11f_b10f);
# endif
# ifdef GL_R16
	BOOST_CHECK(x != ev.r16);
# endif
# ifdef GL_R16_SNORM
	BOOST_CHECK(x != ev.r16_snorm);
# endif
# ifdef GL_R16F
	BOOST_CHECK(x != ev.r16f);
# endif
# ifdef GL_R16I
	BOOST_CHECK(x != ev.r16i);
# endif
# ifdef GL_R16UI
	BOOST_CHECK(x != ev.r16ui);
# endif
# ifdef GL_R32F
	BOOST_CHECK(x != ev.r32f);
# endif
# ifdef GL_R32I
	BOOST_CHECK(x != ev.r32i);
# endif
# ifdef GL_R32UI
	BOOST_CHECK(x != ev.r32ui);
# endif
# ifdef GL_R8
	BOOST_CHECK(x != ev.r8);
# endif
# ifdef GL_R8_SNORM
	BOOST_CHECK(x != ev.r8_snorm);
# endif
# ifdef GL_R8I
	BOOST_CHECK(x != ev.r8i);
# endif
# ifdef GL_R8UI
	BOOST_CHECK(x != ev.r8ui);
# endif
# ifdef GL_RG16
	BOOST_CHECK(x != ev.rg16);
# endif
# ifdef GL_RG16_SNORM
	BOOST_CHECK(x != ev.rg16_snorm);
# endif
# ifdef GL_RG16F
	BOOST_CHECK(x != ev.rg16f);
# endif
# ifdef GL_RG16I
	BOOST_CHECK(x != ev.rg16i);
# endif
# ifdef GL_RG16UI
	BOOST_CHECK(x != ev.rg16ui);
# endif
# ifdef GL_RG32F
	BOOST_CHECK(x != ev.rg32f);
# endif
# ifdef GL_RG32I
	BOOST_CHECK(x != ev.rg32i);
# endif
# ifdef GL_RG32UI
	BOOST_CHECK(x != ev.rg32ui);
# endif
# ifdef GL_RG8
	BOOST_CHECK(x != ev.rg8);
# endif
# ifdef GL_RG8_SNORM
	BOOST_CHECK(x != ev.rg8_snorm);
# endif
# ifdef GL_RG8I
	BOOST_CHECK(x != ev.rg8i);
# endif
# ifdef GL_RG8UI
	BOOST_CHECK(x != ev.rg8ui);
# endif
# ifdef GL_RGB10_A2
	BOOST_CHECK(x != ev.rgb10_a2);
# endif
# ifdef GL_RGB10_A2UI
	BOOST_CHECK(x != ev.rgb10_a2ui);
# endif
# ifdef GL_RGBA16
	BOOST_CHECK(x != ev.rgba16);
# endif
# ifdef GL_RGBA16_SNORM
	BOOST_CHECK(x != ev.rgba16_snorm);
# endif
# ifdef GL_RGBA16F
	BOOST_CHECK(x != ev.rgba16f);
# endif
# ifdef GL_RGBA16I
	BOOST_CHECK(x != ev.rgba16i);
# endif
# ifdef GL_RGBA16UI
	BOOST_CHECK(x != ev.rgba16ui);
# endif
# ifdef GL_RGBA32F
	BOOST_CHECK(x != ev.rgba32f);
# endif
# ifdef GL_RGBA32I
	BOOST_CHECK(x != ev.rgba32i);
# endif
	BOOST_CHECK(x == ev.rgba32ui);
# ifdef GL_RGBA8
	BOOST_CHECK(x != ev.rgba8);
# endif
# ifdef GL_RGBA8_SNORM
	BOOST_CHECK(x != ev.rgba8_snorm);
# endif
# ifdef GL_RGBA8I
	BOOST_CHECK(x != ev.rgba8i);
# endif
# ifdef GL_RGBA8UI
	BOOST_CHECK(x != ev.rgba8ui);
# endif
#endif

#ifdef GL_RGBA8
	x = ev.rgba8;
# ifdef GL_R11F_G11F_B10F
	BOOST_CHECK(x != ev.r11f_g11f_b10f);
# endif
# ifdef GL_R16
	BOOST_CHECK(x != ev.r16);
# endif
# ifdef GL_R16_SNORM
	BOOST_CHECK(x != ev.r16_snorm);
# endif
# ifdef GL_R16F
	BOOST_CHECK(x != ev.r16f);
# endif
# ifdef GL_R16I
	BOOST_CHECK(x != ev.r16i);
# endif
# ifdef GL_R16UI
	BOOST_CHECK(x != ev.r16ui);
# endif
# ifdef GL_R32F
	BOOST_CHECK(x != ev.r32f);
# endif
# ifdef GL_R32I
	BOOST_CHECK(x != ev.r32i);
# endif
# ifdef GL_R32UI
	BOOST_CHECK(x != ev.r32ui);
# endif
# ifdef GL_R8
	BOOST_CHECK(x != ev.r8);
# endif
# ifdef GL_R8_SNORM
	BOOST_CHECK(x != ev.r8_snorm);
# endif
# ifdef GL_R8I
	BOOST_CHECK(x != ev.r8i);
# endif
# ifdef GL_R8UI
	BOOST_CHECK(x != ev.r8ui);
# endif
# ifdef GL_RG16
	BOOST_CHECK(x != ev.rg16);
# endif
# ifdef GL_RG16_SNORM
	BOOST_CHECK(x != ev.rg16_snorm);
# endif
# ifdef GL_RG16F
	BOOST_CHECK(x != ev.rg16f);
# endif
# ifdef GL_RG16I
	BOOST_CHECK(x != ev.rg16i);
# endif
# ifdef GL_RG16UI
	BOOST_CHECK(x != ev.rg16ui);
# endif
# ifdef GL_RG32F
	BOOST_CHECK(x != ev.rg32f);
# endif
# ifdef GL_RG32I
	BOOST_CHECK(x != ev.rg32i);
# endif
# ifdef GL_RG32UI
	BOOST_CHECK(x != ev.rg32ui);
# endif
# ifdef GL_RG8
	BOOST_CHECK(x != ev.rg8);
# endif
# ifdef GL_RG8_SNORM
	BOOST_CHECK(x != ev.rg8_snorm);
# endif
# ifdef GL_RG8I
	BOOST_CHECK(x != ev.rg8i);
# endif
# ifdef GL_RG8UI
	BOOST_CHECK(x != ev.rg8ui);
# endif
# ifdef GL_RGB10_A2
	BOOST_CHECK(x != ev.rgb10_a2);
# endif
# ifdef GL_RGB10_A2UI
	BOOST_CHECK(x != ev.rgb10_a2ui);
# endif
# ifdef GL_RGBA16
	BOOST_CHECK(x != ev.rgba16);
# endif
# ifdef GL_RGBA16_SNORM
	BOOST_CHECK(x != ev.rgba16_snorm);
# endif
# ifdef GL_RGBA16F
	BOOST_CHECK(x != ev.rgba16f);
# endif
# ifdef GL_RGBA16I
	BOOST_CHECK(x != ev.rgba16i);
# endif
# ifdef GL_RGBA16UI
	BOOST_CHECK(x != ev.rgba16ui);
# endif
# ifdef GL_RGBA32F
	BOOST_CHECK(x != ev.rgba32f);
# endif
# ifdef GL_RGBA32I
	BOOST_CHECK(x != ev.rgba32i);
# endif
# ifdef GL_RGBA32UI
	BOOST_CHECK(x != ev.rgba32ui);
# endif
	BOOST_CHECK(x == ev.rgba8);
# ifdef GL_RGBA8_SNORM
	BOOST_CHECK(x != ev.rgba8_snorm);
# endif
# ifdef GL_RGBA8I
	BOOST_CHECK(x != ev.rgba8i);
# endif
# ifdef GL_RGBA8UI
	BOOST_CHECK(x != ev.rgba8ui);
# endif
#endif

#ifdef GL_RGBA8_SNORM
	x = ev.rgba8_snorm;
# ifdef GL_R11F_G11F_B10F
	BOOST_CHECK(x != ev.r11f_g11f_b10f);
# endif
# ifdef GL_R16
	BOOST_CHECK(x != ev.r16);
# endif
# ifdef GL_R16_SNORM
	BOOST_CHECK(x != ev.r16_snorm);
# endif
# ifdef GL_R16F
	BOOST_CHECK(x != ev.r16f);
# endif
# ifdef GL_R16I
	BOOST_CHECK(x != ev.r16i);
# endif
# ifdef GL_R16UI
	BOOST_CHECK(x != ev.r16ui);
# endif
# ifdef GL_R32F
	BOOST_CHECK(x != ev.r32f);
# endif
# ifdef GL_R32I
	BOOST_CHECK(x != ev.r32i);
# endif
# ifdef GL_R32UI
	BOOST_CHECK(x != ev.r32ui);
# endif
# ifdef GL_R8
	BOOST_CHECK(x != ev.r8);
# endif
# ifdef GL_R8_SNORM
	BOOST_CHECK(x != ev.r8_snorm);
# endif
# ifdef GL_R8I
	BOOST_CHECK(x != ev.r8i);
# endif
# ifdef GL_R8UI
	BOOST_CHECK(x != ev.r8ui);
# endif
# ifdef GL_RG16
	BOOST_CHECK(x != ev.rg16);
# endif
# ifdef GL_RG16_SNORM
	BOOST_CHECK(x != ev.rg16_snorm);
# endif
# ifdef GL_RG16F
	BOOST_CHECK(x != ev.rg16f);
# endif
# ifdef GL_RG16I
	BOOST_CHECK(x != ev.rg16i);
# endif
# ifdef GL_RG16UI
	BOOST_CHECK(x != ev.rg16ui);
# endif
# ifdef GL_RG32F
	BOOST_CHECK(x != ev.rg32f);
# endif
# ifdef GL_RG32I
	BOOST_CHECK(x != ev.rg32i);
# endif
# ifdef GL_RG32UI
	BOOST_CHECK(x != ev.rg32ui);
# endif
# ifdef GL_RG8
	BOOST_CHECK(x != ev.rg8);
# endif
# ifdef GL_RG8_SNORM
	BOOST_CHECK(x != ev.rg8_snorm);
# endif
# ifdef GL_RG8I
	BOOST_CHECK(x != ev.rg8i);
# endif
# ifdef GL_RG8UI
	BOOST_CHECK(x != ev.rg8ui);
# endif
# ifdef GL_RGB10_A2
	BOOST_CHECK(x != ev.rgb10_a2);
# endif
# ifdef GL_RGB10_A2UI
	BOOST_CHECK(x != ev.rgb10_a2ui);
# endif
# ifdef GL_RGBA16
	BOOST_CHECK(x != ev.rgba16);
# endif
# ifdef GL_RGBA16_SNORM
	BOOST_CHECK(x != ev.rgba16_snorm);
# endif
# ifdef GL_RGBA16F
	BOOST_CHECK(x != ev.rgba16f);
# endif
# ifdef GL_RGBA16I
	BOOST_CHECK(x != ev.rgba16i);
# endif
# ifdef GL_RGBA16UI
	BOOST_CHECK(x != ev.rgba16ui);
# endif
# ifdef GL_RGBA32F
	BOOST_CHECK(x != ev.rgba32f);
# endif
# ifdef GL_RGBA32I
	BOOST_CHECK(x != ev.rgba32i);
# endif
# ifdef GL_RGBA32UI
	BOOST_CHECK(x != ev.rgba32ui);
# endif
# ifdef GL_RGBA8
	BOOST_CHECK(x != ev.rgba8);
# endif
	BOOST_CHECK(x == ev.rgba8_snorm);
# ifdef GL_RGBA8I
	BOOST_CHECK(x != ev.rgba8i);
# endif
# ifdef GL_RGBA8UI
	BOOST_CHECK(x != ev.rgba8ui);
# endif
#endif

#ifdef GL_RGBA8I
	x = ev.rgba8i;
# ifdef GL_R11F_G11F_B10F
	BOOST_CHECK(x != ev.r11f_g11f_b10f);
# endif
# ifdef GL_R16
	BOOST_CHECK(x != ev.r16);
# endif
# ifdef GL_R16_SNORM
	BOOST_CHECK(x != ev.r16_snorm);
# endif
# ifdef GL_R16F
	BOOST_CHECK(x != ev.r16f);
# endif
# ifdef GL_R16I
	BOOST_CHECK(x != ev.r16i);
# endif
# ifdef GL_R16UI
	BOOST_CHECK(x != ev.r16ui);
# endif
# ifdef GL_R32F
	BOOST_CHECK(x != ev.r32f);
# endif
# ifdef GL_R32I
	BOOST_CHECK(x != ev.r32i);
# endif
# ifdef GL_R32UI
	BOOST_CHECK(x != ev.r32ui);
# endif
# ifdef GL_R8
	BOOST_CHECK(x != ev.r8);
# endif
# ifdef GL_R8_SNORM
	BOOST_CHECK(x != ev.r8_snorm);
# endif
# ifdef GL_R8I
	BOOST_CHECK(x != ev.r8i);
# endif
# ifdef GL_R8UI
	BOOST_CHECK(x != ev.r8ui);
# endif
# ifdef GL_RG16
	BOOST_CHECK(x != ev.rg16);
# endif
# ifdef GL_RG16_SNORM
	BOOST_CHECK(x != ev.rg16_snorm);
# endif
# ifdef GL_RG16F
	BOOST_CHECK(x != ev.rg16f);
# endif
# ifdef GL_RG16I
	BOOST_CHECK(x != ev.rg16i);
# endif
# ifdef GL_RG16UI
	BOOST_CHECK(x != ev.rg16ui);
# endif
# ifdef GL_RG32F
	BOOST_CHECK(x != ev.rg32f);
# endif
# ifdef GL_RG32I
	BOOST_CHECK(x != ev.rg32i);
# endif
# ifdef GL_RG32UI
	BOOST_CHECK(x != ev.rg32ui);
# endif
# ifdef GL_RG8
	BOOST_CHECK(x != ev.rg8);
# endif
# ifdef GL_RG8_SNORM
	BOOST_CHECK(x != ev.rg8_snorm);
# endif
# ifdef GL_RG8I
	BOOST_CHECK(x != ev.rg8i);
# endif
# ifdef GL_RG8UI
	BOOST_CHECK(x != ev.rg8ui);
# endif
# ifdef GL_RGB10_A2
	BOOST_CHECK(x != ev.rgb10_a2);
# endif
# ifdef GL_RGB10_A2UI
	BOOST_CHECK(x != ev.rgb10_a2ui);
# endif
# ifdef GL_RGBA16
	BOOST_CHECK(x != ev.rgba16);
# endif
# ifdef GL_RGBA16_SNORM
	BOOST_CHECK(x != ev.rgba16_snorm);
# endif
# ifdef GL_RGBA16F
	BOOST_CHECK(x != ev.rgba16f);
# endif
# ifdef GL_RGBA16I
	BOOST_CHECK(x != ev.rgba16i);
# endif
# ifdef GL_RGBA16UI
	BOOST_CHECK(x != ev.rgba16ui);
# endif
# ifdef GL_RGBA32F
	BOOST_CHECK(x != ev.rgba32f);
# endif
# ifdef GL_RGBA32I
	BOOST_CHECK(x != ev.rgba32i);
# endif
# ifdef GL_RGBA32UI
	BOOST_CHECK(x != ev.rgba32ui);
# endif
# ifdef GL_RGBA8
	BOOST_CHECK(x != ev.rgba8);
# endif
# ifdef GL_RGBA8_SNORM
	BOOST_CHECK(x != ev.rgba8_snorm);
# endif
	BOOST_CHECK(x == ev.rgba8i);
# ifdef GL_RGBA8UI
	BOOST_CHECK(x != ev.rgba8ui);
# endif
#endif

#ifdef GL_RGBA8UI
	x = ev.rgba8ui;
# ifdef GL_R11F_G11F_B10F
	BOOST_CHECK(x != ev.r11f_g11f_b10f);
# endif
# ifdef GL_R16
	BOOST_CHECK(x != ev.r16);
# endif
# ifdef GL_R16_SNORM
	BOOST_CHECK(x != ev.r16_snorm);
# endif
# ifdef GL_R16F
	BOOST_CHECK(x != ev.r16f);
# endif
# ifdef GL_R16I
	BOOST_CHECK(x != ev.r16i);
# endif
# ifdef GL_R16UI
	BOOST_CHECK(x != ev.r16ui);
# endif
# ifdef GL_R32F
	BOOST_CHECK(x != ev.r32f);
# endif
# ifdef GL_R32I
	BOOST_CHECK(x != ev.r32i);
# endif
# ifdef GL_R32UI
	BOOST_CHECK(x != ev.r32ui);
# endif
# ifdef GL_R8
	BOOST_CHECK(x != ev.r8);
# endif
# ifdef GL_R8_SNORM
	BOOST_CHECK(x != ev.r8_snorm);
# endif
# ifdef GL_R8I
	BOOST_CHECK(x != ev.r8i);
# endif
# ifdef GL_R8UI
	BOOST_CHECK(x != ev.r8ui);
# endif
# ifdef GL_RG16
	BOOST_CHECK(x != ev.rg16);
# endif
# ifdef GL_RG16_SNORM
	BOOST_CHECK(x != ev.rg16_snorm);
# endif
# ifdef GL_RG16F
	BOOST_CHECK(x != ev.rg16f);
# endif
# ifdef GL_RG16I
	BOOST_CHECK(x != ev.rg16i);
# endif
# ifdef GL_RG16UI
	BOOST_CHECK(x != ev.rg16ui);
# endif
# ifdef GL_RG32F
	BOOST_CHECK(x != ev.rg32f);
# endif
# ifdef GL_RG32I
	BOOST_CHECK(x != ev.rg32i);
# endif
# ifdef GL_RG32UI
	BOOST_CHECK(x != ev.rg32ui);
# endif
# ifdef GL_RG8
	BOOST_CHECK(x != ev.rg8);
# endif
# ifdef GL_RG8_SNORM
	BOOST_CHECK(x != ev.rg8_snorm);
# endif
# ifdef GL_RG8I
	BOOST_CHECK(x != ev.rg8i);
# endif
# ifdef GL_RG8UI
	BOOST_CHECK(x != ev.rg8ui);
# endif
# ifdef GL_RGB10_A2
	BOOST_CHECK(x != ev.rgb10_a2);
# endif
# ifdef GL_RGB10_A2UI
	BOOST_CHECK(x != ev.rgb10_a2ui);
# endif
# ifdef GL_RGBA16
	BOOST_CHECK(x != ev.rgba16);
# endif
# ifdef GL_RGBA16_SNORM
	BOOST_CHECK(x != ev.rgba16_snorm);
# endif
# ifdef GL_RGBA16F
	BOOST_CHECK(x != ev.rgba16f);
# endif
# ifdef GL_RGBA16I
	BOOST_CHECK(x != ev.rgba16i);
# endif
# ifdef GL_RGBA16UI
	BOOST_CHECK(x != ev.rgba16ui);
# endif
# ifdef GL_RGBA32F
	BOOST_CHECK(x != ev.rgba32f);
# endif
# ifdef GL_RGBA32I
	BOOST_CHECK(x != ev.rgba32i);
# endif
# ifdef GL_RGBA32UI
	BOOST_CHECK(x != ev.rgba32ui);
# endif
# ifdef GL_RGBA8
	BOOST_CHECK(x != ev.rgba8);
# endif
# ifdef GL_RGBA8_SNORM
	BOOST_CHECK(x != ev.rgba8_snorm);
# endif
# ifdef GL_RGBA8I
	BOOST_CHECK(x != ev.rgba8i);
# endif
	BOOST_CHECK(x == ev.rgba8ui);
#endif
}

BOOST_AUTO_TEST_SUITE_END()