
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
#include <string>
#include <vector>
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
  map<string, int> mem;

  int n; cin >> n;
  for (int i = 0; i < n; ++i) {
    string s; cin >> s;
    ++mem[s];
  }
  int m; cin >> m;
  for (int i = 0; i < m; ++i) {
    string t; cin >> t;
    --mem[t];
  }

  // num = (*(mem.cbegin())).second;
  num = 0;
  for (auto it = mem.cbegin(); it != mem.cend(); ++it) {
    num = max(num,(*it).second);
  }

  cout << num << endl;
  
}
