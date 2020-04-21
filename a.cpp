#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

#include <bits/stdc++.h>

int main() {
  int n, p;
  cin >> n >> p;
  bool flag = false;
  for (int i = 0; i < n; ++i) {
    int a;
    cin >> a;
    flag |= (a % 2 == 1);
  }

  if (flag) {
    cout << static_cast<ll>(pow(2, n - 1)) << endl;
  } else {
    if (p == 0)
      cout << static_cast<ll>(pow(2, n)) << endl;
    else
      cout << 0 << endl;
  }
}
