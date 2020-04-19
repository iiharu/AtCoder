#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;
  vector<int> x(n);
  vector<int> l(n);
  for (int i = 0; i < n; ++i) {
    cin >> x[i];
    l[i] = i;
  }

  sort(l.begin(), l.end(), [&x](const auto &a, const auto &b) { return x[a] < x[b]; });
  // for (int i = 0; i < n; ++i) { cout << x[l[i]] << endl; }

  for (int i = 0; i < n; ++i) {
    if (x[i] <= x[l[n / 2 - 1]]) {
      cout << x[l[n / 2]] << endl;
    } else {
      cout << x[l[n / 2 - 1]] << endl;
    }
  }
}
