#include <iostream>
using namespace std;

void Xhandler(int test)
{
  try {
    if (test == 0) throw test;
    if (test == 1) throw 'a';
    if (test == 2) throw 123.23;
  } catch(int i) {
    cout << "Caught " << i << endl;
  } catch(...) {
    cout << "Caught One!" << endl;
  }
}

int main()
{
  cout << "start" << endl;

  Xhandler(0);
  Xhandler(1);
  Xhandler(2);
  Xhandler(3);

  cout << "end" << endl;

  return 0;
}