
#include "bits/stdc++.h"
using namespace std;

#define int long long
struct Fast {Fast() {cin.tie(0); ios::sync_with_stdio(false);}} fast;

signed main(void) {
  int num; // num
  // num = 0; // count, result
  // num = numeric_limits<int>::min(); // max
  num = numeric_limits<int>::max(); // min
  int N;
  // int M;
  array<int, 4> A;
  // string S;
  // string T;

  cin >> N;
  for (int i = 0; i < N; ++i) cin >> A[i];

  for (int i = 0; i < pow(2, N); ++i) {
    int t1 = 0;
    int t2 = 0;

    bitset<4> bs(i);
    
    for (int j = 0; j < N; ++j) {
      if(bs.test(j)) t1 += A[j];
      else t2 += A[j];
    }

    num = min(num, max(t1, t2));
    
  }
  
  cout << num << endl;
  // cout << fixed << setprecision(10) << num << endl;
  return 0;
}
