
#include "bits/stdc++.h"

using namespace std;

#define int long long

#define ALL(v) begin(v), end(v)
#define RALL(v) rbegin(v), rend(v)

#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) for (int i = 0; i < (n); ++i)

#define debug(x) cerr << #x << ": " << x << endl;

template <typename T> T gcd(T m, T n) { return n == 0 ? m : gcd(n, m % n); }
template <typename T> T lcm(T m, T n) { return n * m / gcd(n, m); }

template <typename T> T fact(T n) { return (n == 0 ? 1 : n * fact(n - 1)); }
template <typename T> T combi(T n, T r) {
  return (n == r || r == 0 && n != 0
              ? 1
              : (n * fact(n - 1)) / fact(n - 1) * fact(n - r));
}

const int MOD = 1e9 + 7;

signed main(void) {
  int n;
  cin >> n;
  vector<int> d(n);

  int M = 0;
  vector<int> c(n);
  for (int i = 0; i < n; ++i) {
    cin >> d[i];
    M = max(M, d[i]);
    ++c[d[i]];
  }

  if (d[0] != 0 || c[0] != 1) {
    cout << 0 << endl;
    return 0;
  }

  int num = 1;
  int mod = 998244353;
  for (int i = 1; i <= M; ++i) {
    // num *= (int)pow(c[i - 1], c[i]) % mod;
    for (int j = 0; j < c[i]; ++j) {
      num *= c[i - 1];
      num %= mod;
    }
    num %= mod;
  }

  cout << num << endl;
  return 0;
}
