#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

signed main() {
  ll num = 0;
  ll n, m;
  cin >> n >> m;

  if (n == m) {
    if (n == 1) num = 1;
    else if (n == 2) num = 0;
  } else if (n == 1 || m == 1) {
    num = max(n, m) - 2;
  } else {
    num = max((ll)0, (n - 2) * (m - 2));
  }

  if (n == m && n == 1) num = 1;
  else if (n == m && n == 2) num = 0;
  // else if (n == m && n >= 3) num = (n - 2) * (m - 2);
  else if (n == 1 || m == 1) num = max(n, m) - 2;
  else num = (n - 2) * (m - 2);

  cout << num << endl;
}
