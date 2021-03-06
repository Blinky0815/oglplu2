/**
 *  Copyright Matus Chochlik.
 *  Distributed under the Boost Software License, Version 1.0.
 *  See accompanying file LICENSE_1_0.txt or copy at
 *   http://www.boost.org/LICENSE_1_0.txt
 */

#include <cassert>
#include <eagine/math/constants.hpp>

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdouble-promotion"
#endif

namespace eagine {
namespace shapes {
//------------------------------------------------------------------------------
EAGINE_LIB_FUNC
vertex_attrib_bits
unit_icosahedron_gen::_attr_mask(void) noexcept {
    return vertex_attrib_kind::position | vertex_attrib_kind::box_coord;
}
//------------------------------------------------------------------------------
EAGINE_LIB_FUNC
vertex_attrib_bits
unit_icosahedron_gen::_shared_attrs(void) noexcept {
    return vertex_attrib_kind::position | vertex_attrib_kind::box_coord;
}
//------------------------------------------------------------------------------
EAGINE_LIB_FUNC
bool
unit_icosahedron_gen::_only_shared_attribs(void) const noexcept {
    return !(attrib_bits() & ~_shared_attrs());
}
//------------------------------------------------------------------------------
EAGINE_LIB_FUNC
unit_icosahedron_gen::unit_icosahedron_gen(
  vertex_attrib_bits attr_bits) noexcept
  : _base(attr_bits & _attr_mask()) {
}
//------------------------------------------------------------------------------
EAGINE_LIB_FUNC
span_size_t
unit_icosahedron_gen::vertex_count(void) {
    return 12;
}
//------------------------------------------------------------------------------
EAGINE_LIB_FUNC
void
unit_icosahedron_gen::positions(const span<float>& dest) noexcept {
    assert(dest.size() >= vertex_count() * 3);

    span_size_t k = 0;

    const auto il = 1.0 / std::sqrt(1.0 + std::pow(math::phi, 2.0));
    const decltype(il) q[3] = {0.0, il, math::phi * il};

    /*
     *        ^(y)
     *        |
     *  (D)-------(C)  (E)-------(F)    (I)-------(J)
     *   |    |    |    |         |      |         |
     *(z)|    |    |    |         | (x)  |         | (y)
     *<--|---(x)   |    |   (y)---|-->   |   (z)---|-->
     *   |         |    |    |    |      |    |    |
     *   |         |    |    |    |      |    |    |
     *  (B)-------(A)  (G)-------(H)    (K)-------(L)
     *                       |                |
     *                       v(z)             v(x)
     */

    const span_size_t qi[3][3] = {{0, 2, 1}, {1, 0, 2}, {2, 1, 0}};
    const float ps = 1.f;
    const float ns = -1.f;

    for(int p = 0; p < 3; ++p) {
	for(int v = 0; v < 4; ++v) {
	    const float sv[3] = {
	      0.f, v % 2 == 0 ? ns : ps, v / 2 == 0 ? ns : ps};
	    for(int c = 0; c < 3; ++c) {
		span_size_t qci = qi[p][c];
		dest[k++] = float(sv[qci] * q[qci]);
	    }
	}
    }

    assert(k == vertex_count() * 3);
}
//------------------------------------------------------------------------------
void
unit_icosahedron_gen::attrib_values(
  vertex_attrib_kind attr, const span<float>& dest) {
    switch(attr) {
	case vertex_attrib_kind::position:
	    positions(dest);
	    break;
	case vertex_attrib_kind::normal:
	case vertex_attrib_kind::tangential:
	case vertex_attrib_kind::bitangential:
	case vertex_attrib_kind::face_coord:
	case vertex_attrib_kind::wrap_coord:
	case vertex_attrib_kind::box_coord:
	    _base::attrib_values(attr, dest);
	    break;
    }
}
//------------------------------------------------------------------------------
EAGINE_LIB_FUNC
index_data_type
unit_icosahedron_gen::index_type(void) {
    return index_data_type::unsigned_byte;
}
//------------------------------------------------------------------------------
EAGINE_LIB_FUNC
span_size_t
unit_icosahedron_gen::index_count(void) {
    return 20 * 3;
}
//------------------------------------------------------------------------------
EAGINE_LIB_FUNC
void
unit_icosahedron_gen::indices(const span<unsigned>& dest) {
    assert(dest.size() >= index_count());

    span_size_t k = 0;

    const span_size_t A = 0, B = 1, C = 2, D = 3;
    const span_size_t E = 4, F = 5, G = 6, H = 7;
    const span_size_t I = 8, J = 9, K = 10, L = 11;

    dest[k++] = E;
    dest[k++] = F;
    dest[k++] = A;
    dest[k++] = F;
    dest[k++] = E;
    dest[k++] = C;
    dest[k++] = H;
    dest[k++] = G;
    dest[k++] = B;
    dest[k++] = G;
    dest[k++] = H;
    dest[k++] = D;

    dest[k++] = I;
    dest[k++] = J;
    dest[k++] = E;
    dest[k++] = J;
    dest[k++] = I;
    dest[k++] = G;
    dest[k++] = L;
    dest[k++] = K;
    dest[k++] = F;
    dest[k++] = K;
    dest[k++] = L;
    dest[k++] = H;

    dest[k++] = A;
    dest[k++] = B;
    dest[k++] = I;
    dest[k++] = B;
    dest[k++] = A;
    dest[k++] = K;
    dest[k++] = D;
    dest[k++] = C;
    dest[k++] = J;
    dest[k++] = C;
    dest[k++] = D;
    dest[k++] = L;

    dest[k++] = A;
    dest[k++] = I;
    dest[k++] = E;
    dest[k++] = A;
    dest[k++] = F;
    dest[k++] = K;
    dest[k++] = C;
    dest[k++] = E;
    dest[k++] = J;
    dest[k++] = C;
    dest[k++] = L;
    dest[k++] = F;
    dest[k++] = B;
    dest[k++] = G;
    dest[k++] = I;
    dest[k++] = B;
    dest[k++] = K;
    dest[k++] = H;
    dest[k++] = D;
    dest[k++] = J;
    dest[k++] = G;
    dest[k++] = D;
    dest[k++] = H;
    dest[k++] = L;

    assert(k == index_count());
}
//------------------------------------------------------------------------------
EAGINE_LIB_FUNC
span_size_t
unit_icosahedron_gen::operation_count(void) {
    return 1;
}
//------------------------------------------------------------------------------
EAGINE_LIB_FUNC
void
unit_icosahedron_gen::instructions(const span<draw_operation>& ops) {
    assert(ops.size() >= operation_count());

    draw_operation& op = ops[0];
    op.mode = primitive_type::triangles;
    op.idx_type = index_data_type::unsigned_byte;
    op.first = 0;
    op.count = index_count();
    op.primitive_restart = false;
    op.cw_face_winding = false;
}
//------------------------------------------------------------------------------
} // namespace shapes
} // namespace eagine

#ifdef __clang__
#pragma clang diagnostic pop
#endif
