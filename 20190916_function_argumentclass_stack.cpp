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
  int get_tos() {
    return tos;
  }
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

void showstack(stack ss) {
  
  cout << "Contents of this stack: " << endl;
    
  while (true) {
    if (ss.get_tos() == 0) {
      break;
    }
  cout << ss.pop() << endl;
  }
}

int main()
{
  stack s1;

  s1.push('a');
  s1.push('b');
  s1.push('c');

  showstack(s1);

  showstack(s1);

  return 0;
}