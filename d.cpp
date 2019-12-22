
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
  vector<int> a(n);

  bool flag = false;
  for (int i = 0; i < n; ++i) {
    int a_i;
    cin >> a_i;
    if (a_i == 1) flag = true;
    a[i] = a_i;
  }

  int i = 1;
  int offset = 0;
  while (i - 1 + offset < n) {
    if (a[i - 1 + offset] == i) {
      i++;
      continue;
    } else {
      offset++;
    }
  }

  if (flag) {
    cout << offset << endl;
  } else
    cout << -1 << endl;
}
