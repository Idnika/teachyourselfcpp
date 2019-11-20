#include <iostream>
#include <cstdlib>
using namespace std;

class myclass {
  int a;
public:
  myclass(int x) { a = x; }
  myclass(char *str) { a = atoi(str); }
  int geta() { return a; }
};

int main()
{
  myclass ob1 = 4;
  myclass ob2 = "123";

  cout << "ob1: " << ob1.geta() << endl;
  cout << "ob2: " << ob2.geta() << endl;

  return 0;
}