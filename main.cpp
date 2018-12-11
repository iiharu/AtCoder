#include "bits/stdc++.h"
using namespace std;

// #define int long long

inline bool is753(int n) {
  int three = 0;
  int five = 0;
  int seven = 0;

  while(true){
    switch (n % 10){
    case 3:
      ++three;
      break;
    case 5:
      ++five;
      break;
    case 7:
      ++seven;
      break;
    default:
      return false;
    }
    n /= 10;
    if (n==0)
      break;
  }
  if(three * five * seven == 0)
    return false;
  return true;
}

// bool is753(int n) {
//   string s = to_string(n);
//   if(s.find("0") != string::npos)
//     return false;
//   if(s.find("1") != string::npos)
//     return false;
//   if(s.find("2") != string::npos)
//     return false;
//   if(s.find("4") != string::npos)
//     return false;
//   if(s.find("6") != string::npos)
//     return false;
//   if(s.find("8") != string::npos)
//     return false;
//   if(s.find("9") != string::npos)
//     return false;

//   if(s.find("3") == string::npos)
//     return false;
//   if(s.find("5") == string::npos)
//     return false;
//   if(s.find("7") == string::npos)
//     return false;

//   return true;
// }

signed main(void) {
  int num; // num
  num = 0; // count, result
  // num = numeric_limits<int>::min(); // max
  // num = numeric_limits<int>::max(); // min
  int n;

  cin >> n;

  int i = 357;
  while(true){
    if(i>n)
      break;
    if (is753(i)) // **7
      ++num;
    i += 6;
    if(i>n)
      break;
    if (is753(i)) // **3
      ++num;
    i += 2;
    if(i>n)
      break;
    if (is753(i)) // **5
      ++num;
    i += 2;
  }

  cout << num << endl;
  return 0;
}
