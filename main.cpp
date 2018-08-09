
#include "bits/stdc++.h"
using namespace std;

// #define int long long
struct Fast {Fast() {cin.tie(0); ios::sync_with_stdio(false);}} fast;

signed main(void) {
  int num; // num
  // num = 0; // count, result
  num = numeric_limits<int>::min(); // max
  // num = numeric_limits<int>::max(); // min
  int N;
  int M;
  // array<int, 10000> A;
  // string S;
  // string T;

  array<int, 100> X;
  array<int, 100> Y;
  vector<pair<int, int>> R;

  cin >> N >> M;
  for (int i = 0; i < M; ++i) {
    cin >> X[i] >> Y[i];
    R.push_back(make_pair(X[i] - 1, Y[i] - 1));
  }

  num = 1;

  for (int b = 0; b < pow(2, N); ++b) {
    bitset<12> bs(b);

    bool canFaction = true;
    
    for (int i = 0; i < N; ++i) {
      if(bs.test(i)) {
        for (int j = i + 1; j < N; ++j) {
          if(bs.test(j)) {
            if (R.end() == find(R.begin(), R.end(), make_pair(i, j))) {
              canFaction = false;
              break;
            } 
          }
        }
      }
      
      if (!canFaction) 
        break;
    }

    if (canFaction) 
      num = max(num, (int)bs.count());

  }
  
  cout << num << endl;
  // cout << fixed << setprecision(10) << num << endl;
  return 0;
}
