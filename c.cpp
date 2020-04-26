#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

signed main() {
  int n;
  cin >> n;

  vector<int> a(n);
  for (auto &e : a) cin >> e;

  ll num = 0;
  for (int l = 0, r = 0; l < n && r < n; ++l) {
    while (r < n - 1 && a[r] < a[r + 1]) { ++r; }
    //    cout << l << ", " << r << " " << r - l << endl;
    num += r - l + 1;
    if (r == l) ++r;
  }

  cout << num << endl;
}
