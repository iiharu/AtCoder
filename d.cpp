
#include "bits/stdc++.h"

using namespace std;

#define int long long
#define double long double

#define ALL(v) begin(v), end(v)
#define RALL(v) rbegin(v), rend(v)

#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) for (int i = 0; i < (n); ++i)

#define debug(x) cerr << #x << ": " << x << endl;

const int MOD = 1e9 + 7;

template <typename T> T gcd(T m, T n) { return n == 0 ? m : gcd(n, m % n); }
template <typename T> T lcm(T m, T n) { return n * m / gcd(n, m); }

signed main(void) {
  //  double a, b, x;
  int a, b, x;
  cin >> a >> b >> x;
  //  cin >> a >> b >> x;
  cout << setprecision(10);
  if (a * a * b == x) {
    cout << 0 << endl;
  } else {
    if (a * a * b / 2. > x) {
      double val = 2. * x / (a * b * b);
      double rad = atan(val);
      double r = (M_PI / 2. - rad) * 180. / M_PI;
      cout << r << endl;
    } else {
      double val = (2. * a * a * b - 2. * x) / (a * a * a);
      double rad = atan(val);
      double r = rad * 180. / M_PI;
      cout << r << endl;
    }
  }
}
