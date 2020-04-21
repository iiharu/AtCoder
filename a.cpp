#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

#include <bits/stdc++.h>

static map<pair<ll, ll>, ll> mem;
ll combi(ll n, ll k) {
  if (n == k || k == 0) {
    return 1;
  } else {
    if (!mem.count({n, k})) { mem.insert({{n, k}, combi(n - 1, k - 1) + combi(n - 1, k)}); }
    return mem.at({n, k});
  }
}

int main() {
  int n, p;
  cin >> n >> p;
  vector<int> a(n);
  int c[2] = {0, 0};
  for (auto &e : a) {
    cin >> e;
    e %= 2;
    ++c[e];
  }

  ll num[2] = {0, 0};
  // even
  {
    for (int i = 0; i <= c[0]; ++i) { num[0] += combi(c[0], i); }
  }
  // odd
  {
    for (int i = p; i <= c[1]; i += 2) { num[1] += combi(c[1], i); }
  }

  cout << num[0] * num[1] << endl;
}
