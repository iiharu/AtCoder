
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

const int MOD = 1e9 + 7;

signed main(void) {
  bool flag = true;
  int n;
  cin >> n;

  for (int a = 9; a >= 1; --a) {
    if (n % a == 0) {
      n /= a;
      break;
    }
  }

  if (1 <= n && n <= 9)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
