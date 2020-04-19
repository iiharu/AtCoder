#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
  int n, m;
  cin >> n >> m;
  for (int i = 0; i < m; ++i) {
    int a;
    cin >> a;
    n -= a;
  }

  cout << max(n, -1) << endl;
}
