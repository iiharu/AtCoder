#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

signed main() {
  int n, m;
  cin >> n >> m;

  vector<bitset<10>> f(n, bitset<10>());

  for (int i = 0; i < m; ++i) {
    int a, b;
    cin >> a >> b;
    f[a - 1].set(b - 1);
    f[b - 1].set(a - 1);
  }

  for (int i = 0; i < n; ++i) {
    bitset<10> bs(0);
    for (int j = 0; j < n; ++j) {
      if (f[i].test(j)) { bs |= f[j]; }
    }
    bs.reset(i);
    for (int j = 0; j < n; ++j) {
      if (f[i].test(j)) bs.reset(j);
    }

    cout << bs.count() << endl;
  }

  return 0;
}
