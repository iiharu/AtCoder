#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
  ll a, b, k;
  cin >> a >> b >> k;

  if (a >= k) {
    a -= k;
    k = 0;
  } else {
    k -= a;
    a = 0;
  }
  if (b >= k) {
    b -= k;
    k = 0;
  } else {
    k -= b;
    b = 0;
  }
  cout << a << " " << b << endl;
}
