#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

constexpr int mod = 1e9 + 7;

struct mint {
  using ll = long long;
  ll x;
  mint(ll x = 0) : x((x % mod + mod) % mod) {}
  mint operator-() const { return mint(-x); }
  mint &operator+=(const mint a) {
    if ((x += a.x) >= mod) x -= mod;
    return *this;
  }
  mint &operator-=(const mint a) {
    if ((x += mod - a.x) >= mod) x -= mod;
    return *this;
  }
  mint &operator*=(const mint a) {
    (x *= a.x) %= mod;
    return *this;
  }
  mint operator+(const mint a) const {
    mint res(*this);
    return res += a;
  }
  mint operator-(const mint a) const {
    mint res(*this);
    return res -= a;
  }
  mint operator*(const mint a) const {
    mint res(*this);
    return res *= a;
  }
  mint pow(ll t) const {
    if (!t) return 1;
    mint a = pow(t >> 1);
    a *= a;
    if (t & 1) a *= *this;
    return a;
  }
  mint inv() const { return pow(mod - 2); }
  mint &operator/=(const mint a) { return (*this) *= a.inv(); }
  mint operator/(const mint a) const {
    mint res(*this);
    return res /= a;
  }
  friend std::ostream &operator<<(std::ostream &os, const mint &a) { return (os << a.x); }
};

constexpr int N = 2 * 100000;

int main() {
  int n, k;
  cin >> n >> k;

  mint num = 0;
  for (int i = k; i <= n + 1; ++i) { num += (mint)i * ((mint)n - (mint)i + 1) + 1; }
  cout << num << endl;

}
