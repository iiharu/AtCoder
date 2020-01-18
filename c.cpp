
#include <bits/stdc++.h>

using namespace std;

#define int long long

template <typename T> T gcd(T m, T n) { return n == 0 ? m : gcd(n, m % n); }
template <typename T> T lcm(T m, T n) { return n * m / gcd(n, m); }
template <typename T> T fact(T n) { return (n == 0 ? 1 : n * fact(n - 1)); }
template <typename T> T modpow(T a, T e, T m) { return (e == (T)0 ? 1 : ((a % m) * modpow((a % m), e - 1, m)) % m); }

constexpr int MOD = 1e9 + 7;

signed main(void) {
  int n, k, s;
  cin >> n >> k >> s;

  vector<int> a(n);

  for (int i = 0; i < n; ++i) {
    if (i < k) {
      a[i] = s;
    } else {
      if (s == 1e9)
        a[i] = s - 1;
      else
        a[i] = s + 1;
    }
  }

  for (int i = 0; i < n; ++i) {
    cout << a[i];
    if (i != n - 1)
      cout << " ";
    else
      cout << endl;
  }
}
