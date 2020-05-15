#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

#include <bits/stdc++.h>

int main() {
  int n, m; cin >> n >> m;
  vector<int> a(m);
  vector<int> b(n + 1, false);
  for (auto & e : a) cin >> e;
  
  for (auto it = a.rbegin(); it != a.rend(); ++it) {
    if (!b[*it]) {
      cout << *it << endl;
      b[*it] = true;
    }
  }
  for (int i = 1; i <= n; ++i) {
    if (!b[i]) cout << i << endl;
  }
}
