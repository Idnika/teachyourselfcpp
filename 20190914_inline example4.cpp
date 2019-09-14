#include <iostream>
using namespace std;

inline int abs(int a) {
  return a > 0 ? a : -a;
}

inline long abs(long a) {
  return a > 0 ? a : -a;
}

inline double abs(double a) {
  return a > 0 ? a : -a;
}

int main() {
  cout << abs(-10) << "\n";
  cout << abs(10.01) << "\n";
  cout << abs(-10L) << "\n";

  return 0;
}