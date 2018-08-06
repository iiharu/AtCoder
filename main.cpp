
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
  array<int, 10000> A;
  string S;
  // string T;

  cin >> S;

  if (S.length() == 1) {
    cout << S << endl;
    return 0;
  }
  
  for (int i = 0; i < pow(2, S.length() - 1); ++i) {
    int res = 0;
    int tmp = 0;
    bitset<9> bs(i);

    for (int j = 0; j < S.length() - 1; ++j) {
      if (j == 0) {
        tmp = S[0] - '0';
      }
      if(bs[j] == 1) {
        res += tmp;
        tmp = 0;
      } else {
        tmp *= 10;
      }
      tmp += S[j + 1] - '0';
      if (j == S.length() - 2) {
        res += tmp;
      }
    }

    num += res;
  }
  
  cout << num << endl;
  // cout << fixed << setprecision(10) << num << endl;
  return 0;
}
