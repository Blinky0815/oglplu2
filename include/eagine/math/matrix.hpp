/**
 *  @file eagine/math/matrix.hpp
 *
 *  Copyright Matus Chochlik.
 *  Distributed under the Boost Software License, Version 1.0.
 *  See accompanying file LICENSE_1_0.txt or copy at
 *   http://www.boost.org/LICENSE_1_0.txt
 */
#ifndef EAGINE_MATH_MATRIX_1509260923_HPP
#define EAGINE_MATH_MATRIX_1509260923_HPP

#include "vector.hpp"
#include "../int_sequence.hpp"

namespace eagine {
namespace math {

template <typename T, unsigned C, unsigned R, bool RM, bool V>
struct matrix
{
	typedef matrix type;
	typedef T element_type;

	template <unsigned ... U>
	using _useq = integer_sequence<unsigned, U...>;

	template <unsigned N>
	using _make_useq = make_integer_sequence<unsigned, N>;

	vect::data_t<T, RM?C:R, V> _v[RM?R:C];

	template <typename P, unsigned ... I>
	static inline
	matrix _from_hlp(const P* dt, std::size_t sz, _useq<I...>)
	noexcept
	{
		return matrix{{
			vect::from_array<T, RM?C:R, V>::apply(
				dt+I*(RM?C:R),
				sz-I*(RM?C:R)
			)...
		}};
	}

	template <typename P>
	static inline
	matrix from(const P* dt, std::size_t sz)
	noexcept
	{
		return _from_hlp(dt, sz, _make_useq<RM?R:C>());
	}

	template <typename P, unsigned M, unsigned N, bool W, unsigned ... I>
	static inline
	matrix _from_hlp(const matrix<P,M,N,RM,W>& m, _useq<I...>)
	noexcept
	{
		return matrix{{
			vect::cast<
				P,(RM?M:N),W,
				T,(RM?C:R),V
			>::apply(m._v[I],T(0))...
		}};
	}

	template <typename P, unsigned M, unsigned N, bool W>
	static inline
	std::enable_if_t<(C<=M)&&(R<=N), matrix>
	from(const matrix<P,M,N,RM,W>& m)
	noexcept
	{
		return _from_hlp(m, _make_useq<RM?R:C>());
	}

