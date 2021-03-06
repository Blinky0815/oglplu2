#  Copyright Matus Chochlik.
#  Distributed under the Boost Software License, Version 1.0.
#  See accompanying file LICENSE_1_0.txt or copy at
#   http://www.boost.org/LICENSE_1_0.txt
#
find_package(X11)

if(X11_FOUND)
	set(GLX_FOUND 1)
	if(X11_USE_FILE)
		set(GLX_USE_FILE ${X11_USE_FILE})
	endif()
	if(X11_INCLUDE_DIRS)
		set(GLX_INCLUDE_DIRS ${X11_INCLUDE_DIRS})
	endif()
	if(X11_LIBRARY_DIRS)
		set(GLX_LIBRARY_DIRS ${X11_LIBRARY_DIRS})
	endif()
	if(X11_DEFINITIONS)
		set(GLX_DEFINITIONS ${X11_DEFINITIONS})
	endif()
	if(X11_CXX_FLAGS)
		set(GLX_CXX_FLAGS ${X11_CXX_FLAGS})
	endif()
	if(X11_LIBRARIES)
		set(GLX_LIBRARIES ${X11_LIBRARIES})
	endif()
else()
	set(GLX_FOUND 0)
endif()
