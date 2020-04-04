#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (auto &e : a) cin >> e;
  cout << accumulate(a.begin(), a.end(), 0) << endl;
}
