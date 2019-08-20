
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

template <typename T> T gcd(T m, T n) { return n == 0 ? m : gcd(n, m % n); }
template <typename T> T lcm(T m, T n) { return n * m / gcd(n, m); }

signed main(void)
{
  int n; cin >> n;

  vector<pair<int, vector<int>>> v(n);
  for (int i = 0; i < n; ++i) {
    v[i] = make_pair(1, vector<int>());
    if (i != 0) {
      int b; cin >> b;
      v[b - 1].second.push_back(i);
    }
  }

  for (int i = n - 1; i >= 0; --i) {
    if (v[i].second.size() == 1) {
      v[i].first =  2 * v[v[i].second[0]].first + 1;
    } else if (v[i].second.size() > 1) {
      int m;
      int M;
      for (int j = 0; j < v[i].second.size(); ++j) {
        if (j == 0) {
          m = v[v[i].second[j]].first;
          M = v[v[i].second[j]].first;
        } else {
          m = min(m, v[v[i].second[j]].first);
          M = max(M, v[v[i].second[j]].first);
        }
      }
      
      v[i].first = M + m + 1;
    }
  }

  cout << v[0].first << endl;
  
}
