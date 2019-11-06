
#include "bits/stdc++.h"

using namespace std;

// #define int long long

#define ALL(v) begin(v), end(v)
#define RALL(v) rbegin(v), rend(v)

#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) for (int i = 0; i < (n); ++i)

#define debug(x) cerr << #x << ": " << x << endl;

template <typename T> T gcd(T m, T n) { return n == 0 ? m : gcd(n, m % n); }
template <typename T> T lcm(T m, T n) { return n * m / gcd(n, m); }

const int MOD = 1e9 + 7;

signed main(void) {
  int n, m;
  cin >> n >> m;

  vector<int> music(m);
  for (int i = 0; i < m; ++i)
    cin >> music[i];

  vector<int> cases(n + 1);
  for (int i = 0; i < n + 1; ++i)
    cases[i] = i;
  for (int i = 0; i < m; ++i) {
    auto it = find(cases.begin(), cases.end(), music[i]);
    if (it != cases.end())
      swap(cases[0], *(find(cases.begin(), cases.end(), music[i])));
  }

  for (auto it = cases.cbegin() + 1; it != cases.cend(); ++it) {
    cout << *it << endl;
  }
}
