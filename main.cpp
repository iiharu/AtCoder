
#include "bits/stdc++.h"
using namespace std;

#define int long long
struct Fast {Fast() {cin.tie(0); ios::sync_with_stdio(false);}} fast;

signed main(void) {
  int num; // num
  num = 0; // count, result
  // num = numeric_limits<int>::min(); // max
  // num = numeric_limits<int>::max(); // min
  // int N;
  // int M;
  array<int, 4> A;
  string S;
  // string T;

  cin >> S;

  for (int i = 0; i < 4; ++i) {
    A[i] = (int)(S[i] - '0');
  }

  for (int i = 0; i < pow(2, 3); ++i) {
    int tmp = A[0];
    bitset<3> bs(i);

    for (int j = 0; j < 3; j++) {
      if (bs.test(j)) tmp += A[j + 1];
      else tmp -= A[j + 1];
    }

    if (tmp == 7) {
      cout << A[0];
      for (int j = 0; j < 3; j++) {
        if (bs.test(j)) cout << "+";
        else cout << "-";
        cout << A[j + 1];
      }
      cout << "=7" << endl;
      return 0;
    }
    
  }
  
  // cout << num << endl;
  // cout << fixed << setprecision(10) << num << endl;
  return 0;
}
