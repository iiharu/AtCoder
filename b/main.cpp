
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

// #define int long long

#define ALL(v) begin(v), end(v)
#define RALL(v) rbegin(v), rend(v)

#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) for (int i = 0; i < (n); ++i)

#define debug(x) cerr << #x << ": " << x << endl;

const int MOD = 1e9 + 7;

signed main(void)
{
  string s; cin >> s;
  vector<bool> v(s.length(), false);

  for (int i = 0; i < s.length(); ++i) {
        if ((i % 2 == 0 && s[i] == 'R')
            || (i % 2 == 1 && s[i] == 'L')
            || s[i] == 'U'
            || s[i] == 'D')
          v[i] = true;
  }

  bool flag = accumulate(v.begin(), v.end(),true, [](bool acc, bool i) { return acc & i;});
  if (flag) cout << "Yes";
  else cout << "No";
  cout << endl;
}
