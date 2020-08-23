// #include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
#include <utility>
#define int long long
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
// typedef long long ll;

signed main() {
  string s; cin >> s;

  vector<pair<char,int>> v;

  for (auto it = s.begin(); it != s.end(); ++it) {
    // !v.empty && v.last.first = *it
    if (!v.empty() && v.back().first == *it) {
      ++v.back().second;
    } else {
      v.push_back({*it, 1});
    }
  }

  for (auto it = v.begin(); it != v.end(); ++it) {
    cout << (*it).first << to_string((*it).second);
  }
  cout << endl;

}
