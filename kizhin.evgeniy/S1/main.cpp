#include <iostream>
#include "forward-list.hpp"
#include "io_utils.hpp"

int main()
{
  kizhin::ForwardList< kizhin::SequenceT > sequences;
  if (!kizhin::inputSequences(std::cin, sequences)) {
    std::cout << "Not input" << '\n';
  }
  kizhin::processOutput(std::cout, sequences) << '\n';
}

