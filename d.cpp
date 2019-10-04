
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

template <typename T>
T gcd(T m, T n) { return n == 0 ? m : gcd(n, m % n); }
template <typename T>
T lcm(T m, T n) { return n * m / gcd(n, m); }

signed main(void)
{
  int num;
  int n, m;
  cin >> n >> m;

  priority_queue<int> q;
  for (int i = 0; i < n; ++i)
  {
    int a;
    cin >> a;
    q.push(a);
  }

  while (m > 0)
  {
    int a = q.top();
    q.pop();
    a /= 2;
    q.push(a);
    --m;
  }

  // while (!q.empty())
  // {
  //   cout << q.top() << endl;
  //   q.pop();
  // }
  num = 0;
  while (!q.empty())
  {
    num += q.top();
    q.pop();
  }
  cout << num << endl;
}
