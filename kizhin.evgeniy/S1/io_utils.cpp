#include "io_utils.hpp"
#include <cassert>
#include <iostream>
#include "forward-list.hpp"
#include "type_utils.hpp"

namespace kizhin {
  std::ostream& outputNames(std::ostream&, const ForwardList< SequenceT >&);
  std::ostream& outputSizes(std::ostream&, const ForwardList< SequenceT >&);
}

std::istream& kizhin::inputSequences(std::istream& in, ForwardList< SequenceT >& storage)
{
  using IstremIterT = std::istream_iterator< SequenceT::second_type::value_type >;
  while (in) {
    SequenceT curr;
    curr.second.assign(IstremIterT(in), IstremIterT{});
    if (!in.good()) {
      return in;
    }
    storage.pushBack(std::move(curr));
    if (in.eof()) {
      in.clear();
      return in;
    }
  }
  return in;
}

std::ostream& kizhin::processOutput(std::ostream& out,
    const ForwardList< SequenceT >& storage)
{
  if (storage.empty()) {
    return out << '0' << '\n';
  }
  outputNames(out, storage) << '\n';
  return outputSizes(out, storage);
}

std::ostream& kizhin::outputNames(std::ostream& out,
    const ForwardList< SequenceT >& storage)
{
  assert(!storage.empty());
  out << storage.front().first;
  using const_iterator = ForwardList< SequenceT >::const_iterator;
  for (const_iterator i = ++storage.begin(), end = storage.end(); i != end; ++i) {
    out << ' ' << i->first;
  }
  return out;
}

std::ostream& kizhin::outputSizes(std::ostream& out,
    const ForwardList< SequenceT >& storage)
{
  // using ListIter = SequenceT::second_type::const_iterator;
  using ListIter = Numbers::const_iterator;
  ForwardList< std::pair< ListIter, ListIter > > iters;
  bool allEmpty = true;
  for (const SequenceT& seq : storage) {
    iters.emplaceBack(seq.second.begin(), seq.second.end());
    if (seq.second.begin() != seq.second.end()) {
      allEmpty = false;
    }
  }
  if (allEmpty) {
    out << "0\n";
    return out;
  }
  bool isEqual = false;
  while (!isEqual) {
    isEqual = true;
    bool isFirst = true;
    using iterator = ForwardList< std::pair< ListIter, ListIter > >::iterator;
    for (iterator i = iters.begin(), end = iters.end(); i != end; ++i) {
      iterator::reference p = *i;
      if (p.first != p.second) {
        if (!isFirst) {
          out << ' ';
        }
        out << *(p.first++);
        isEqual = false;
        isFirst = false;
      }
    }
    if (!isEqual) {
      std::cout << '\n';
    }
  }
  return out;
}
