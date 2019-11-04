
#include "bits/stdc++.h"

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
  int a, k;
  cin >> a >> k;

  int n = 0;

  if (k > 0) {
    while (a < 2 * pow(10, 12)) {
      a += 1 + k * a;
      ++n;
    }
  } else {
    n = 2 * pow(10, 12) - a;
  }

  cout << n << endl;
}
