
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
  bool flag = true;
  string s; cin >> s;
  vector<int> a('Z' - 'A' + 1, 0);
  for (int i = 0; i < 4; ++i) a[s[i] - 'A']++;

  for (int i = 0; i < 26; ++i) {
    if (a[i] != 2 && a[i] != 0) flag = false;
  }
  cout << (flag ? "Yes" : "No") << endl;
}
