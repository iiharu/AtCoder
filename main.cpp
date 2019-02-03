
#include "bits/stdc++.h"
// #include "boost/math/common_factor.hpp" // gcd, lcm
using namespace std;

// #define int long long

signed main(void) {
  {
    cin.tie(0);
    ios::sync_with_stdio(false);
  }

  int num; // num
  num = 0; // count, result
  // num = numeric_limits<int>::min(); // max
  // num = numeric_limits<int>::max(); // min
  int n;
  array<int, 1000000> a;

  cin >> n;
  for (auto it = a.begin(); it < a.begin() + n; ++it) cin >> *it;

  for (auto it = a.begin(); it < a.begin() + n; ++it) num += *it;

  cout << num << endl;
  return 0;
}
