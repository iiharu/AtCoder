#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

vector<int> b;
bool compare(const string &s, const string &t) {
  if (s.length() != t.length()) { return s.length() < t.length(); }

  if (s.front() == t.front()) {
    if (s.length() == 0)
      return true;
    else
      return compare(s.substr(1, s.length() - 1), t.substr(1, t.length() - 1));
  }

  return b[s.front() - (int)'0'] < b[t.front() - (int)'0'];
}

int main() {
  b = vector<int>(10);
  for (int i = 0; i < 10; ++i) {
    int in;
    cin >> in;
    b[in] = i;
  }

  int n;
  cin >> n;
  vector<string> a(n);
  for (auto &e : a) cin >> e;

  sort(a.begin(), a.end(), [](const auto &a, const auto &b) { return compare(a, b); });

  for (int i = 0; i < n; ++i) { cout << a[i] << endl; }
}
