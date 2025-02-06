#include <boost/test/uint_test.hpp>
#include <sstream>
#include "credentials.hpp"

BOOST_AUTO_TEST_CASE(test-credentials)
{
  std::ostringstream out;
  finaev::outCredentials(out);
  BOOST_TEST(out.str() == "finaev.alexey");
}
