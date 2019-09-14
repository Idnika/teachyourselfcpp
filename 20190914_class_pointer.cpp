#include <iostream>
using namespace std;

class myclass {
  int a;
public:
  myclass(int x);
  int get();
};

myclass::myclass(int x)
{
  a = x;
}

int myclass::get() {
  return a;
}

int main()
{
  myclass ob(120);
  myclass *p;

  p = &ob;

  cout << "Value using object: " << ob.get();
  cout << "\n";

  cout << "Value using pointer: " << p->get();
  
  return 0;
}