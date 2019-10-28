#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class strtype {
  char *p;
  int len;
public:
  strtype(char *s);
  ~strtype() {
    cout << "Freeing " << p << endl;
    delete []p;
  }
  char *get() { return p; }
  strtype &operator=(strtype &ob);
  // 이거 레퍼런스 왜씀
};

strtype::strtype(char *s)
{
  int l;

  l = strlen(s) + 1;
  
  p = new char [l];
  if (!p) {
    cout << "Allocation Error!" << endl;
    exit(1);
  }

  len = l;
  strcpy(p, s);
}

strtype &strtype::operator=(strtype &ob)
{
  if (len < ob.len) {
    delete []p;
    p = new char [ob.len];
    if(!p) {
      cout << "Allocation Error!" << endl;
      exit(1);
    }
  }
  len = ob.len;
  strcpy(p, ob.p);
  return *this;
}

int main()
{
  strtype a("Hello"), b("There");

  cout << a.get() << endl;
  cout << b.get() << endl;

  a = b;

  cout << a.get() << endl;
  cout << b.get() << endl;

  return 0;
}