#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;
  vector<int> b(n + 1, 0);
  for (int i = 1; i < n; ++i) {
    int a;
    cin >> a;
    b[a]++;
  }
  for (int i = 1; i <= n; ++i) { cout << b[i] << endl; }
}
