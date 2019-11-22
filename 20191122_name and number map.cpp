#include <iostream>
#include <map>
#include <cstring>
using namespace std;

class name {
  char nm[20];
public:
  name() { strcpy(nm, " "); }
  name(char* s) { strcpy(nm, s); }
  char* get() { return nm; }
};

class phonenumber {
  char nb[20];
public:
  phonenumber() { strcpy(nb, " "); }
  phonenumber(char *s) { strcpy(nb, s); }
  char* get() { return nb; }
};

bool operator<(name a, name b)
{
  return strcmp(a.get(), b.get()) < 0;
}

bool operator<(phonenumber a, phonenumber b)
{
  return strcmp(a.get(), b.get()) < 0;
}

int main()
{
  map<name, phonenumber> m;

  int ins;
  char insstr[20];
  char insnum[20];

  while(1) {
    cout << "1. Input\n2. Search\n3. Quit" << endl;
    cout << " >> ";

    map<name, phonenumber>::iterator p;

    cin >> ins;

    if (ins == 1) {
      cout << "Input name: " << endl;
      cin >> insstr;
      cout << "Input number: " << endl;
      cin >> insnum;

      m.insert(pair<name, phonenumber>(name(insstr), phonenumber(insnum)));

      cout << "Iput was done." << endl;
    } else if (ins == 2) {
      cout << "Input name: " << endl;
      cin >> insstr;

      p = m.find(name(insstr));

      if(p != m.end()) 
      cout << p->second.get() << endl;
      else cout << "Your number is not here." << endl;

    } else if (ins == 3) {
      break;
    } else { cout << "Error!" << endl; }
  }

  return 0;
}