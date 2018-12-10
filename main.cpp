#include "bits/stdc++.h"
using namespace std;

// #define int long long

signed main(void)
{
  int num; // num
  // num = 0; // count, result
  // num = numeric_limits<int>::min(); // max
  num = numeric_limits<int>::max(); // min
  int n;
  int k;
  array<int, 100000> a;

  cin>> n >> k;
  for(auto it = a.begin(); it < a.begin() + n; ++it){
    cin >> *it;
  }

  sort(a.begin(),a.begin() + n,greater<int>());

  for(auto it = a.begin(); it + k - 1< a.begin() + n; ++it)
    num = min(num, *it - *(it + k - 1));

  cout << num << endl;
  return 0;
}
