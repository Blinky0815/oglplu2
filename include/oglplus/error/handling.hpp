/**
 *  @file oglplus/error/handling.hpp
 *
 *  Copyright Matus Chochlik.
 *  Distributed under the Boost Software License, Version 1.0.
 *  See accompanying file LICENSE_1_0.txt or copy at
 *   http://www.boost.org/LICENSE_1_0.txt
 */
#ifndef OGLPLUS_ERROR_HANDLING_1509260923_HPP
#define OGLPLUS_ERROR_HANDLING_1509260923_HPP

#include "info.hpp"
#include "../utils/deferred_handler.hpp"
#include <stdexcept>

namespace oglplus {

class error
 : public std::runtime_error
{
private:
	error_info _info;

	static
	std::string _make_msg(error_info& info);
public:
	error(error_info&& info);

	const error_info& info(void) const
	noexcept
	{
		return _info;
	}
};

template <typename ErrorInfo>
[[noreturn]] static inline
void handle_gl_error(ErrorInfo& info)
{
	throw error(std::move(info));
}

static inline constexpr
bool is_gl_error(GLenum ec)
noexcept
{
	return ec != GL_NO_ERROR;
}

struct gl_error_handling_policy
{
	static
	bool is_valid(const error_info& info)
	noexcept
	{
		return is_gl_error(info.gl_error_code());
	}

	[[noreturn]] static
	void invoke(error_info& info)
	{
		handle_gl_error(info);
	}

	static
	void cancel(error_info& info)
	noexcept
	{
		info.gl_error_code(GL_NO_ERROR);
	}
};

using deferred_error_handler = deferred_handler<
	error_info,
	gl_error_handling_policy
>;

} // namespace oglplus

#include <oglplus/error/handling.inl>

#ifndef OGLPLUS_GL_GET_ERROR
#define OGLPLUS_GL_GET_ERROR() ::glGetError()
#endif

#define OGLPLUS_RETURN_HANDLER_IF(\
	CONDITION,\
	ERROR_CODE,\
	ERROR_INFO,\
	SEVERITY\
)\
{\
	GLenum oglplus_error_code##__LINE__ = ERROR_CODE;\
	if(CONDITION(oglplus_error_code##__LINE__))\
	{\
		return oglplus::deferred_error_handler(\
			oglplus::error_info(oglplus_error_code##__LINE__)\
				.ERROR_INFO\
				.source_file(__FILE__)\
				.source_line(__LINE__)\
		);\
	}\
}

#define OGLPLUS_RETURN_HANDLER_IF_GL_ERROR(\
	ERROR_CODE,\
	ERROR_INFO,\
	SEVERITY\
) OGLPLUS_RETURN_HANDLER_IF(\
	oglplus::is_gl_error,\
	ERROR_CODE,\
	ERROR_INFO,\
	SEVERITY\
)

#define OGLPLUS_VERIFY(\
	GLFUNC,\
	ERROR_INFO,\
	SEVERITY\
) OGLPLUS_RETURN_HANDLER_IF_GL_ERROR(\
	OGLPLUS_GL_GET_ERROR(),\
	ERROR_INFO.gl_function_name(#GLFUNC),\
	SEVERITY\
)

#define OGLPLUS_VERIFY_SIMPLE(GLFUNC, SEVERITY)\
	OGLPLUS_VERIFY(GLFUNC, no_info(), SEVERITY)

#endif // include guard
