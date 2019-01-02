#include "bits/stdc++.h"
// #include "boost/math/common_factor.hpp" // gcd, lcm
using namespace std;

#define int long long

signed main(void) {
  // int num; // num
  double num;
  num = 0; // count, result
  // num = numeric_limits<int>::min(); // max
  // num = numeric_limits<int>::max(); // min
  int n;
  array<int, 1000> r;

  cin >> n;
  for(int i = 0; i < n; ++i) cin >> r[i];
  sort(r.begin(), r.begin() + n);

  for (int i = n - 1; 0 <= i; i-=2){
    num += r[i] * r[i] * M_PI;
  }
  for (int i = n - 2; 0 <= i; i-=2) {
    num -= r[i] * r[i] * M_PI;
  }

  cout << setprecision(10) << num << endl;

  return 0;
}
