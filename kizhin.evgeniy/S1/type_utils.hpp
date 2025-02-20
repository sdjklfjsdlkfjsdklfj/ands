#ifndef SPBSPU_LABS_2025_AADS_A_KIZHIN_EVGENIY_S1_TYPE_UTILS_HPP
#define SPBSPU_LABS_2025_AADS_A_KIZHIN_EVGENIY_S1_TYPE_UTILS_HPP

#include <iosfwd>
#include <utility>
#include "forward-list-fwd-declaration.hpp"

namespace kizhin {
  using SequenceT = std::pair< std::string, ForwardList< std::size_t > >;
}

#endif

