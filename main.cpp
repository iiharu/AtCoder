
#include "bits/stdc++.h"
using namespace std;

#define int long long
struct Fast {Fast() {cin.tie(0); ios::sync_with_stdio(false);}} fast;

signed main(void) {
  int num; // num
  // num = 0; // count, result
  // num = numeric_limits<int>::min(); // max
  num = numeric_limits<int>::max(); // min
  // int N;
  // int M;
  // array<int, 10000> A;
  // string S;
  // string T;

  int D, G;
  array<int, 10> P;
  array<int, 10> C;

  cin >> D >> G;
  for (int i = 0; i < D; ++i) {
    cin >> P[i] >> C[i];
  }

  for (int i = 0; i < pow(2, D); ++i) {
    int score = 0;
    int tmp = 0;
    bitset<10> bs(i);
    
    for (int j = 0; j < D; ++j) {

      if (bs.test(j)) {
        tmp += P[j];
        score += P[j] * (j + 1) * 100 + C[j];
      }

      if (score >= G) {
        num = min(num, tmp);
        break;
      };
    }

    for (int j = D - 1; 0 <= j; --j) {

      if (score >= G) {
        num = min(num, tmp);
        break;
      }

      if(bs[j] == 0) {
        int k = 0;
        while (k < P[j] && score < G) {
          score+= (j + 1) * 100;
          tmp += 1;
          k += 1;
        }
      }
    }
    // cout << bs << endl;
    // cout << score << endl;
    num = min(num, tmp);

  }
  
  cout << num << endl;
  // cout << fixed << setprecision(10) << num << endl;
  return 0;
}
