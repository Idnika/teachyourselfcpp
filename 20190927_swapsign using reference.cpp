#include <iostream>
using namespace std;

void swapsign(int &x);

int main()
{
  cout << "Input integer: ";
  int temp;
  cin >> temp;

  swapsign(temp);

  cout << "Result: " << temp;

  return 0;
}

void swapsign(int &x) {
  int t;

  t = -x;
  x = t;
}