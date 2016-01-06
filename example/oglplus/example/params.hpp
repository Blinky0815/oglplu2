/**
 *  .file oglplus/example/params.cpp
 *
 *  Copyright Matus Chochlik.
 *  Distributed under the Boost Software License, Version 1.0.
 *  See accompanying file LICENSE_1_0.txt or copy at
 *   http://www.boost.org/LICENSE_1_0.txt
 */
#ifndef OGLPLUS_EXAMPLE_PARAMS_1512120710_HPP
#define OGLPLUS_EXAMPLE_PARAMS_1512120710_HPP

#include <oglplus/utils/cstr_ref.hpp>
#include <oglplus/utils/valid_if.hpp>
#include <oglplus/utils/quantities.hpp>
#include <cassert>

namespace oglplus {

class example_params
{
private:
	unsigned _rand_seed;

	cstr_ref _framedump_prefix;
	cstr_ref _screenshot_path;
	float _screenshot_time;
	float _fixed_fps;

	int _x_tiles;
	int _y_tiles;

	int _samples;

	int _color_bits;
	int _alpha_bits;
	int _depth_bits;
	int _stencil_bits;

	bool _compat_ctxt;
	bool _auto_tiles;
public:
	example_params(void)
	noexcept
	 : _rand_seed(0)
	 , _screenshot_time(3)
	 , _fixed_fps(30)
	 , _x_tiles(1)
	 , _y_tiles(1)
	 , _samples(4)
	 , _color_bits(8)
	 , _alpha_bits(0)
	 , _depth_bits(24)
	 , _stencil_bits(0)
	 , _compat_ctxt(false)
	 , _auto_tiles(true)
	{ }

	example_params& screenshot_path(cstr_ref path)
	{
		_screenshot_path = path;
		return *this;
	}

	cstr_ref screenshot_path(void) const
	noexcept
	{
		return _screenshot_path;
	}

	bool doing_screenshot(void) const
	noexcept
	{
		return !_screenshot_path.empty();
	}

	example_params& screenshot_time(seconds_t<float> ss_time)
	{
		_screenshot_time = value(ss_time);
		return *this;
	}

	seconds_t<float> screenshot_time(void) const
	noexcept
	{
		return seconds_(_screenshot_time);
	}

	example_params& framedump_prefix(cstr_ref prefix)
	{
		_framedump_prefix = prefix;
		return *this;
	}

	cstr_ref framedump_prefix(void) const
	noexcept
	{
		return _framedump_prefix;
	}

	bool doing_framedump(void) const
	noexcept
	{
		return !_framedump_prefix.empty();
	}

	bool fixed_framerate(void) const
	noexcept
	{
		return  doing_screenshot() || doing_framedump();
	}

	example_params& fixed_fps(float fps)
	noexcept
	{
		assert(fps > 0);
		_fixed_fps = fps;
		return *this;
	}

	float frame_time(void) const
	noexcept
	{
		return 1.0f/_fixed_fps;
	}

	example_params& rand_seed(unsigned seed)
	noexcept
	{
		_rand_seed = seed;
		return *this;
	}

	unsigned rand_seed(void) const
	noexcept
	{
		return _rand_seed;
	}

	example_params& compatibility_context(bool v)
	noexcept
	{
		_compat_ctxt = v;
		return *this;
	}

	bool compatibility_context(void) const
	noexcept
	{
		return _compat_ctxt;
	}

	example_params& auto_tiles(bool v)
	noexcept
	{
		_auto_tiles = v;
		return *this;
	}

	bool auto_tiles(void) const
	noexcept
	{
		return _auto_tiles;
	}

	example_params& x_tiles(int n)
	noexcept
	{
		assert(n > 0);
		_x_tiles = n;
		return *this;
	}

	int x_tiles(void) const
	noexcept
	{
		return _x_tiles;
	}

	example_params& y_tiles(int n)
	noexcept
	{
		assert(n > 0);
		_y_tiles = n;
		return *this;
	}

	int y_tiles(void) const
	noexcept
	{
		return _y_tiles;
	}

	example_params& samples(int n)
	noexcept
	{
		assert(n > 0);
		_samples = n;
		return *this;
	}

	example_params& samples_dont_care(void)
	noexcept
	{
		_samples = 0;
		return *this;
	}

	valid_if_greater_than<int, 0> samples(void) const
	noexcept
	{
		return _samples;
	}

	example_params& color_bits(int n)
	noexcept
	{
		assert(n >= 0);
		_color_bits = n;
		return *this;
	}

	int color_bits(void) const
	noexcept
	{
		return _color_bits;
	}

	example_params& alpha_bits(int n)
	noexcept
	{
		assert(n >= 0);
		_alpha_bits = n;
		return *this;
	}

	int alpha_bits(void) const
	noexcept
	{
		return _alpha_bits;
	}

	example_params& depth_bits(int n)
	noexcept
	{
		assert(n >= 0);
		_depth_bits = n;
		return *this;
	}

	int depth_bits(void) const
	noexcept
	{
		return _depth_bits;
	}

	example_params& stencil_bits(int n)
	noexcept
	{
		assert(n >= 0);
		_stencil_bits = n;
		return *this;
	}

	int stencil_bits(void) const
	noexcept
	{
		return _stencil_bits;
	}
};

extern
void adjust_params(example_params&);

} // namespace oglplus

#endif
