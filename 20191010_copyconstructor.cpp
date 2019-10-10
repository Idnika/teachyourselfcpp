#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

class strtype {
  char *p;
  int len;
public:
  strtype();
  strtype(char *a, int b);
  char *getstring() { return p; }
  int getlength() { return len; }
};

strtype::strtype() {
  p = new char[255];
  if (!p) {
    cout << "Allocation Error!" << endl;
    exit(1);
  }
  *p = '\0';
  len = 255;
}

strtype::strtype(char *a, int b) {
  if (strlen(a) >= b) {
    cout << "Length error!" << endl;
    exit(1);
  }
  p = new char[b];
  strcpy(p, a);
  if (!p) {
    cout << "Allocation Error!" << endl;
    exit(1);
  }
  len = b;
}

int main() {
  strtype a1;
  strtype a2("Goodbye", 8);

  cout << a1.getstring() << endl;
  cout << a2.getstring() << endl;

  return 0;
}