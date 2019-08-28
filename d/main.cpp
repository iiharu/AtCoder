
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
  int a, b; cin >> a >> b;
  queue<pair<int, int>> q;
  q.push(make_pair(0, a));

  num = -1;
  while(true) {

    auto e = q.front();
    q.pop();
    int m = e.first;
    int c = e.second;
    if (num != -1 && m > num) {
      break;
    }
    if (c == b) {
      num = m;
    }
    q.push(make_pair(m + 1, c - 1));
    q.push(make_pair(m + 1, c + 1));
    q.push(make_pair(m + 1, c - 5));
    q.push(make_pair(m + 1, c + 5));
    q.push(make_pair(m + 1, c - 10));
    q.push(make_pair(m + 1, c + 10));
  }

  cout << num << endl;
  
}

