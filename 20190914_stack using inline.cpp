#include <iostream>
#include <cstdlib>
using namespace std;

class stack {
  int *stck;
  int tos;
  int sizze;
public:
  stack(int n) {
    sizze = n;
    stck = (int *)malloc(sizeof(int) * sizze);
    tos = 0;
  }
  void push(char a) {
    if (tos == sizze) {
      cout << "Stack is full!\n";
      return;
    }
    *(stck + tos) = a;
    tos++;
  }
  int pop() {
    if (tos <= 0) {
      cout << "Stack is empty!\n";
      return 0;
    }
    tos--;
    return *(stck + tos);
  }
};

int main() {
  stack s1(5);

  for (int i = 0; i < 7; i++) {
    s1.push(i);
  }
  for (int i = 0; i < 3; i++) {
    cout << s1.pop() << endl;
  }

  return 0;
}