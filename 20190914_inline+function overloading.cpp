#include <iostream>
using namespace std;

inline int afbs(int a);
inline long afbs(long a);
inline double afbs(double a);

inline int afbs(int a) {
  return a < 0 ? -a : a;
}

inline long afbs(long a) {
  return a < 0 ? -a : a;
}

inline double afbs(double a) {
  return a < 0 ? -a : a;
}

int main() {
  int x = -10;
  double y = 10.01;
  long z = 10L;
  cout << afbs(x) << "\n";
  cout << afbs(y) << "\n";
  cout << afbs(z) << "\n";

  return 0;
}