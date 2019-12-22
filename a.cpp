
#include <bits/stdc++.h>

using namespace std;

#define int long long

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repi(i, a, b) for (int i = (int)(a); i < (int)(b); ++i)

template <typename T> T gcd(T m, T n) { return n == 0 ? m : gcd(n, m % n); }
template <typename T> T lcm(T m, T n) { return n * m / gcd(n, m); }
template <typename T> T fact(T n) { return (n == 0 ? 1 : n * fact(n - 1)); }
template <typename T> T modpow(T a, T e, T m) { return (e == (T)0 ? 1 : ((a % m) * modpow((a % m), e - 1, m)) % m); }

constexpr int MOD = 1e9 + 7;

signed main(void) {
  int a, b;
  cin >> a >> b;
  if (a == 1) {
    if (b == 2)
      cout << 3 << endl;
    else
      cout << 2 << endl;
  } else if (a == 2) {
    if (b == 1)
      cout << 3 << endl;
    else
      cout << 1 << endl;
  } else { // a== 3
    if (b == 1)
      cout << 2 << endl;
    else
      cout << 1 << endl;
  }
}
