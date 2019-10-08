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

strtype::strtype()
{
  p = new char[255];
  if(!p) {
    cout << "Allocation Error!" << endl;
    exit(1);
  }
  *p = '\0';
  len = 255;
}

strtype::strtype(char* a, int b) {
  if (strlen(a) >= b) {
    cout << "Allocating too little memory!\n";
    exit(1); 
  } // boundary check

  p = new char[b];
  if (!p) {
    cout << "Allocation Error!" << endl;
    exit(1);
  }
  strcpy(p, a);
  len = b;
}

int main()
{
  strtype str1;
  strtype str2("happy", 10);

  cout << str1.getstring() << endl;
  cout << str2.getstring() << endl;

  return 0;
}