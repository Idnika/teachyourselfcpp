#include <iostream>
using namespace std;

class num {
protected:
  int i;
public:
  num(int x) { i = x; }
  virtual void shownum() {
    cout << i << endl;
  }
};

class outhex : public num {
public:
  outhex(int x) : num(x) {}
  void shownum() {
    cout << hex << i << endl;
  }
};

class outoct : public num {
public:
  outoct(int x) : num(x) {}
  void shownum() {
    cout << oct << i << endl;
  }
};

int main()
{
  outhex ob1(10);
  outoct ob2(10);

  ob1.shownum();
  ob2.shownum();

  return 0;
}