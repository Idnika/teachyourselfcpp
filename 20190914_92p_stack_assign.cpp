#include <iostream>
using namespace std;

#define SIZE 10

class stack {
  char stck[SIZE];
  int tos;
public:
  stack();
  void push(char ch);
  char pop();
};

stack::stack()
{
  cout << "Constructing a stack\n";
  tos = 0;
}

void stack::push(char ch) {
  if (tos == SIZE) {
    cout << "Stack is full!\n";
    return;
  }
  stck[tos] = ch;
  tos++;
}

char stack::pop()
{
  if(tos == 0) {
    cout << "Stack is empty\n";
    return 0;
  }
  tos--;
  return stck[tos];
}

int main()
{
  stack s1, s2;
  int i;

  s1.push('a');
  s1.push('b');
  s1.push('c');

  s2 = s1;

  for (i = 0; i < 3; i++) cout << "Pop s1: " << s1.pop() << endl;
  for (i = 0; i < 3; i++) cout << "Pop s2: " << s2.pop() << endl;

  return 0;
}