template <typename T> gcd(T a, T b) { return b ? gcd(b, a % b) : a; }
template <typename T> lcm(T a, T b) { return a / gcd(a, b) * b; }
