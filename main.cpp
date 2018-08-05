
#include "bits/stdc++.h"
using namespace std;

// #define int long long
struct Fast {Fast() {cin.tie(0); ios::sync_with_stdio(false);}} fast;


signed main(void) {
  // int num; // num
  // num = 0; // count, result
  // num = numeric_limits<int>::min(); // max
  // num = numeric_limits<int>::max(); // min
  double num;
  num = numeric_limits<double>::min();
  int N;
  // int M;
  // array<int, 10000> A;
  array<pair<int, int>, 100> A;
  string S;
  // string T;
  
  cin >> N;

  for (auto it = A.begin(); it < A.begin() + N; ++it) {
    int x, y;
    cin >> x >> y;
    *it = make_pair(x, y);
  }

  for (auto it = A.begin(); it < A.begin() + N; ++it) {
    for (auto it1 = A.begin(); it1 < A.begin() + N; ++it1) {
      double dist = sqrt(pow(((*it).first - (*it1).first), 2) + pow(((*it).second - (*it1).second), 2));
      num = max(num, dist);
    }
  }

  cout << num << endl;
  return 0;
}
