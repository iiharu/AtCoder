#include "bits/stdc++.h"
using namespace std;

// #define int long long

signed main(void) {
  int num; // num
  // num = 0; // count, result
  // num = numeric_limits<int>::min(); // max
  num = numeric_limits<int>::max(); // min
  int n;
  string s;

  cin >> s;

  for(auto it = s.begin();it+2!=s.end();++it){
    int tmp = abs(100 * (*it - '0') + 10 * (*(it + 1) - '0') + (*(it + 2) - '0') - 753);
    num = min(tmp, num);
  }

  cout << num << endl;
  return 0;
}
