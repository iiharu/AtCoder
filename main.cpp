
#include "bits/stdc++.h"
// #define rep(i, n) for(int i = 0; i < (int)(n); i++)
// #define all(a) (a).begin(),(a).end()
// #define UNIQUE(v) v.erase(unique(v.begin(), v.end()), v.end());
// int gcd(int a, int b){return b ? gcd(b, a%b) : a;}

#define int long long
#define SIZE 100000

using namespace std;

signed main(void) {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int num; // num
  num = 0; // count, result
  // num = numeric_limits<int>::min(); // max
  // num = numeric_limits<int>::max(); // min
  int n; cin >> n;
  int m; cin >> m;

  vector<int> point(m);
  for (auto it = point.begin(); it < point.end(); ++it) cin >> *it;

  if (n >= m) {
    num = 0;
  } else {

    sort(point.begin(), point.end());

    vector<int> diff(m - 1);
    for (int i = 0; i < m - 1; ++i) diff[i] = abs(point[i+1] - point[i]);

    sort(diff.begin(), diff.end());

    for (int i = 0; i < m - 1 - (n - 1); ++i) num += diff[i];
  }
  
  // array<int, 1000000> a;
  // for (auto it = a.begin(); it < a.begin() + n; ++it) cin >> *it;
  // for (auto it = a.begin(); it < a.begin() + n; ++it) num += *it;

  cout << num << endl;
  return 0;
}
