
#include <bits/stdc++.h>

using namespace std;

#define int long long

template <typename T> T gcd(T m, T n) { return n == 0 ? m : gcd(n, m % n); }
template <typename T> T lcm(T m, T n) { return n * m / gcd(n, m); }
template <typename T> T fact(T n) { return (n == 0 ? 1 : n * fact(n - 1)); }
template <typename T> T modpow(T a, T e, T m) { return (e == (T)0 ? 1 : ((a % m) * modpow((a % m), e - 1, m)) % m); }

constexpr int MOD = 1e9 + 7;

signed main(void) {
  int num;
  int n;
  cin >> n;

  map<int, int> mem;
  for (int i = 0; i < n; ++i) {
    int a; cin >> a;
    if (a < 3200)
      mem[a / 400]++;
    else
      mem[8]++;
  }

  num = 0;
  for (int j = 0; j < 8; ++j) {
    if (mem[j] > 0) ++num;
  }

  int m = num;
  int M = num;
  if (mem[8] > 0) {
    if (m == 0) ++m;
    M += mem[8];
    num = min(M, (int)8);
  }

  cout << m << " " << M << endl;

}