#include <iostream>
using namespace std;

class myclass {
  float a;
  long b;
  char c;
public:
  void set_myclass(float a, long b, char c) {
    this->a = a;
    this->b = b;
    this->c = c;
  }
  void display();
};

void myclass::display() {
  cout << "Float : " << a << endl;
  cout << "Long : " << b << endl;
  cout << "Char : " << c << endl;
}

int main()
{
  myclass *p;
  p = new myclass;

  if (!p) {
    cout << "Allocation Error!" << endl;
    return 1;
  }

  p->set_myclass(3.3, 5L, 'a');

  cout << "Product is: ";
  p->display();

  delete p;

  return 0;
}