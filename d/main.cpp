
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <bitset>
#include <iostream>
#include <deque>
#include <functional>
#include <iterator>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <string>
#include <vector>

using namespace std;

#define int long long

#define ALL(v) begin(v), end(v)
#define RALL(v) rbegin(v), rend(v)

#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) for (int i = 0; i < (n); ++i)

#define debug(x) cerr << #x << ": " << x << endl;

const int MOD = 1e9 + 7;

signed main(void)
{
  int num;
  int n, m; cin >> n >> m;
  vector<vector<int>> v(m);
  for (int i = 0; i < n; ++i) {
    int a, b; cin >> a >> b;
    if (a <= m)
      v[a - 1].push_back(b);
  }

  num = 0;
  priority_queue<int> q;
  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < v[i].size(); ++j) {
      q.push(v[i][j]);
    }
    if (q.empty()) continue;
    num += q.top();
    q.pop();
  }
  cout << num << endl;
}
