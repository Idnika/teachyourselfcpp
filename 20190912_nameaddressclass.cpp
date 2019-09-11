#include <iostream>
#include <cstring>
using namespace std;

class na_class {
  string name;
  string address;
public:
  void store();
  void display();
};

void na_class::store() {
  cout << "Input two lines: ";
  getline(cin, name);
  getline(cin, address);
}

void na_class::display() {
  cout << "name: " << name << "\n" << "address: " << address << "\n";
}

int main() {
  na_class na1;

  na1.store();
  na1.display();

  return 0;
}