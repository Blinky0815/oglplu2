/**
 *  .file oglplus/example/wrapper.cpp
 *
 *  Copyright Matus Chochlik.
 *  Distributed under the Boost Software License, Version 1.0.
 *  See accompanying file LICENSE_1_0.txt or copy at
 *   http://www.boost.org/LICENSE_1_0.txt
 */
#ifndef OGLPLUS_EXAMPLE_WRAPPER_1512120710_HPP
#define OGLPLUS_EXAMPLE_WRAPPER_1512120710_HPP

#include "../example.hpp"
#include <cassert>
#include <chrono>

namespace oglplus {

class example_wrapper
{
private:
	typedef std::chrono::system_clock clock_type;
	const std::chrono::time_point<clock_type> _start;
	std::chrono::time_point<clock_type> _now;

	example_params& _params;
	example_state& _state;

	std::unique_ptr<example> _example;
public:
	example_wrapper(example_params& params, example_state& state);

	bool next_frame(void);

	void update(void);

	bool render(void);

	void set_size(int width, int height);

	void set_mouse_btn(int i, bool pressed);

	void set_mouse_pos(int x, int y);

	void set_mouse_wheel(int w);
};

} // namespace oglplus

#endif
