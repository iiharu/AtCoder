#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
constexpr int mod = 1e9 + 7;

// clang-format off
struct mint {
  ll x; // typedef long long ll;
  mint(ll x = 0) : x((x % mod + mod) % mod) {}
  mint operator-() const { return mint(-x); }
  mint &operator+=(const mint a) { if ((x += a.x) >= mod) x -= mod; return *this; }
  mint &operator-=(const mint a) { if ((x += mod - a.x) >= mod) x -= mod; return *this; }
  mint &operator*=(const mint a) { (x *= a.x) %= mod; return *this; }
  mint operator+(const mint a) const { mint res(*this); return res += a; }
  mint operator-(const mint a) const { mint res(*this); return res -= a; }
  mint operator*(const mint a) const { mint res(*this); return res *= a; }
  mint pow(ll t) const {
    if (!t) return 1;
    mint a = pow(t >> 1);
    a *= a; if (t & 1) a *= *this;
    return a; }
  mint inv() const { return pow(mod - 2); }
  mint &operator/=(const mint a) { return (*this) *= a.inv(); }
  mint operator/(const mint a) const { mint res(*this); return res /= a; }
  friend ostream &operator<<(ostream &os, const mint &a) { os << a.x; return os; }
  friend istream &operator>>(istream &is, mint &a) { is >> a.x; return is; }
};
struct combination {
  vector<mint> fact, ifact;
  combination(int n) : fact(n + 1), ifact(n + 1) {
    assert(n < mod);
    fact[0] = 1;
    for (int i = 1; i <= n; ++i) fact[i] = fact[i - 1] * i;
    ifact[n] = fact[n].inv();
    for (int i = n; i >= 1; --i) ifact[i - 1] = ifact[i] * i;
  }
  mint operator()(int n, int k) { if (k < 0 || k > n) return 0; return fact[n] * ifact[k] * ifact[n - k]; }
};
// clang-format on

int top(int n) {
  while (n >= 10) { n /= 10; }
  return n;
}
int last(int n) { return (n % 10); }

int main() {
  int n;
  cin >> n;

  vector<vector<int>> c(10, vector<int>(10, 0));
  for (int k = 1; k <= n; ++k) {
    string s = to_string(k);
    int i = s.front() - '0';
    int j = s.back() - '0';
    c[i][j]++;
  }

  ll num = 0;
  for (int i = 0; i < 10; ++i) {
    for (int j = 0; j < 10; ++j) { num += c[i][j] * c[j][i]; }
  }

  cout << num << endl;
}
