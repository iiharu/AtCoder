
#include "bits/stdc++.h"

using namespace std;

#define int long long

#define ALL(v) begin(v), end(v)
#define RALL(v) rbegin(v), rend(v)

#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) for (int i = 0; i < (n); ++i)

#define debug(x) cerr << #x << ": " << x << endl;

const int MOD = 1e9 + 7;

template <typename T>
T gcd(T m, T n) { return n == 0 ? m : gcd(n, m % n); }
template <typename T>
T lcm(T m, T n) { return n * m / gcd(n, m); }

signed main(void)
{
  int n;
  cin >> n;
  string s;
  cin >> s;

  vector<int> c(n);
  c[0] = 1;

  for (int i = 1; i < n; ++i)
  {
    if (s[i - 1] != s[i])
      c[i] = 1;
  }

  cout << accumulate(c.begin(), c.end(), 0) << endl;
}
