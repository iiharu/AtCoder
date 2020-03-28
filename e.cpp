#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
constexpr int mod = 1e9 + 7;

struct mint {
  ll x; // typedef long long ll;
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
  friend ostream &operator<<(ostream &os, const mint &a) { return (os << a.x); }
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
  mint operator()(int n, int k) {
    if (k < 0 || k > n) return 0;
    return fact[n] * ifact[k] * ifact[n - k];
  }
};

int main() {

  int x, y, a, b, c;
  cin >> x >> y >> a >> b >> c;
  priority_queue<int> p;
  priority_queue<int> q;
  priority_queue<int> r;
  for (int i = 0; i < a; ++i) {
    int in;
    cin >> in;
    p.push(in);
  }
  for (int i = 0; i < b; ++i) {
    int in;
    cin >> in;
    q.push(in);
  }
  for (int i = 0; i < c; ++i) {
    int in;
    cin >> in;
    r.push(in);
  }

  ll num = 0;
  int na = 0;
  int nb = 0;
  int nc = 0;

  while (na + nb + nc < x + y) {
    int M = 0;
    if (p.size() > 0 && na < x) M = max(M, p.top());
    if (q.size() > 0 && nb < y) M = max(M, q.top());
    if (r.size() > 0) M = max(M, r.top());

    if (p.size() > 0 && na < x && M == p.top()) {
      num += p.top();
      p.pop();
      na++;
      continue;
    }
    if (q.size() > 0 && nb < y && M == q.top()) {
      num += q.top();
      q.pop();
      nb++;
      continue;
    }
    if (r.size() > 0 && M == r.top()) {
      num += r.top();
      r.pop();
      nc++;
      continue;
    }
  }
  cout << num << endl;
}
