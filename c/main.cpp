
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
#include <queue>
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

signed main(void) {
  int n, k, q; cin >> n >> k >> q;
  vector<int> p(n);
  for (int i = 0; i < q; ++i) {
    int a; cin >> a;
    ++p[a - 1];
  }

  for (int i = 0; i < n; ++i) {
    int s = k - (q - p[i]);
    if (s > 0) cout << "Yes";
    else cout << "No";
    cout << endl;
  }
  
}
