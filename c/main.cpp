
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
  priority_queue<double, vector<double>, greater<double>> q;
  for (int i = 0; i < n; ++i) {
    double v; cin >> v;
    q.push(v);
  }

  for (int i = 1; i < n; ++i) {
    double x = q.top(); q.pop();
    double y = q.top(); q.pop();
    double z = (x + y) / 2.;
    q.push(z);
  }
  cout << q.top() << endl;
}
