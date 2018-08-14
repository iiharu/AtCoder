
#include "bits/stdc++.h"
using namespace std;

#define int long long
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
  // string yes = "Yes";
  // string no = "No";
  string S;
  // string T;

  S = "";
  
  cin >> N;

  while (N < 0 || 1 < N) {
    int Q, R;
    Q = N / -2;
    R = N - -2 * Q;

    if (R < 0) {
      Q += 1; R += 2;
    }

    if (R == 1) S = "1" + S;
    else S = "0" + S;

    N = Q;   
  }

  if (N == 1) S = "1" + S;
  else S = "0" + S;

  cout << S << endl;
  
  return 0;
}
