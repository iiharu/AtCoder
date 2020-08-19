// #include <bits/stdc++.h>
#include <iostream>
#include <map>
#include <vector>

#define int long long
#define rep(i, n) for (int i = 0; i < (n); ++i)

using namespace std;
// using P = pair<int, int>;

signed main() {
  int n; cin >> n;
  // vector<int> a(n);
  map<int, int> mem;
  for (int i = 0; i < n; ++i) {
    int a; cin >> a;
    mem[a]++;
  }

  int num = 0;
  for (const auto& [key, value] : mem) {
    if (key != value) {
      if (value > key) num += value - key;
      else num += value;
    }
  }

  cout << num << endl;

  return 0;
}
