/**
 *  @file oglplus/object/owner.hpp
 *
 *  Copyright Matus Chochlik.
 *  Distributed under the Boost Software License, Version 1.0.
 *  See accompanying file LICENSE_1_0.txt or copy at
 *  https://www.boost.org/LICENSE_1_0.txt
 */
#ifndef OGLPLUS_OBJECT_OWNER_1509260923_HPP
#define OGLPLUS_OBJECT_OWNER_1509260923_HPP

#include "name.hpp"
#include "lifetime.hpp"

namespace oglplus {

template <typename ObjTag, typename Storage>
class owned<object_names<ObjTag, Storage>>
 : public object_names<ObjTag, Storage>
{
public:
};

template <typename ObjTag>
class object_owner
 : public owned<object_name<ObjTag>>
{
public:
	object_owner(void)
	{
		obj_lifetime_ops<ObjTag>::gen_objects(*this);
	}

	object_owner(GLenum subtype) // TODO: subtype
	{
		obj_lifetime_ops<ObjTag>::gen_objects(*this, subtype);
	}

	object_owner(const object_owner&) = delete;
	object_owner& operator = (const object_owner&) = delete;

	object_owner(object_owner&&) = default;
	object_owner& operator = (object_owner&&) = default;

	~object_owner(void)
	{
		try { obj_lifetime_ops<ObjTag>::delete_objects(*this); }
		catch(...) { } // TODO rethrow exceptions or cancel ?
	}

	static
	auto is_object(object_name<ObjTag> name)
	noexcept
	{
		return obj_lifetime_ops<ObjTag>::is_object(name);
	}

	auto is_object(void) const
	noexcept
	{
		return is_object(*this);
	}
};

} // namespace oglplus

#endif // include guard