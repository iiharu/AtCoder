#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;
  vector<int> x(n);
  for (int i = 0; i < n; ++i) cin >> x[i];

  vector<int> b = x;
  sort(b.begin(), b.end());

  for (int i = 0; i < n; ++i) {
    if (x[i] < b[n / 2 - 1]) {
      cout // << "1 "
          << b[n / 2];
    } else if (x[i] == b[n / 2 - 1]) {
      cout // << "2 "
          << b[n / 2];
    } else if (x[i] > b[n / 2 - 1] && x[i] < b[n / 2]) {
      cout // << "3 "
          << b[n / 2];
    } else if (x[i] == b[n / 2]) {
      cout // << "4 "
          << b[n / 2 - 1];
    } else if (x[i] > b[n / 2]) {
      cout // << "5 "
          << b[n / 2 - 1];
    }
    cout << endl;
  }
}
