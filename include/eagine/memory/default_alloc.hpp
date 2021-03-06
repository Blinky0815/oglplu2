/**
 *  @file eagine/memory/default_alloc.hpp
 *
 *  Copyright Matus Chochlik.
 *  Distributed under the Boost Software License, Version 1.0.
 *  See accompanying file LICENSE_1_0.txt or copy at
 *   http://www.boost.org/LICENSE_1_0.txt
 */

#ifndef EAGINE_MEMORY_DEFAULT_ALLOC_1509260923_HPP
#define EAGINE_MEMORY_DEFAULT_ALLOC_1509260923_HPP

#include "c_realloc.hpp"

namespace eagine {
namespace memory {

typedef c_byte_reallocator<> default_byte_allocator;

} // namespace memory
} // namespace eagine

#endif // include guard
