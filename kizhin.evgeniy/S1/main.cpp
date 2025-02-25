#include <iostream>
#include "forward-list.hpp"
#include "io_utils.hpp"

int main()
{
  kizhin::ForwardList< kizhin::SequenceT > sequences;
  if (!kizhin::inputSequences(std::cin, sequences)) {
    std::cerr << "Error: overflow or invalid input\n";
    return 1;
  }
  kizhin::processOutput(std::cout, sequences);
}
