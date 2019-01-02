#include "bits/stdc++.h"
// #include "boost/math/common_factor.hpp" // gcd, lcm
using namespace std;

#define int long long

signed main(void) {
  int num; // num
  num = 0; // count, result
  // num = numeric_limits<int>::min(); // max
  // num = numeric_limits<int>::max(); // min
  int n;
  string c;
  int M = 0;
  int m = 100;
  
  cin >> n;
  cin >> c;
  
  for (char i = '1'; i <= '4'; ++i) {
    int tmp = 0;
    for (auto it = c.begin(); it != c.end(); ++it) {
      if (*it == i) tmp++;
    }
    M = max(M, tmp);
    m = min(m, tmp);
  }

  cout << M << " " << m << endl;
  return 0;
}
