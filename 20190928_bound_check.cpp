#include <iostream>
#include <cstdlib>
using namespace std;

class array1 {
  int size;
  char* p;
public:
  array1(int num);
  ~array1() { delete [] p; }
  char &put(int i);
  char get(int i);
};

array1::array1(int num) {
  p = new char [num];
  if(!p) {
    cout << "Allocation Error! " << endl;
    exit(1);
  }
  size = num;
}

char &array1::put(int i) {
  if (i < 0 || i >= size) {
    cout << "Bounds Error!" << endl;
    exit(1);
  }
  return p[i];
}

char array1::get(int i) {
  if (i < 0 || i >= size) {
    cout << "Bounds Error!" << endl;
    exit(1);
  }

  return p[i];
}

int main() 
{
  array1 a(10);

  a.put(3) = 'X';
  a.put(2) = 'R';

  cout << a.get(3) << a.get(2) << endl;

  a.put(11) = '!';

  return 0;
}