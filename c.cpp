
#include <bits/stdc++.h>

using namespace std;

#define int long long

template <typename T> T gcd(T m, T n) { return n == 0 ? m : gcd(n, m % n); }
template <typename T> T lcm(T m, T n) { return n * m / gcd(n, m); }
template <typename T> T fact(T n) { return (n == 0 ? 1 : n * fact(n - 1)); }
template <typename T> T modpow(T a, T e, T m) { return (e == (T)0 ? 1 : ((a % m) * modpow((a % m), e - 1, m)) % m); }

constexpr int MOD = 1e9 + 7;

signed main(void) {
  int n, m;
  cin >> n >> m;
  vector<int> acd(n, 0);
  vector<int> p(n, 0);
  for (int i = 0; i < m; ++i) {
    int j;
    cin >> j;
    string res;
    cin >> res;
    if (res == "AC") {
      acd[j - 1] = 1;
    } else {
      if (!acd[j - 1]) { p[j - 1]++; }
    }
  }

  int pn = 0;
  for (int i = 0; i < n; ++i) {
    if (acd[i]) { pn += p[i]; }
  }

  // cout << accumulate(acd.begin(), acd.end(), 0) << " " << accumulate(p.begin(), p.end(), 0) << endl;
  cout << accumulate(acd.begin(), acd.end(), 0) << " " << pn << endl;
}
