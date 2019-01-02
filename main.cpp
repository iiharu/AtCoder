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
  string s;

  cin >> s;
  cin >> n;

  for (int i = 0; i < n; ++i) {
    int l,r;
    cin >> l >> r;
    --l;
    --r;
    string t = s.substr(l, r - l + 1);
    for(int j = l; j <= r; ++j) {
      s[j] = t[r - l - (j - l)];
    }
  }
  cout << s << endl;
  return 0;
}
