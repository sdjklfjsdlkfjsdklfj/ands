#include <iostream>
#include "forward-list.hpp"
#include "io_utils.hpp"

int main()
{
  kizhin::ForwardList< kizhin::SequenceT > sequences;
  if (!kizhin::inputSequences(std::cin, sequences)) {
    /* TODO: clarify what to do here */
  }
  kizhin::processOutput(std::cout, sequences);
}

