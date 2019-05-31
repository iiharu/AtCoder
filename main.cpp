
#include "bits/stdc++.h"

#define int long long

using namespace std;

signed main(void) {

  int ans = 0;

  int n; cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; ++i) cin >> a[i];

  vector<int> b(n);
  for (int i = 0; i < n; ++i) {
    if (i == 0) b[i] = a[i];
    else b[i] = b[i - 1] + a[i];
  }
  vector<int> c(n);
  for (int i = n - 1; i >= 0; --i) {
    if (i == n - 1) c[i] = a[i];
    else c[i] = c[i + 1] + a[i];
  }

  for (int i = 0; i < n - 1; ++i) {
    int tmp = abs(b[i] - c[i + 1]);
    if (i == 0) ans = tmp;
    else ans = min(ans, tmp);
  }
  
  cout << ans << endl;
  
  return 0;
}
