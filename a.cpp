
#include "bits/stdc++.h"

using namespace std;

#define int long long

#define ALL(v) begin(v), end(v)
#define RALL(v) rbegin(v), rend(v)

#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) for (int i = 0; i < (n); ++i)

#define debug(x) cerr << #x << ": " << x << endl;

const int MOD = 1e9 + 7;

template <typename T> T gcd(T m, T n) { return n == 0 ? m : gcd(n, m % n); }
template <typename T> T lcm(T m, T n) { return n * m / gcd(n, m); }

signed main(void) {
  bool flag = true;
  int n;
  cin >> n;

  if (n != 1) {

    for (int i = 2; i <= sqrt(n); ++i) {
      if (n % i == 0) {
        flag = false;
        break;
      }
    }

    if (!flag) {
      string s = to_string(n);

      switch (s[s.length() - 1]) {
      case '0':
      case '2':
      case '4':
      case '5':
      case '6':
      case '8':
        flag = false;
        break;
      default:
        flag = true;
        break;
      }

      if (flag) {
        if (n % 3 == 0) {
          flag = false;
        }
      }
    }
  } else {
    flag = false;
  }

  if (flag)
    cout << "Prime" << endl;
  else
    cout << "Not Prime" << endl;
}
