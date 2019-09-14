#include <iostream>
using namespace std;

inline int even(int x)
{
  return !(x % 2);
}

int main() {
  if (even(10)) cout << "10 is even!\n";
  if (even(11)) cout << "11 is even!\n";

  return 0;
}