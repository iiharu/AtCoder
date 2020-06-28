#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

signed main() {
  int n;
  cin >> n;

  vector<int> a(n);
  for (auto &e : a) { cin >> e; }
  sort(a.begin(), a.end());

  int m = a[n - 1];
  int k = a[0];
  int d = abs(m - 2 * a[0]);
  for (int i = 1; i < n - 1; ++i) {
    int _d = abs(m - 2 * a[i]);
    if (d > _d) {
      d = _d;
      k = a[i];
    } else {
      break;
    }
  }

  cout << m << " " << k << endl;
}
