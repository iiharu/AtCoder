
#include "bits/stdc++.h"
// #include "boost/math/common_factor.hpp" // gcd, lcm
using namespace std;

// #define int long long

signed main(void) {
  int num; // num
  num = 0; // count, result
  // num = numeric_limits<int>::min(); // max
  // num = numeric_limits<int>::max(); // min
  int n;
  int s;
  array<int, 1000000> a;
  cin >> s;

  for (auto it = a.begin(); it < a.end(); ++it) {
    ++num;
    if (it == a.begin())
      *it = s;
    else
      if (*(it - 1) % 2 == 0)
        *it = *(it - 1) / 2;
      else
        *it = 3 * *(it - 1) + 1;
    
    if (find(a.begin(), it, *it) != it)
      break;
  }

  cout << num << endl;
  return 0;
}
