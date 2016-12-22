/**
 *  @file eagine/identifier.hpp
 *
 *  Copyright Matus Chochlik.
 *  Distributed under the Boost Software License, Version 1.0.
 *  See accompanying file LICENSE_1_0.txt or copy at
 *   http://www.boost.org/LICENSE_1_0.txt
 */

#ifndef EAGINE_IDENTIFIER_1509260923_HPP
#define EAGINE_IDENTIFIER_1509260923_HPP

#include <cstdint>
#include "string_span.hpp"
#include "type_traits.hpp"

namespace eagine {

constexpr span_size_t max_identifier_length{10};
using identifier_t = std::uint64_t;

namespace _aux {

constexpr std::uint8_t _6bit_enc_tab[8*16] = {
	63,63,63,63,63,63,63,63,63,63,63,63,63,63,63,63,
	63,63,63,63,63,63,63,63,63,63,63,63,63,63,63,63,
	63,63,63,63,63,63,63,63,63,63,63,63,63,10,63,63,
	 0, 1, 2, 3, 4, 5, 6, 7, 8, 9,63,63,63,63,63,63,
	63,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,
	26,27,28,29,30,31,32,33,34,35,36,63,63,63,63,63,
	63,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,
	52,53,54,55,56,57,58,59,60,61,62,63,63,63,63,63,
};

constexpr char _6bit_dec_tab[64] = {
	'0','1','2','3','4','5','6','7','8','9','-',
	'A','B','C','D','E','F','G','H','I','J','K','L','M',
	'N','O','P','Q','R','S','T','U','V','W','X','Y','Z',
	'a','b','c','d','e','f','g','h','i','j','k','l','m',
	'n','o','p','q','r','s','t','u','v','w','x','y','z',
	'_'
};

static constexpr inline
span_size_t _6bit_round_trip(span_size_t code_point) {
	return (code_point < 0x80)?
		span_size_t(_6bit_dec_tab[_6bit_enc_tab[code_point]]):
		span_size_t(0x7F);
}

static constexpr inline
bool _is_ident_char(span_size_t code_point) {
	return (code_point < 0x80) &&
		(_6bit_round_trip(code_point) == code_point);
}

static constexpr inline
identifier_t _ident_push(identifier_t ident, span_size_t code_point)
noexcept {
	return (_6bit_enc_tab[(code_point < 0x80) ? code_point : 0x7F])|
		(ident << 6);
}

static constexpr inline
char _ident_top(identifier_t ident)
noexcept { return _6bit_dec_tab[span_size_t(ident & 0x3F)]; }

static constexpr inline
identifier_t _ident_pop(identifier_t ident)
noexcept { return (ident >> 6); }

static constexpr inline
identifier_t _do_enc_ident(
	identifier_t ident,
	const char* str,
	span_size_t i,
	span_size_t n
) {
	return ((str[i] != '\0') && (i < n))?
		_do_enc_ident(
			_ident_push(ident, span_size_t(str[i])),
			str, i+1, n
		):ident;
}

static constexpr inline
span_size_t _do_dec_ident(
	identifier_t ident,
	char* str,
	span_size_t l,
	span_size_t n
) {
	return ((ident != 0xFu) && (l < n))?
		str[n-l-1] = _ident_top(ident),
		_do_dec_ident(
			_ident_pop(ident),
			str, l+1, n
		):n-l;
}

static constexpr inline
identifier_t _enc_ident(const char* str, span_size_t n) {
	return _do_enc_ident(0xFu, str, 0u, n);
}

static constexpr inline
span_size_t _dec_ident(identifier_t ident, char* str, span_size_t n) {
	return _do_dec_ident(ident, str, 0u, n);
}

} // namespace _aux

template <span_size_t N>
static constexpr inline
std::enable_if_t<(N <= max_identifier_length+1), identifier_t>
encode_identifier(const char(&str)[N]) {
	return _aux::_enc_ident(
		str,
		N<max_identifier_length?
		N:max_identifier_length
	);
}

template <span_size_t N>
static constexpr inline
std::enable_if_t<(N <= max_identifier_length+1), span_size_t>
decode_identifier(identifier_t ident, char(&str)[N]) {
	return _aux::_dec_ident(
		ident,
		str,
		N<max_identifier_length?
		N:max_identifier_length
	);
}

class identifier
{
private:
	identifier_t _id;
public:
	constexpr
	identifier(void)
	noexcept
	 : _id{0}
	{ }

	template <
		span_size_t N,
		typename = std::enable_if_t<(N <= max_identifier_length+1)>
	> constexpr explicit inline
	identifier(const char(&str)[N])
	noexcept
	 : _id{encode_identifier(str)}
	{ }

	explicit inline
	identifier(const cstring_span& str)
	noexcept
	 : _id{_aux::_enc_ident(str.data(), str.size())}
	{ }

	constexpr inline
	bool is_valid(void) const
	noexcept { return _id != 0u; }

	constexpr inline
	identifier_t get(void) const
	noexcept { return _id; }

	std::string str(void) const
	noexcept {
		char s[max_identifier_length];
		const span_size_t b = decode_identifier(get(), s);
		return {s+b, std_size(max_identifier_length-b)};
	}

	constexpr friend inline
	bool operator == (identifier a, identifier b)
	noexcept { return a._id == b._id; }

	constexpr friend inline
	bool operator != (identifier a, identifier b)
	noexcept { return a._id != b._id; }

	constexpr friend inline
	bool operator <= (identifier a, identifier b)
	noexcept { return a._id <= b._id; }

	constexpr friend inline
	bool operator >= (identifier a, identifier b)
	noexcept { return a._id >= b._id; }

	constexpr friend inline
	bool operator <  (identifier a, identifier b)
	noexcept { return a._id <  b._id; }

	constexpr friend inline
	bool operator >  (identifier a, identifier b)
	noexcept { return a._id >  b._id; }
};

} // namespace eagine

#endif // include guard