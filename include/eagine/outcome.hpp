/**
 *  @file eagine/outcome.hpp
 *
 *  Copyright Matus Chochlik.
 *  Distributed under the Boost Software License, Version 1.0.
 *  See accompanying file LICENSE_1_0.txt or copy at
 *   http://www.boost.org/LICENSE_1_0.txt
 */

#ifndef EAGINE_OUTCOME_1509260923_HPP
#define EAGINE_OUTCOME_1509260923_HPP

#include "deferred_handler.hpp"
#include <type_traits>
#include <cassert>

namespace eagine {

template <typename T>
class basic_outcome_storage;

template <typename T>
class basic_outcome_storage
{
private:
	T _val;
public:
	basic_outcome_storage(void) = default;

	constexpr
	basic_outcome_storage(T val)
	noexcept
	 : _val(val)
	{ }

	constexpr
	T get(void) const
	noexcept
	{
		return _val;
	}

	template <typename Func>
	void apply(Func func)
	noexcept
	{
		try { func(_val); }
		catch(...) { }
	}
};

template <typename T>
class basic_outcome_storage<T&>
{
private:
	T* _ref;
public:
	constexpr
	basic_outcome_storage(void)
	noexcept
	 : _ref(nullptr)
	{ }

	basic_outcome_storage(T& ref)
	noexcept
	 : _ref(&ref)
	{ }

	T& get(void) const
	noexcept
	{
		assert(_ref != nullptr);
		return *_ref;
	}

	template <typename Func>
	void apply(Func func)
	noexcept
	{
		try { func(get()); }
		catch(...) { }
	}
};

template <
	typename T,
	typename ErrorData,
	typename HandlerPolicy = default_deferred_handler_policy<ErrorData>
>
class basic_outcome;

template <typename ErrorData, typename HandlerPolicy>
class basic_outcome<void, ErrorData, HandlerPolicy>
{
protected:
	deferred_handler<ErrorData, HandlerPolicy> _handler;
public:
	basic_outcome(void) = default;
	basic_outcome(basic_outcome&&) = default;

	constexpr
	basic_outcome(deferred_handler<ErrorData, HandlerPolicy>&& handler)
	noexcept
	 : _handler(std::move(handler))
	{ }

	deferred_handler<ErrorData, HandlerPolicy>
	release_handler(void)
	noexcept
	{
		return std::move(_handler);
	}

	ErrorData& handler_data(void)
	noexcept
	{
		return _handler.data();
	}

	const ErrorData& handler_data(void) const
	noexcept
	{
		return _handler.data();
	}

	basic_outcome& ignore_error(void)
	noexcept
	{
		_handler.cancel();
		return *this;
	}

	template <typename Handler>
	auto handle_error(Handler new_handler)
	{
		_handler.cancel();
		return new_handler(_handler.data());
	}

	bool failed(void) const
	noexcept
	{
		return bool(_handler);
	}

	bool succeeded(void) const
	noexcept
	{
		return !_handler;
	}

	bool done_without_error(void)
	noexcept
	{
		return !_handler.cancel();
	}
};

template <typename T, typename ErrorData, typename HandlerPolicy>
class basic_outcome
 : public basic_outcome<void, ErrorData, HandlerPolicy>
{
private:
	basic_outcome_storage<T> _value;
public:
	basic_outcome(basic_outcome&&) = default;

	constexpr
	basic_outcome(deferred_handler<ErrorData, HandlerPolicy>&& handler)
	noexcept
	 : basic_outcome<void, ErrorData, HandlerPolicy>(std::move(handler))
	{ }

	basic_outcome(T value)
	noexcept
	 : _value(value)
	{ }

	constexpr
	basic_outcome(
		deferred_handler<ErrorData, HandlerPolicy>&& handler,
		T value
	) noexcept
	 : basic_outcome<void, ErrorData, HandlerPolicy>(std::move(handler))
	 , _value(value)
	{ }

	basic_outcome(
		basic_outcome<void, ErrorData, HandlerPolicy>&& that,
		T value
	) noexcept
	 : basic_outcome<void, ErrorData, HandlerPolicy>(std::move(that))
	 , _value(value)
	{ }

	T get(void)
	{
		this->_handler.trigger();
		return _value.get();
	}

	operator T (void)
	{
		return get();
	}

	template <typename Func>
	void apply(Func func)
	noexcept
	{
		if(this->succeeded())
		{
			_value.apply(func);
		}
	}
};

template <typename T, typename U, typename ErrorData, typename HandlerPolicy>
static inline
basic_outcome<T, ErrorData, HandlerPolicy>
outcome_cast(basic_outcome<U, ErrorData, HandlerPolicy>&& that)
noexcept
{
	if(that.failed())
	{
		return {that.release_handler()};
	}
	return {T(that.get())};
}

template <typename T, typename U, typename ErrorData, typename HandlerPolicy>
static inline
basic_outcome<T, ErrorData, HandlerPolicy>
outcome_conversion(
	basic_outcome<U, ErrorData, HandlerPolicy>&& that,
	T (*convert)(U)
) noexcept
{
	if(that.failed())
	{
		return {that.release_handler()};
	}
	return {convert(that.get())};
}

template <typename T, typename ErrorData, typename HandlerPolicy>
static inline
basic_outcome<T, ErrorData, HandlerPolicy>
operator , (basic_outcome<void, ErrorData, HandlerPolicy>&& bo, T value)
noexcept
{
	return {std::move(bo), value};
}

template <typename T, typename ErrorData, typename HandlerPolicy, typename Func>
static inline
basic_outcome<T, ErrorData, HandlerPolicy>&&
operator | (basic_outcome<T, ErrorData, HandlerPolicy>&& bo, Func func)
noexcept
{
	bo.apply(func);
	return std::move(bo);
}

template <typename T, typename ErrorData, typename HandlerPolicy>
class basic_positive_outcome
 : public basic_outcome<T, ErrorData, HandlerPolicy>
{
public:
	basic_positive_outcome(basic_outcome<T, ErrorData, HandlerPolicy>&& o)
	noexcept
	 : basic_outcome<T, ErrorData, HandlerPolicy>(std::move(o))
	{ }

	explicit
	operator bool (void) const
	noexcept
	{
		return this->succeeded();
	}

	bool operator ! (void) const
	noexcept
	{
		return this->failed();
	}
};

template <typename T, typename ErrorData, typename HandlerPolicy>
static inline
basic_positive_outcome<T, ErrorData, HandlerPolicy>
success(basic_outcome<T, ErrorData, HandlerPolicy>&& o)
noexcept
{
	return std::move(o);
}

template <typename T, typename ErrorData, typename HandlerPolicy>
class basic_negative_outcome
 : public basic_outcome<T, ErrorData, HandlerPolicy>
{
public:
	basic_negative_outcome(basic_outcome<T, ErrorData, HandlerPolicy>&& o)
	noexcept
	 : basic_outcome<T, ErrorData, HandlerPolicy>(std::move(o))
	{ }

	explicit
	operator bool (void) const
	noexcept
	{
		return this->failed();
	}

	bool operator ! (void) const
	noexcept
	{
		return this->succeeded();
	}
};

template <typename T, typename ErrorData, typename HandlerPolicy>
static inline
basic_negative_outcome<T, ErrorData, HandlerPolicy>
failure(basic_outcome<T, ErrorData, HandlerPolicy>&& o)
noexcept
{
	return std::move(o);
}

} // namespace eagine

#endif // include guard
