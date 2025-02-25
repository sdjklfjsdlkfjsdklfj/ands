#ifndef SPBSPU_LABS_2025_AADS_A_KIZHIN_EVGENIY_S1_TYPE_UTILS_HPP
#define SPBSPU_LABS_2025_AADS_A_KIZHIN_EVGENIY_S1_TYPE_UTILS_HPP

#include <iosfwd>
#include <utility>
#include "forward-list-fwd-declaration.hpp"

namespace kizhin {
  using Numbers = ForwardList< std::size_t >;
  using SequenceT = std::pair< std::string, Numbers >;
}

#endif

