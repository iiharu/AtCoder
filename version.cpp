#include <iostream>
// #include <boost/version.hpp>
#include "boost/version.hpp"

using namespace std;

int main() {
  cout << "version" << endl;
  cout << "Boost: " << BOOST_VERSION / 100000 << "." << BOOST_VERSION / 100 % 1000 << "." << BOOST_VERSION % 100 << endl;

  return 0;
}
