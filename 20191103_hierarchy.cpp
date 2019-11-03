#include <iostream>
using namespace std;

class A {
  int i;
public:
  A(int a) { i = a; }
  void showa() { cout << "A: " << i << endl; }
};

class B {
  int j;
public:
  B(int a) { j = a; }
  void showb() { cout << "B: " << j << endl; }
};

class C : public A, public B {
  int k;
public:
  C(int a, int b, int c) : A(a), B(b) {
    k = c;
  }
  void showc() { cout << "C: " << k << endl; }
};

int main()
{
  C ob(3, 4, 5);

  ob.showa();
  ob.showb();
  ob.showc();

  return 0;
}
// creates C's constructor so that it initializes k and passes on arguments to A() and B().