	inline
	const vector<T, RM?C:R, V> operator [] (unsigned i) const
	noexcept
	{
		return vector<T, RM?C:R, V>{_v[i]};
	}
};

template <typename T, unsigned C, unsigned R, bool RM, bool V>
struct is_row_major<matrix<T,C,R,RM,V>>
 : std::integral_constant<bool, RM>
{ };

template <typename T, unsigned C, unsigned R, bool RM, bool V>
static constexpr inline
unsigned rows(const matrix<T, C, R, RM, V>&)
noexcept
{
	return R;
}

template <typename T, unsigned C, unsigned R, bool RM, bool V>
static constexpr inline
unsigned columns(const matrix<T, C, R, RM, V>&)
noexcept
{
	return C;
}

template <typename T, unsigned C, unsigned R, bool RM, bool V>
static constexpr inline
bool row_major(const matrix<T, C, R, RM, V>&)
noexcept
{
	return RM;
}

template <typename T, unsigned N, bool RM, bool V>
static constexpr inline
unsigned dimension(const matrix<T, N, N, RM, V>&)
noexcept
{
	return N;
}

// get_cm (Column-major)
template <unsigned CI, unsigned RI, typename T, unsigned C, unsigned R, bool V>
static constexpr inline
std::enable_if_t<(CI<C && RI<R), T>
get_cm(const matrix<T, C, R,false, V>& m)
noexcept
{
	return m._v[CI][RI];
}

// get_cm (Row-major)
template <unsigned CI, unsigned RI, typename T, unsigned C, unsigned R, bool V>
static constexpr inline
std::enable_if_t<(CI<C && RI<R), T>
get_cm(const matrix<T, C, R, true, V>& m)
noexcept
{
	return m._v[RI][CI];
}

// get_cm (Column-major, run-time)
template <typename T, unsigned C, unsigned R, bool V>
static constexpr inline
T get_cm(const matrix<T, C, R,false, V>& m, unsigned ci, unsigned ri)
noexcept
{
	assert(ci<C && ri<R);
	return m._v[ci][ri];
}

// get_cm (Row-major, run-time)
template <typename T, unsigned C, unsigned R, bool V>
static constexpr inline
T get_cm(const matrix<T, C, R, true, V>& m, unsigned ci, unsigned ri)
noexcept
{
	assert(ci<C && ri<R);
	return m._v[ri][ci];
}

// get_rm (Column-major)
template <unsigned RI, unsigned CI, typename T, unsigned C, unsigned R, bool V>
static constexpr inline
std::enable_if_t<(CI<C && RI<R), T>
get_rm(const matrix<T, C, R,false, V>& m)
noexcept
{
	return m._v[CI][RI];
}

// get_rm (Row-major)
template <unsigned RI, unsigned CI, typename T, unsigned C, unsigned R, bool V>
static constexpr inline
std::enable_if_t<(CI<C && RI<R), T>
get_rm(const matrix<T, C, R, true, V>& m)
noexcept
{
	return m._v[RI][CI];
}

// get_rm (Column-major, run-time)
template <typename T, unsigned C, unsigned R, bool V>
static constexpr inline
T get_rm(const matrix<T, C, R,false, V>& m, unsigned ri, unsigned ci)
noexcept
{
	assert(ci<C && ri<R);
	return m._v[ci][ri];
}

// get_rm (Row-major, run-time)
template <typename T, unsigned C, unsigned R, bool V>
static constexpr inline
T get_rm(const matrix<T, C, R, true, V>& m, unsigned ri, unsigned ci)
noexcept
{
	assert(ci<C && ri<R);
	return m._v[ri][ci];
}

// set_cm (Column-major)
template <unsigned CI, unsigned RI, typename T, unsigned C, unsigned R, bool V>
static inline
std::enable_if_t<(CI<C && RI<R), void>
set_cm(matrix<T, C, R,false, V>& m, T v)
noexcept
{
	m._v[CI][RI] = v;
}

// set_cm (Row-major)
template <unsigned CI, unsigned RI, typename T, unsigned C, unsigned R, bool V>
static inline
std::enable_if_t<(CI<C && RI<R), void>
set_cm(matrix<T, C, R, true, V>& m, T v)
noexcept
{
	m._v[RI][CI] = v;
}

// set_cm (Column-major, run-time)
template <typename T, unsigned C, unsigned R, bool V>
static inline
void set_cm(matrix<T, C, R,false, V>& m, unsigned ci, unsigned ri, T v)
noexcept
{
	assert(ci<C && ri<R);
	m._v[ci][ri] = v;
}

// set_cm (Row-major, run-time)
template <typename T, unsigned C, unsigned R, bool V>
static inline
void set_cm(matrix<T, C, R, true, V>& m, unsigned ci, unsigned ri, T v)
noexcept
{
	assert(ci<C && ri<R);
	m._v[ri][ci] = v;
}

// set_rm (Column-major)
template <unsigned RI, unsigned CI, typename T, unsigned C, unsigned R, bool V>
static inline
std::enable_if_t<(CI<C && RI<R), void>
set_rm(matrix<T, C, R,false, V>& m, T v)
noexcept
{
	m._v[CI][RI] = v;
}

// set_rm (Row-major)
template <unsigned RI, unsigned CI, typename T, unsigned C, unsigned R, bool V>
static inline
std::enable_if_t<(CI<C && RI<R), void>
set_rm(matrix<T, C, R, true, V>& m, T v)
noexcept
{
	m._v[RI][CI] = v;
}

// set_rm (Column-major, run-time)
template <typename T, unsigned C, unsigned R, bool V>
static inline
void set_rm(matrix<T, C, R,false, V>& m, unsigned ri, unsigned ci, T v)
noexcept
{
	assert(ci<C && ri<R);
	m._v[ci][ri] = v;
}

// set_rm (Row-major, run-time)
template <typename T, unsigned C, unsigned R, bool V>
static inline
void set_rm(matrix<T, C, R, true, V>& m, unsigned ri, unsigned ci, T v)
noexcept
{
	assert(ci<C && ri<R);
	m._v[ri][ci] = v;
}

// transpose_tpl helper 4x4 matrix
template <bool DstRM, typename T, bool V>
static inline
matrix<T, 4, 4, DstRM, V>
transpose_tpl_hlp(
	const typename vect::data<T, 4, V>::type& q0,
	const typename vect::data<T, 4, V>::type& q1,
	const typename vect::data<T, 4, V>::type& q2,
	const typename vect::data<T, 4, V>::type& q3
) noexcept
{
	return matrix<T, 4, 4, DstRM, V>{{
		vect::shuffle2<T, 4, V>::template apply<0,2,4,6>(q0, q2),
		vect::shuffle2<T, 4, V>::template apply<1,3,5,7>(q0, q2),
		vect::shuffle2<T, 4, V>::template apply<0,2,4,6>(q1, q3),
		vect::shuffle2<T, 4, V>::template apply<1,3,5,7>(q1, q3)
	}};
}

// transpose_tpl 4x4 matrix
template <bool DstRM, bool SrcRM, typename T, bool V>
static inline
matrix<T, 4, 4, DstRM, V>
transpose_tpl(const matrix<T, 4, 4, SrcRM,V>& m)
noexcept
{
	return transpose_tpl_hlp<DstRM, T, V>(
		vect::shuffle2<T,4,V>::template apply<0,1,4,5>(m._v[0],m._v[1]),
		vect::shuffle2<T,4,V>::template apply<2,3,6,7>(m._v[0],m._v[1]),
		vect::shuffle2<T,4,V>::template apply<0,1,4,5>(m._v[2],m._v[3]),
		vect::shuffle2<T,4,V>::template apply<2,3,6,7>(m._v[2],m._v[3])
	);
}

// transpose_tpl
template <bool DstRM, bool SrcRM, typename T, unsigned C, unsigned R, bool V>
static inline
matrix<T, (DstRM==SrcRM?R:C), (DstRM==SrcRM?C:R), DstRM, V>
transpose_tpl(const matrix<T, C, R, SrcRM, V>& m)
noexcept
{
	static const bool S = (DstRM != SrcRM);
	matrix<T, (S?C:R), (S?R:C), DstRM, V> r;

	for(unsigned i=0; i<R; ++i)
	for(unsigned j=0; j<C; ++j)
	{
		set_rm(r, S?i:j, S?j:i, get_rm(m, i, j));
	}

	return r;
}

// transpose
template <typename T, unsigned C, unsigned R, bool RM, bool V>
static inline
matrix<T, R, C, RM, V>
transpose(const matrix<T, C, R, RM, V>& m)
noexcept
{
	return transpose_tpl<RM, RM, T>(m);
}

// reordered matrix trait
template <typename X>
struct reordered_matrix;

template <typename X>
using reordered_matrix_t = typename reordered_matrix<X>::type;

// reordered matrix
template <typename T, unsigned C, unsigned R, bool RM, bool V>
struct reordered_matrix<matrix<T, C, R, RM, V>>
 : matrix<T, R, C,!RM, V>
{ };

// reorder
template <typename T, unsigned C, unsigned R, bool RM, bool V>
static inline
matrix<T, C, R,!RM, V>
reorder(const matrix<T, C, R, RM, V>& m)
noexcept
{
	return transpose_tpl<!RM, RM, T>(m);
}

// make_row_major
template <typename T, unsigned C, unsigned R, bool V>
static constexpr inline
matrix<T, C, R, true,V>
make_row_major(matrix<T, C, R, true, V> m)
noexcept
{
	return m;
}

// make_row_major
template <typename T, unsigned C, unsigned R, bool V>
static inline
matrix<T, C, R, true,V>
make_row_major(const matrix<T, C, R,false, V>& m)
noexcept
{
	return reorder(m);
}

// make_column_major
template <typename T, unsigned C, unsigned R, bool V>
static constexpr inline
matrix<T, C, R,false,V>
make_column_major(matrix<T, C, R,false, V> m)
noexcept
{
	return m;
}

// make_column_major
template <typename T, unsigned C, unsigned R, bool V>
static inline
matrix<T, C, R,false,V>
make_column_major(const matrix<T, C, R, true, V>& m)
noexcept
{
	return reorder(m);
}

// major_vector
template <unsigned I, typename T, unsigned C, unsigned R, bool RM, bool V>
static constexpr inline
std::enable_if_t<(I<(RM?R:C)), vector<T, (RM?C:R), V>>
major_vector(const matrix<T,C,R,RM,V>& m)
noexcept
{
	return {m._v[I]};
}

// minor_vector
template <unsigned I, typename T, unsigned C, unsigned R, bool RM, bool V>
static inline
std::enable_if_t<(I<(RM?C:R)), vector<T, (RM?R:C), V>>
minor_vector(const matrix<T,C,R,RM,V>& m)
noexcept
{
	return major_vector<I>(reorder(m));
}

// minor_vector mat4x4
template <unsigned I, typename T, bool RM, bool V>
static inline
std::enable_if_t<(I<4), vector<T, 4, V>>
minor_vector(const matrix<T,4,4,RM,V>& m)
noexcept
{
	return {vect::shuffle2<T,4,V>::template apply<0,1,4,5>(
		vect::shuffle2<T,4,V>::template apply<0+I,4+I,-1,-1>(
			m._v[0],
			m._v[1]
		),
		vect::shuffle2<T,4,V>::template apply<0+I,4+I,-1,-1>(
			m._v[2],
			m._v[3]
		)
	)};
}

// row (Row-Major)
template <unsigned I, typename T, unsigned C, unsigned R, bool V>
static constexpr inline
vector<T, C, V>
row(const matrix<T,C,R,true,V>& m)
noexcept
{
	static_assert(I < R, "");
	return major_vector<I>(m);
}

// row (Column-Major)
template <unsigned I, typename T, unsigned C, unsigned R, bool V>
static inline
vector<T, C, V>
row(const matrix<T,C,R,false,V>& m)
noexcept
{
	static_assert(I < R, "");
	return minor_vector<I>(m);
}

// _row_hlp
template <typename T, unsigned C, unsigned R, bool RM, bool V>
static inline
vector<T, C, V> _row_hlp(
	const matrix<T,C,R,RM,V>& m,
	std::integral_constant<unsigned, 0u>,
	unsigned i
) noexcept
{
	assert(i == 0u);
	return row<0u>(m);
}

// _row_hlp
template <typename T, unsigned R, unsigned C, bool RM, bool V, unsigned I>
static inline
vector<T, C, V> _row_hlp(
	const matrix<T,C,R,RM,V>& m,
	std::integral_constant<unsigned, I>,
	unsigned i
) noexcept
{
	if(I == i) return row<I>(m);
	return _row_hlp(m, std::integral_constant<unsigned, I-1>(), i);
}

// row - run-time
template <typename T, unsigned R, unsigned C, bool RM, bool V>
static inline
vector<T, C, V>
row(const matrix<T,C,R,RM,V>& m, unsigned i)
noexcept
{
	return _row_hlp(m, std::integral_constant<unsigned,R-1>(), i);
}

// column (Column-Major)
template <unsigned I, typename T, unsigned C, unsigned R, bool V>
static constexpr inline
vector<T, R, V>
column(const matrix<T,C,R,false,V>& m)
noexcept
{
	return major_vector<I>(m);
}

// column (Row-Major)
template <unsigned I, typename T, unsigned C, unsigned R, bool V>
static inline
vector<T, R, V>
column(const matrix<T,C,R,true,V>& m)
noexcept
{
	return minor_vector<I>(m);
}

// _col_hlp
template <typename T, unsigned C, unsigned R, bool RM, bool V>
static inline
vector<T, R, V> _col_hlp(
	const matrix<T,C,R,RM,V>& m,
	std::integral_constant<unsigned, 0u>,
	unsigned i
) noexcept
{
	assert(i == 0);
	return column<0>(m);
}

// _col_hlp
template <typename T, unsigned C, unsigned R, bool RM, bool V, unsigned I>
static inline
vector<T, R, V> _col_hlp(
	const matrix<T,C,R,RM,V>& m,
	std::integral_constant<unsigned, I>,
	unsigned i
) noexcept
{
	if(I == i) return column<I>(m);
	return _col_hlp(m, std::integral_constant<unsigned, I-1>(), i);
}

// column - run-time
template <typename T, unsigned R, unsigned C, bool RM, bool V>
static inline
vector<T, R, V>
column(const matrix<T,C,R,RM,V>& m, unsigned i)
noexcept
{
	return _col_hlp(m, std::integral_constant<unsigned, C-1>(), i);
}

// is_matrix_constructor trait
template <typename X>
struct is_matrix_constructor
 : std::false_type
{ };

template <bool RM, typename T, unsigned C, unsigned R, bool V>
struct is_matrix_constructor<matrix<T,C,R,RM,V>>
 : std::true_type
{ };

// constructed_matrix trait
template <typename X>
struct constructed_matrix;

template <typename X>
using constructed_matrix_t = typename constructed_matrix<X>::type;

// constructed_matrix trait
template <
	typename T,
	unsigned C,
	unsigned R,
	bool RM,
	bool V
> struct constructed_matrix<matrix<T,C,R,RM,V>>
 : matrix<T,C,R,RM,V>
{ };

// construct_matrix (noop)
template <bool RM, typename T, unsigned C, unsigned R, bool V>
static constexpr inline
const matrix<T,C,R,RM,V>&
construct_matrix(const matrix<T,C,R,RM,V>& m)
noexcept
{
	return m;
}

// construct_matrix (reorder)
template <bool RM, typename T, unsigned C, unsigned R, bool V>
static constexpr inline
matrix<T,C,R,RM,V>
construct_matrix(const matrix<T,C,R,!RM,V>& m)
noexcept
{
	return reorder(m);
}


// are_multiplicable
template <
	typename T,
	unsigned M,
	unsigned N,
	unsigned K,
	bool RM1,
	bool RM2,
	bool V
>
struct are_multiplicable<
	matrix<T, M, K, RM1, V>,
	matrix<T, K, N, RM2, V>
>: std::true_type
{ };

// multiplication_result MxM
template <
	typename T,
	unsigned M,
	unsigned N,
	unsigned K,
	bool RM1,
	bool RM2,
	bool V
>
struct multiplication_result<
	matrix<T, K, M, RM1, V>,
	matrix<T, N, K, RM2, V>
>: matrix<T, N, M, RM1, V>
{ };
 
// multiply MxM
template <
	typename T,
	unsigned M,
	unsigned N,
	unsigned K,
	bool RM1,
	bool RM2,
	bool V
>
static inline
matrix<T, N, M, RM1, V>
multiply(const matrix<T, K, M, RM1, V>& m1, const matrix<T, N, K, RM2, V>& m2)
noexcept
{
	matrix<T, N, M, RM1, V> m3;

	for(unsigned i=0; i<M; ++i)
	for(unsigned j=0; j<N; ++j)
	{
		T s = T(0);

		for(unsigned k=0; k<K; ++k)
		{
			s += get_rm(m1, i, k)*get_rm(m2, k, j);
		}

		set_rm(m3, i, j, s);
	}
	return m3;
}

template <
	typename MC1,
	typename MC2,
	typename = std::enable_if_t<
		is_matrix_constructor<MC1>::value &&
		is_matrix_constructor<MC2>::value &&
		are_multiplicable<
			constructed_matrix_t<MC1>,
			constructed_matrix_t<MC2>
		>::value
	>
>
static inline
auto operator * (const MC1& mc1, const MC2& mc2)
noexcept
{
	return multiply(mc1, mc2);
}

} // namespace math

template <typename T, unsigned C, unsigned R, bool RM, bool V>
struct is_known_matrix_type<math::matrix<T, C, R, RM, V>>
 : std::is_scalar<T>
{ };

template <typename T, unsigned C, unsigned R, bool RM, bool V>
struct canonical_compound_type<math::matrix<T, C, R, RM, V>>
 : identity<typename std::remove_cv<T[C][R]>::type>
{ };

template <typename T, unsigned C, unsigned R, bool RM, bool V>
struct compound_view_maker<math::matrix<T, C, R, RM, V>>
{
	inline
	auto operator()(const math::matrix<T, C, R, RM, V>& m) const
	noexcept
	{
		return vect::view<T, RM?C:R, V>::apply(m._v);
	}
};

template <typename T, unsigned C, unsigned R, bool RM, bool V>
struct is_row_major<math::matrix<T,C,R,RM,V>>
 : std::integral_constant<bool, RM>
{ };

} // namespace eagine

#endif //include guard

