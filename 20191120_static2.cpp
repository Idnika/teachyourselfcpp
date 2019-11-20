#include <iostream>
using namespace std;

class myclass {
public:
  static int i;
  void seti(int n) { i = n; }
  int geti() { return i; }
};

int myclass::i;
// namespace 랑 비슷하게 선언하는듯

int main()
{
  myclass o1, o2;

  myclass::i = 100;

  cout << "o1.i: " << o1.geti() << endl;
  cout << "o2.i: " << o2.geti() << endl;

  return 0;
}