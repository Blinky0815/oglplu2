# Copyright Matus Chochlik.
# Distributed under the Boost Software License, Version 1.0.
# See accompanying file LICENSE_1_0.txt or copy at
#  http://www.boost.org/LICENSE_1_0.txt

set(EAGINE_LIB_SOURCES
	debug.cpp
	random.cpp
	input_data.cpp
	file_contents.cpp
	filesystem.cpp
	str_var_subst.cpp
	shapes_base.cpp
)

add_library(eagine EXCLUDE_FROM_ALL ${EAGINE_LIB_SOURCES})
set_property(TARGET eagine PROPERTY FOLDER "Library/EAGine")

