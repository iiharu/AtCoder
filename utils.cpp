
#include "bits/stdc++.h"
using namespace std;

// gcd
int gcd(int a, int b) {
  if (b == 0) return a;
  else if (a < b) return gcd(b, a);
  else return gcd(b, a % b);
}
// mode
// median
// max
// min
