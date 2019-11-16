
#include <bits/stdc++.h>

using namespace std;

#define int long long

template <typename T> T gcd(T m, T n) { return n == 0 ? m : gcd(n, m % n); }
template <typename T> T lcm(T m, T n) { return n * m / gcd(n, m); }
template <typename T> T fact(T n) { return (n == 0 ? 1 : n * fact(n - 1)); }
template <typename T> T modpow(T a, T e, T m) { return (e == (T)0 ? 1 : ((a % m) * modpow((a % m), e - 1, m)) % m); }

constexpr int MOD = 1e9 + 7;

signed main(void) {
  int n;
  cin >> n;

  vector<pair<int, int>> p(n);
  for (int i = 0; i < n; ++i) {
    int x, y;
    cin >> x >> y;
    p[i] = make_pair(x, y);
  }

  sort(p.begin(), p.end());

  double dist = 0;
  do {
    for (int i = 1; i < n; ++i) {
      double d = (p[i - 1].first - p[i].first) * (p[i - 1].first - p[i].first) +
                 (p[i - 1].second - p[i].second) * (p[i - 1].second - p[i].second);
      dist += sqrt(d);
    }
  } while (next_permutation(p.begin(), p.end()));

  dist /= (double)(fact(n));

  cout << setprecision(10) << dist << endl;
}