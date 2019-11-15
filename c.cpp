
#include <bits/stdc++.h>

using namespace std;

#define int long long

template <typename T> T gcd(T m, T n) { return n == 0 ? m : gcd(n, m % n); }
template <typename T> T lcm(T m, T n) { return n * m / gcd(n, m); }
template <typename T> T fact(T n) { return (n == 0 ? 1 : n * fact(n - 1)); }
template <typename T> T modpow(T a, T e, T m) { return (e == (T)0 ? 1 : ((a % m) * modpow((a % m), e - 1, m)) % m); }

constexpr int MOD = 1e9 + 7;

signed main(void) {
  vector<int> a(5);
  for (auto &e : a) cin >> e;

  vector<int> m;
  for (int i = 0; i < pow(2, 5); ++i) {
    bitset<5> bs(i);

    if (bs.count() == 3) {
      int b = 0;
      for (int j = 0; j < 5; ++j) {
        if (bs.test(j)) b += a[j];
      }
      m.push_back(b);
    }
  }

  sort(m.begin(), m.end(), greater<int>());

  cout << m[2] << endl;
}