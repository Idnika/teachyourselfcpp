#include <iostream>
#include <cstdlib>
using namespace std;

class stack {
  char *stck;
  int tos;
  int size;
public:
  stack(int size);
  ~stack();
  void push(char ch);
  char pop();
};

stack::stack(int size) {
  tos = 0;
  this->size = size;
  stck = (char *)malloc(sizeof(char) * size);
  cout << "Constructing stack \n";
}

stack::~stack() {
  cout << "Freeing stack\n";
  free(stck);
}

void stack::push(char ch)
{
  if (tos == size) {
    cout << "Stack is full\n";
    return;
  }
  stck[tos] = ch;
  tos++;
}

char stack::pop() {
  if (tos == 0) {
    cout << "Stack is empty\n";
    return 0;
  }
  tos--;
  return stck[tos];
}

int main() {
  stack s1(10);
  int i;

  s1.push('a');
  s1.push('b');
  s1.push('c');

  for (i = 0; i < 5; i++) cout << "Pop s1: " << s1.pop() << "\n";

  return 0;
}