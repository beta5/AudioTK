/**
 * \file Utilities.cpp
 */

#include <ATK/Core/Utilities.hxx>
#include <simdpp/simd.h>

namespace ATK
{
  template struct ConversionUtilities<simdpp::float32<4>, simdpp::float32<4> >;
  template struct ConversionUtilities<simdpp::float64<4>, simdpp::float64<4> >;
}
