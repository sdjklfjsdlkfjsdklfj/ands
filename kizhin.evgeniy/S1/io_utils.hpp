#ifndef SPBSPU_LABS_2025_AADS_A_KIZHIN_EVGENIY_S1_IO_UTILS_HPP
#define SPBSPU_LABS_2025_AADS_A_KIZHIN_EVGENIY_S1_IO_UTILS_HPP

#include "type_utils.hpp"

namespace kizhin {
  std::istream& inputSequences(std::istream&, ForwardList< SequenceT >&);
  std::ostream& processOutput(std::ostream&, const ForwardList< SequenceT >&);
}

#endif

