#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

signed main() {
  int n;
  cin >> n;
  int k;
  cin >> k;
  vector<int> a(n);
  for (auto &e : a) cin >> e;
  ll num = 0;
  ll tmp = 0;
  queue<int> q;
  for (int i = 0; i < n; ++i) {
    q.push(a[i]);
    tmp += a[i];
    if (q.size() == k) {
      num += tmp;
      tmp -= q.front();
      q.pop();
    }
  }
  cout << num << endl;
  return 0;
}
