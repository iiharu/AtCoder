
#include "bits/stdc++.h"
#include <boost/math/common_factor_rt.hpp>
// #define rep(i, n) for(int i = 0; i < (int)(n); i++)
// #define all(a) (a).begin(),(a).end()
// #define UNIQUE(v) v.erase(unique(v.begin(), v.end()), v.end());
// int gcd(int a, int b){return b ? gcd(b, a%b) : a;}

#define int long long
#define SIZE 100000

using namespace std;

signed main(void) {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int num; // num
  num = 0; // count, result
  // num = numeric_limits<int>::min(); // max
  // num = numeric_limits<int>::max(); // min
  int n; cin >> n;

  vector<int> a(n);
  for (auto it = a.begin(); it < a.end(); ++it) cin >> *it;

  while (a.size() != 1) {
    sort(a.begin(), a.end());
    auto it = lower_bound(a.begin(), a.end(), 1);
    a.erase(a.begin(), it);
    for (auto it = a.begin() + 1; it < a.end(); ++it) {
      *it = *it % *(a.begin());
    }
    // ostream_iterator<int> oit(cout, " ");
    // copy(a.begin(), a.end(), oit); cout << endl;
  }

  num = a.front();
  
  // array<int, SIZE> a;
  // for (auto it = a.begin(); it < a.begin() + n; ++it) cin >> *it;
  // for (auto it = a.begin(); it < a.begin() + n; ++it) num += *it;

  cout << num << endl;
  return 0;
}
