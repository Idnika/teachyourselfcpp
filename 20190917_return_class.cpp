#include <iostream>
using namespace std;

class who {
  char name;
public:
  who(char a);
  ~who();
};

who make_who(who b) {
  return b;
}

who::who(char a) {
  name = a;
  cout << "Constructing who #" << name << endl;
}

who::~who() {
  cout << "Destructing who #" << name << endl;
}

int main() {
  who ex1('c');
  
  make_who(ex1);

  return 0;
}