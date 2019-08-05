
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <bitset>
#include <iostream>
#include <deque>
#include <functional>
#include <iterator>
#include <limits>
#include <map>
#include <numeric>
#include <string>
#include <vector>

using namespace std;

#define int long long

#define ALL(v) begin(v), end(v)
#define RALL(v) rbegin(v), rend(v)

#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) for (int i = 0; i < (n); ++i)

#define debug(x) cerr << #x << ": " << x << endl;

const int MOD = 1e9 + 7;

template <typename T> T gcd(T m, T n) { return n == 0 ? m : gcd(n, m % n); }
template <typename T> T lcm(T m, T n) { return n * m / gcd(n, m); }

signed main(void)
{
  bool flag = true;
  // bool issorted = true;
  int n; cin >> n;
  vector<int> h(n);
  for (int i = 0; i < n; ++i) {
    cin >> h[i];
  }

  vector<bool> d(n, false);
  for (int i = n - 1; 0 < i; --i) {
    if (h[i] < h[i - 1]) {
      h[i - 1] -= 1;
      d[i - 1] = true;
    }
  }

  flag = is_sorted(h.begin(), h.end());

  if (flag) cout << "Yes";
  else cout << "No";
  cout << endl;
  
}
