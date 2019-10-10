#include <iostream>
#include <cstdlib>
using namespace std;

class array1 {
  int *p;
  int size;
public:
  array1(int sz) {
    p = new int(sz);
    if(!p) exit(1);
    size = sz;
    cout << "Using 'normal' constructor\n";
  }
  ~array1() { delete [] p; }

  array1(const array1 &a);

  void put(int i, int j) {
    if (i >= 0 && i < size) {
      p[i] = j;
    }
  }
  int get(int i) {
    return p[i];
  }
};

array1::array1(const array1 &a) {
  int i;

  size = a.size;
  p = new int[a.size];
  if(!p) exit(1);
  for (i = 0; i < a.size; i++) {
    p[i] = a.p[i];
  }

  cout << "Using copy consturctor\n";
}

int main()
{
  array1 num(10);
  int i;

  for (i = 0; i < 10; i++) num.put(i, i);

  for (i = 9; i >= 0; i--) cout << num.get(i);
  cout << endl;

  array1 x = num;

  for (i = 0; i < 10; i++) cout << x.get(i);

  return 0;
}