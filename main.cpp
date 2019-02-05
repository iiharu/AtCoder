
#include "bits/stdc++.h"
// #define rep(i, n) for(int i = 0; i < (int)(n); i++)
// #define all(a) (a).begin(),(a).end()
// #define UNIQUE(v) v.erase(unique(v.begin(), v.end()), v.end());
// int gcd(int a, int b){return b ? gcd(b, a%b) : a;}

#define int long long

using namespace std;

signed main(void) {
  cin.tie(0);
  ios::sync_with_stdio(false);

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
