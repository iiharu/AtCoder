
#include "bits/stdc++.h"

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
  bool flag;

  int n;
  cin >> n;

  // priority_queue<pair<int, int>> q;
  auto compare = [](pair<int, int> l, pair<int, int> r) { return l.second >= r.second; };
  priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(compare)> q(compare);

  for (int i = 0; i < n; ++i)
  {
    int a, b;
    cin >> a >> b;
    // q.emplace(b, a);
    q.emplace(a, b);
  }

  flag = true;
  num = 0;
  while (!q.empty())
  {
    pair<int, int> p = q.top();
    q.pop();
    int a = p.first;
    int b = p.second;

    num += a;
    if (num > b)
      flag = false;
    if (!flag)
      break;
  }
  if (flag)
    cout << "Yes";
  else
    cout << "No";
  cout << endl;
}
