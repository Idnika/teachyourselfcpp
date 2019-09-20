#include <iostream>
using namespace std;

int main()
{
  int *p;

  p = new int(9);

  if(!p) {
    cout << "Allocation Error!\n";
    return 1;
  }

  cout << "Here is integer at p: " << *p << endl;

  delete p;

  return 0;
}