#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

signed main() {
  ll n, k;
  cin >> n >> k;

  double num = 1 + 3 * (n - 1) + 6 * (k - 1) * (n - k);
  num /= (n * n * n);
  cout << setprecision(20) << num << endl;
}
