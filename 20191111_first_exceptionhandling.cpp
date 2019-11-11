#include <iostream>
using namespace std;

int main()
{
  cout << "start" << endl;

  try {
    cout << "Inside try block" << endl;
    throw 10;
    cout << "This will not execute";
  }
  catch (int i) {
    cout << "Caught One! Number is: ";
    cout << i << endl;
  }

  cout << "end";

  return 0;
}