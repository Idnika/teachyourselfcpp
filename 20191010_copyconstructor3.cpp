#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class strtype {
  char *p;
public:
  strtype(char *s);
  strtype(const strtype &o);
  ~strtype() { delete [] p; }
  char *get() { return p; }
};

strtype::strtype(char *s)
{
  int l;

  l = strlen(s) + 1;

  p = new char [l];
  if(!p) {
    cout << "Allocation Error!" << endl;
    exit(1);
  }

  strcpy(p, s);
}

strtype::strtype(const strtype &o) {
  int l;

  l = strlen(o.p) + 1;

  p = new char[l];
  if(!p) {
    cout << "Allocation Error!" << endl;
    exit(1);
  }

  strcpy(p, o.p);
}

void show(strtype x)
{
  char *s;

  s = x.get();
  cout << s << endl;
}

int main() {
  strtype a("Hello"), b("There");

  show(a);
  show(b);

  return 0;
}