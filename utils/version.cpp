#include <iostream>
#include "boost/version.hpp"

using namespace std;

int main() {

  // version of GCC.
#ifdef __GNUC__
  cout << "GCC: " << __GNUC__;
#ifdef __GNUC_MINOR__
  cout << "." << __GNUC_MINOR__;
#ifdef __GNUC_PATCHLEVEL__
  cout << "." << __GNUC_PATCHLEVEL__;
#endif
#endif
  cout << endl;
#endif

  // version of clang.
#ifdef __clang__
  cout << "clang: ";
#ifdef __clang_major__
  cout << __clang_major__;
#ifdef __clang_minor__
  cout << "." << __clang_minor__;
#ifdef __clang_patchlevel__
  cout << "." << __clang_patchlevel;
#endif
#endif
#endif
  cout << endl;
#endif

  // version of C++;
#ifdef __cplusplus
  cout << "C++: " << __cplusplus << endl;
#endif
  // version of boost.
#ifdef BOOST_VERSION
  cout << "Boost: "
       << BOOST_VERSION / 100000
       << "." << BOOST_VERSION / 100 % 1000
       << "." << BOOST_VERSION % 100
       << endl;
#endif
    
  return 0;
}

