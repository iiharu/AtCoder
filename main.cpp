
#include "bits/stdc++.h"
using namespace std;

// #define int long long
struct Fast { Fast(){ std::cin.tie(0); std::cout.tie(0); ios::sync_with_stdio(false); }} fast;

#define ALL(v) begin(v), end(v)
#define RALL(v) rbegin(v), rend(v)

#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) for (int i = 0; i < (n); ++i)

#define debug(x) cerr << #x << ": " << x << endl;

const int MOD = 1e9 + 7;

int h, w;
vector<vector<int>> g;

vector<vector<vector<int>>> m;

int f(int y, int x, int dy, int dx) {
  int val;

  int d = 0;
  if (dx == 1 && dy == 0) d = 1;
  if (dx == 0 && dy == -1 ) d = 2;
  if (dx == -1 && dy == 0) d = 3;

  if (m[y][x][d] != -1) {
    return m[y][x][d];
  } else {
    if (y + dy < 0 || y + dy >= h || x + dx < 0 || x + dx >= w) 
      val = 0;
    else if (g[y + dy][x + dx] != 0) val = 0;
    else val = 1 + f(y + dy, x + dx, dy, dx);
    m[y][x][d] = val;
  }
  return val;

}

signed main(void) {

  int num;
  cin >> h >> w;
  g = vector<vector<int>>(h);
  for (auto it = g.begin(); it != g.end(); ++it) {
    string s; cin >> s;
    (*it) = vector<int>(w, 0);
    for (int i = 0; i < w; ++i) {
      if (s[i] == '#') (*it)[i] = 1;
    }
  }

  m = vector<vector<vector<int>>>(h);
  for (auto y = m.begin(); y != m.end(); ++y) {
    *y = vector<vector<int>>(w);
    for (auto x = (*y).begin(); x != (*y).end(); ++x) {
      *x = vector<int>(4, -1);
    }
  }
  
  num = 0;
  for (int y = 0; y < h; ++y) {
    for (int x = 0; x < w; ++x) {
      if (g[y][x] != 0) continue;

      int tmp = 1;
      tmp += f(y, x, -1 , 0);
      tmp += f(y, x, 0, -1);
      tmp += f(y, x, 0 , 1);
      tmp += f(y, x, 1, 0);

      // cout << x << ", " << y << ": " << tmp << endl;
      num = max(num, tmp);
      
    }
  }

  cout << num << endl;
  
}
