/**
 *  @file eagine/range_algo.hpp
 *
 *  Copyright Matus Chochlik.
 *  Distributed under the Boost Software License, Version 1.0.
 *  See accompanying file LICENSE_1_0.txt or copy at
 *   http://www.boost.org/LICENSE_1_0.txt
 */

#ifndef EAGINE_RANGE_ALGO_1509260923_HPP
#define EAGINE_RANGE_ALGO_1509260923_HPP

#include "count.hpp"
#include "range_types.hpp"
#include "valid_if/le_size_ge0.hpp"
#include "valid_if/nonnegative.hpp"

namespace eagine {
namespace ranges {

// equal
template <typename Range1, typename Range2>
static inline bool
equal(const Range1& rng1, const Range2& rng2) noexcept {
    return rng1 == rng2;
}

template <typename Range>
static inline Range
subrange(const Range& rng,
  valid_range_position<Range> bgn,
  valid_range_position<Range> end) {
    return {rng.data() + bgn.value(rng), end.value(rng) - bgn.value(rng)};
}

template <typename Range>
static inline Range
slice(const Range& rng,
  any_range_position<Range> pos,
  any_range_position<Range> len) {
    if(pos.value() > rng.size()) {
	pos = rng.size();
    }
    if(len.value() > rng.size() - pos.value()) {
	len = rng.size() - pos.value();
    }
    return subrange<Range>(rng, pos.value(), pos.value() + len.value());
}

template <typename Range>
static inline Range
slice(const Range& rng, any_range_position<Range> pos) {
    if(pos.value() > rng.size()) {
	pos = rng.size();
    }
    return subrange<Range>(rng, pos.value(), rng.size());
}

template <typename Range>
static inline Range
head(const Range& rng, any_range_position<Range> len) {
    return slice(rng, 0, len);
}

template <typename Range>
static inline Range
tail(const Range& rng, any_range_position<Range> len) {
    if(len.value() > rng.size()) {
	len = rng.size();
    }
    return slice(rng, rng.size() - len.value(), len);
}

template <typename Range1, typename Range2>
static inline bool
starts_with(const Range1& rng, const Range2& with) {
    return equal(head(rng, with.size()), with);
}

template <typename Range1, typename Range2>
static inline bool
ends_with(const Range1& rng, const Range2& with) {
    return equal(tail(rng, with.size()), with);
}

template <typename Range1, typename Range2>
static inline optionally_valid<range_index_t<Range1>>
find_pos(const Range1& where, const Range2& what) {
    const auto lt = what.size();
    if(lt > 0) {
	const auto ls = where.size();
	if(ls > 0) {

	    if(ls >= lt) {
		range_index_t<Range1> p = 0;
		const range_index_t<Range1> n = ls - lt + 1;

		while(p != n) {
		    if(equal(slice(where, p, lt), what)) {
			return {p, true};
		    }
		    ++p;
		}
	    }
	}
	return {ls, false};
    }
    return {0, true};
}

template <typename Range1, typename Range2>
static inline optionally_valid<range_index_t<Range1>>
rfind_pos(const Range1& where, const Range2& what) {
    const auto lt = what.size();
    if(lt > 0) {
	const auto ls = where.size();
	if(ls > 0) {

	    if(ls >= lt) {
		range_index_t<Range1> p = ls - lt;

		while(p >= 0) {
		    if(equal(slice(where, p, lt), what)) {
			return {p, true};
		    }
		    --p;
		}
	    }
	}
	return {ls, false};
    }
    return {0, true};
}

template <typename Range1, typename Range2>
static inline bool
contains(const Range1& where, const Range2& what) {
    return find_pos(where, what).is_valid();
}

template <typename Range1, typename Range2>
static inline Range1
find(const Range1& where, const Range2& what) {
    if(auto pos = find_pos(where, what)) {
	return slice(where, pos.value());
    }
    return {};
}

template <typename Range1, typename Range2>
static inline Range1
strip_prefix(const Range1& rng, const Range2& prefix) {
    range_index_t<Range1> ofs = 0;
    if(starts_with(rng, prefix)) {
	ofs = prefix.size();
    }
    return slice(rng, ofs);
}

template <typename Range1, typename Range2>
static inline Range1
strip_suffix(const Range1& rng, const Range2& suffix) {
    range_index_t<Range1> ofs = rng.size();
    if(ends_with(rng, suffix)) {
	ofs = ofs - suffix.size();
    }
    return slice(rng, 0, ofs);
}

template <typename Range1, typename Range2>
static inline Range1
slice_before(const Range1& rng, const Range2& what) {
    return slice(rng, 0, find_pos(rng, what).value_or(rng.size()));
}

template <typename Range1, typename Range2>
static inline Range1
slice_before_last(const Range1& rng, const Range2& what) {
    return slice(rng, 0, rfind_pos(rng, what).value_or(0));
}

template <typename Range1, typename Range2>
static inline Range1
slice_after(const Range1& rng, const Range2& what) {
    if(auto pos = find_pos(rng, what)) {
	return slice(rng, pos.value() + what.size());
    }
    return {};
}

template <typename Range1, typename Range2>
static inline Range1
slice_after_last(const Range1& rng, const Range2& what) {
    if(auto pos = rfind_pos(rng, what)) {
	return slice(rng, pos.value() + what.size());
    }
    return {};
}

template <typename Range1, typename Range2, typename Range3>
static inline Range1
slice_between(const Range1& rng, const Range2& bgn, const Range3& end) {
    if(auto bpos = find_pos(rng, bgn)) {
	if(auto epos = find_pos(slice(rng, bpos.value() + bgn.size()), end)) {
	    return slice(rng, bpos.value() + bgn.size(), epos.value());
	}
    }
    return {};
}

template <typename Range1, typename Range2, typename Range3>
static inline Range1
slice_inside(const Range1& rng, const Range2& bgn, const Range3& end) {
    if(auto bpos = find_pos(rng, bgn)) {
	if(auto epos = rfind_pos(rng, end)) {
	    if(bpos.value() + bgn.size() < epos.value()) {
		return slice(rng,
		  bpos.value() + bgn.size(),
		  epos.value() - bgn.size() - 1);
	    }
	}
    }
    return {};
}

template <typename Range1, typename Range2>
static inline span_size_t
count(Range1 where, const Range2& what) {
    span_size_t result = 0;
    while(auto p = find_pos(where, what)) {
	++result;
	where = slice(where, p.value() + what.size());
    }
    return result;
}

template <typename Range1, typename Range2, typename UnaryOperation>
static inline UnaryOperation
for_each_delimited(
  const Range1& str, const Range2& delim, UnaryOperation unary_op) {
    Range1 tmp = str;
    while(auto p = find_pos(tmp, delim)) {
	unary_op(head(tmp, p.value()));
	tmp = slice(tmp, p.value() + delim.size());
    }
    unary_op(tmp);
    return unary_op;
}

template <typename Range1, typename Range2, typename BinaryOperation>
static inline BinaryOperation
for_each_delimiter(
  const Range1& str, const Range2& delim, BinaryOperation binary_op) {
    Range1 tmp = str;
    if(auto p1 = find_pos(tmp, delim)) {
	Range1 prev = head(tmp, p1.value());
	tmp = slice(tmp, p1.value() + delim.size());

	while(auto p = find_pos(tmp, delim)) {
	    Range1 curr = head(tmp, p.value());
	    binary_op(prev, curr);
	    prev = curr;
	    tmp = slice(tmp, p.value() + delim.size());
	}

	binary_op(prev, tmp);
    }
    return binary_op;
}

template <typename Range1, typename Range2>
static inline span_size_t
count_delimited(const Range1& where, const Range2& delim) {
    return for_each_delimited(where, delim, count_t<span_size_t>());
}

template <typename BackInsertionSequence,
  typename Range1,
  typename Range2,
  typename Transform>
static inline BackInsertionSequence&
split_into(BackInsertionSequence& dest,
  const Range1& rng,
  const Range2& delim,
  Transform transform) {
    for_each_delimited(rng, delim, [&dest, &transform](const auto& x) {
	dest.push_back(transform(x));
    });
    return dest;
}

template <typename BackInsertionSequence, typename Range1, typename Range2>
static inline BackInsertionSequence&
split_into(
  BackInsertionSequence& dest, const Range1& rng, const Range2& delim) {
    return split_into(dest, rng, delim, [](const auto& x) {
	return typename BackInsertionSequence::value_type(x);
    });
}

template <typename BackInsertionSequence,
  typename Range1,
  typename Range2,
  typename Transform>
static inline BackInsertionSequence
split(const Range1& rng, const Range2& delim, Transform transform) {
    BackInsertionSequence result;
    return std::move(split_into(result, rng, delim, transform));
}

template <typename BackInsertionSequence, typename Range1, typename Range2>
static inline BackInsertionSequence
split(const Range1& rng, const Range2& delim) {
    BackInsertionSequence result;
    return std::move(split_into(result, rng, delim));
}

} // namespace ranges
} // namespace eagine

#endif // include guard
