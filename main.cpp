
#include "bits/stdc++.h"
using namespace std;

// #define int long long
struct Fast {Fast() {cin.tie(0); ios::sync_with_stdio(false);}} fast;

signed main(void) {
  bool flag = true;
  int num; // num
  num = 0; // count, result
  // num = numeric_limits<int>::min(); // max
  // num = numeric_limits<int>::max(); // min
  int N;
  // int M;
  // array<int, 10000> A;
  string yes = "Yes";
  string no = "No";
  // string S;
  // string T;

  cin >> N;
  
  for (int i = 0; i <= N / 4; ++i) {
    for (int j = 0; j <= N / 7; ++j) {
      if (4 * i + 7 * j == N) {
        cout << yes << endl;
        return 0;
      }
    }
  }

  cout << no << endl;
  
  // for (auto it = A.begin(); it < A.begin() + N; ++it)
  //   cin >> *it;

  // for (auto it = A.begin(); it < A.begin() + N; ++it)
  //   if (*it % 2 == 0) ++num;

  // cout << num << end;
  
  return 0;
}
