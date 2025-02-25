#ifndef SPBSPU_LABS_2025_AADS_A_KIZHIN_EVGENIY_S1_TYPE_UTILS_HPP
#define SPBSPU_LABS_2025_AADS_A_KIZHIN_EVGENIY_S1_TYPE_UTILS_HPP

#include <cstdint>
#include <iosfwd>
#include <utility>
#include "forward-list-fwd-declaration.hpp"

namespace kizhin {
  using Numbers = ForwardList< std::int64_t >;
  using SequenceT = std::pair< std::string, Numbers >;
}

#endif

