#include <iostream>
using namespace std;

inline int abs(int a);
inline long abs(long a);
inline double abs(double a);

inline int abs(int a) {
  return a < 0 ? -a : a;
}

inline long abs(long a) {
  return a < 0 ? -a : a;
}

inline double abs(double a) {
  return a < 0 ? -a : a;
}

int main() {
  int x = -10;
  double y = 10.01;
  long z = 10L;
  cout << abs(x) << "\n";
  cout << abs(y) << "\n";
  cout << abs(z) << "\n";

  return 0;
}