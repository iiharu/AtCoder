
#include "bits/stdc++.h"
// #define rep(i, n) for(int i = 0; i < (int)(n); i++)
// #define all(a) (a).begin(),(a).end()
// #define UNIQUE(v) v.erase(unique(v.begin(), v.end()), v.end());
// int gcd(int a, int b){return b ? gcd(b, a%b) : a;}

#define int long long
#define SIZE 100000

using namespace std;

signed main(void) {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int num; // num
  num = 0; // count, result
  // num = numeric_limits<int>::min(); // max
  // num = numeric_limits<int>::max(); // min
  // int n; cin >> n;

  int k; cin >> k;
  int a; cin >> a;
  int b; cin >> b;

  num = 1;
  int yen = 0;
  
  // if (a < b) {
  if (b - a > 2) {
    
    for (int i = 0; i < k; ++i) {

      if (yen > 0) {
        --yen;
        num += b;
      } else { // yen == 0 => true
        if (num < a) {
          ++num;
        } else {
          if (i == k - 1) {
            ++num;
          } else {
            ++yen;
            num -= a;
          }
        }
      }
      // cout << "num: " << num << " yen: " << yen << endl;
    }
    
  } else {
    num += k;
  }
  
  // array<int, SIZE> a;
  // for (auto it = a.begin(); it < a.begin() + n; ++it) cin >> *it;
  // for (auto it = a.begin(); it < a.begin() + n; ++it) num += *it;

  cout << num << endl;
  return 0;
}
