
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

// void add(int n, vector<pair<int, vector<int>>> &t) {
//   for (int i = 0; i < t[n].second.size(); ++i) {
//     int m = t[n].second[i];
//     t[m].first += t[n].first;
//     add(m, t);
//   }
// }

void add(int n, vector<tuple<int, int, vector<int>>> &t) {
  if (get<1>(t[n]) == 1) return;
  get<1>(t[n]) = 1;
  for (int i = 0; i < get<2>(t[n]).size(); ++i) {
    int m = get<2>(t[n])[i];
    if (get<1>(t[m]) == 1) continue;
    get<0>(t[m]) += get<0>(t[n]);
    add(m, t);
  }
}

signed main(void)
{
  int n; cin >> n;
  int q; cin >> q;

  // vector<pair<int, vector<int>>> t(n);
  vector<tuple<int, int, vector<int>>> t(n);
  for (int i = 0; i < n; ++i) {
    // t[i] = make_pair(0, vector<int>());
    t[i] = make_tuple(0, -1 ,vector<int>());
  }
  for (int i = 0; i < n - 1; ++i) {
    int a, b; cin >> a >> b;
    get<2>(t[a - 1]).push_back(b - 1);
    get<2>(t[b - 1]).push_back(a - 1);
    // t[a - 1].second.push_back(b - 1);
    // t[b - 1].second.push_back(a - 1);
  }
  // cout << "input" << endl;

  for (int i = 0; i < q; ++i) {
    int p, x; cin >> p >> x;
    get<0>(t[p - 1]) += x;
    // t[p - 1].first += x;
  }

  add(0, t);

  for (int i = 0; i < n; ++i) {
    cout << get<0>(t[i]);
    // cout << t[i].first;
    if (i != n - 1) cout << " ";
    else cout << endl;
  }

  
}

