#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

signed main() {
  int n;
  ll k;
  cin >> n >> k;
  vector<int> a(n);
  for (auto &e : a) cin >> e;

  int l = 0, r = 0;
  ll num = 0, s = 0;
  while (true) {
    while (r < n && s < k) {
      s += a[r];
      ++r;
    }

    if (s < k) break;
    num += n - r + 1;
    s -= a[l];
    ++l;
  }

  cout << num << endl;
  return 0;
}
