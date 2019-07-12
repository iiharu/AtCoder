
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

  string s;
  string t;
  cin >> s;
  cin >> t;
  int n = s.length();
  int m = t.length();

  vector<string> v;
  for (int i = 0; i < n - m + 1; ++i) {
    bool flag = true;
    string _s = s;

    for (int j = i; j < i + m; ++j) {
      if (s[j] != t[j - i]) {
        if (s[j] == '?') _s[j] = t[j - i];
        else flag = false;
      }
      if (!flag) break;
    }
    
    if (flag) {
      for (auto it = _s.begin(); it != _s.end(); ++it) {
        if (*it == '?') *it = 'a';
      }
      v.push_back(_s);
    }
    
  }

  if (v.size() == 0) {
    cout << "UNRESTORABLE" << endl;
  } else {
    sort(ALL(v));
    cout << v[0] << endl;
  }
}
