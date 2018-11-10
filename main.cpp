
#include "bits/stdc++.h"
using namespace std;

// #define int long long

signed main(void) {
  int num; // num
  num = 0; // count, result
  // num = numeric_limits<int>::min(); // max
  // num = numeric_limits<int>::max(); // min
  int N;
  int M;
  
  array<int, 100000> P;
  array<int, 100000> Y;
  array<vector<int>, 100001> YD;

  cin >> N >> M;

  for (int i = 0; i < M; i++) {
    cin >> P[i] >> Y[i];
    YD[P[i] - 1].push_back(Y[i]);
  }

  for (int i = 0; i < N; i++) {
    sort(YD[i].begin(), YD[i].end());
  }
  
  for (int i = 0; i < M; i++) {
    cout << setfill('0') << setw(6) << right << P[i]
         << setfill('0') << setw(6) << right << (lower_bound(YD[P[i] - 1].begin(), YD[P[i] - 1].end(), Y[i]) - YD[P[i] - 1].begin()) + 1 << endl;
  }
  
  return 0;
}
