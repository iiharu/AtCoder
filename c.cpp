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

vector<vector<int>> ship;
vector<bool> visited;

bool dfs(int s, int d, int c) {
  if (s == d) return true;

  if (visited[s]) return false;

  if (c >= 2) return false;

  visited[s] = true;

  vector<int> _ship = ship[s];

  for (auto it = _ship.cbegin(); it != _ship.cend(); ++it) {
    if (dfs(*it, d, c + 1)) return true;
  }

  return false;
}

int main() {
  int n, m;
  cin >> n >> m;
  ship = vector<vector<int>>(n + 1);
  visited = vector<bool>(n + 1, false);

  for (int i = 0; i < m; ++i) {
    int a, b;
    cin >> a >> b;

    ship[a].push_back(b);
    ship[b].push_back(a);
  }

  if (dfs(1, n, 0))
    cout << "POSSIBLE" << endl;
  else
    cout << "IMPOSSIBLE" << endl;
}
