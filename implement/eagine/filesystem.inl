/**
 *  @file eagine/filesystem.inl
 *
 *  Copyright Matus Chochlik.
 *  Distributed under the Boost Software License, Version 1.0.
 *  See accompanying file LICENSE_1_0.txt or copy at
 *   http://www.boost.org/LICENSE_1_0.txt
 */
#include <eagine/config/platform.hpp>
#include <eagine/range_algo.hpp>

#include <eagine/posix/fd_path.hpp> // TODO Windows

namespace eagine {
namespace filesystem {
//------------------------------------------------------------------------------
EAGINE_LIB_FUNC
cstr_ref path_separator(void)
noexcept
{
#if EAGINE_WINDOWS
	return cstr_ref("\\");
#else
	return cstr_ref("/");
#endif
}
//------------------------------------------------------------------------------
EAGINE_LIB_FUNC
cstr_ref path_curdir(void)
noexcept
{
	return cstr_ref(".");
}
//------------------------------------------------------------------------------
EAGINE_LIB_FUNC
cstr_ref path_pardir(void)
noexcept
{
	return cstr_ref("..");
}
//------------------------------------------------------------------------------
EAGINE_LIB_FUNC
cstr_ref basename(const cstr_ref& path)
noexcept
{
	return ranges::slice_after_last(
		ranges::strip_suffix(path, path_separator()),
		path_separator()
	);
}
//------------------------------------------------------------------------------
EAGINE_LIB_FUNC
cstr_ref dirname(const cstr_ref& path)
noexcept
{
	return ranges::slice_before_last(
		ranges::strip_suffix(path, path_separator()),
		path_separator()
	);
}
//------------------------------------------------------------------------------
EAGINE_LIB_FUNC
std::string current_working_directory(void)
{
	return posix::safe_getcwd().value();
}
//------------------------------------------------------------------------------
EAGINE_LIB_FUNC
string_path::string_path(const str_span& path_str)
{
	std::size_t s = 0;

	ranges::for_each_delimited(
		path_str, path_separator(),
		[&s](str_span name)
		{ s += basic_string_path::required_bytes(name); }
	);
	_p.reserve_bytes(s);

	ranges::for_each_delimited(
		path_str, path_separator(),
		[this](str_span name)
		{ _p.push_back(name); }
	);
}
//------------------------------------------------------------------------------
EAGINE_LIB_FUNC
string_path
string_path::normalized(void) const
{
	string_path result;

	auto do_norm =
	[&result](const string_list::element& elem, bool first)
	{
		auto val = elem.value();
		if(val == path_curdir() && !first) return;
		if((val.size() == 0) && !first) return;

		if(result.empty() || (result.back() == path_pardir()))
		{
			result._p.push_back_elem(elem);
		}
		else if(val == path_pardir())
		{
			if((result.size() != 1) || (result.back().size() != 0))
			{
				result._p.pop_back();
			}
		}
		else
		{
			result._p.push_back_elem(elem);
		}
	};
	_p.for_each_elem(do_norm);

	return result;
}
//------------------------------------------------------------------------------
} // namespace filesystem
} // namespace eagine