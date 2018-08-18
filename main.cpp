
#include "bits/stdc++.h"
using namespace std;

#define int long long

signed main(void) {
<<<<<<< HEAD
=======
  // bool flag = true;
>>>>>>> 13870cf5fb4b3b5caa36d6364227bfe51923967a
  int num; // num
  num = 0; // count, result
  // num = numeric_limits<int>::min(); // max
  // num = numeric_limits<int>::max(); // min
<<<<<<< HEAD
  // int N;
  // int M;
  // array<int, 10000> A;
  string S;
  // string T;

  int K;
  cin >> S;
  cin >> K;

  for (auto it = S.begin(); it < S.end(); ++it) {
    K -= pow(*it - '0', 5000000000000000);
    if (K <= 0) {
      cout << *it << endl;
      break;
    }
  }
=======
  int N;
  int M;
  array<int, 10000> A;
  // string S;
  // string T;

  cin >> N;
  for (auto it = A.begin(); it < A.begin() + N; ++it)
    cin >> *it;
  for (auto it = A.begin(); it < A.begin() + N; ++it)
    if (*it % 2 == 0) ++num;
  cout << num << endl;
>>>>>>> 13870cf5fb4b3b5caa36d6364227bfe51923967a
  
  return 0;
}
