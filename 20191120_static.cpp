#include <iostream>
using namespace std;

class myclass {
  static int i;
public:
  void seti(int n) { i = n; }
  int geti() { return i; }
};

int myclass::i;

int main()
{
  myclass o1, o2;

  o1.seti(10);

  cout << "o1.i: " << o1.geti() << endl;
  cout << "o2.i: " << o2.geti() << endl;

  return 0;
}