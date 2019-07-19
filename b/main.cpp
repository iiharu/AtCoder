
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

using namespace std;

#define int long long

#define ALL(v) begin(v), end(v)
#define RALL(v) rbegin(v), rend(v)

#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) for (int i = 0; i < (n); ++i)

#define debug(x) cerr << #x << ": " << x << endl;

const int MOD = 1e9 + 7;

bool isSquare(int n) {
  for (int i = 0; i <= sqrt(n); ++i) {
    if (i * i == n) return true;
  }
  return false;
}

signed main(void)
{

  int num = 0;

  int n; cin >> n;
  int d; cin >> d;

  vector<vector<int>> x(n);
  for (int i = 0; i < n; ++i) {
    x[i] = vector<int>(d);
    for (int j = 0; j < d; ++j) {
      cin >> x[i][j];
    }
  }

  for (int i = 0; i < n; ++i) {
    for (int j = i + 1; j < n; ++j) {
      int dist = 0;
      for (int k = 0; k < d; ++k) {
        dist += (x[i][k] - x[j][k]) * (x[i][k] - x[j][k]);
      }
      if (isSquare(dist)) ++num;
    }
  }

  cout << num << endl;
}
