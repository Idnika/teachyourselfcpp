#include <iostream>
#include <cstdlib>
using namespace std;
#define SIZE 10

class c_queue {
  int quee[SIZE];
  int rear;
  int front;
public:
  c_queue();
  ~c_queue();
  void push(int a);
  int pop();
};

c_queue::c_queue() {
  front = 0;
  rear = 0;
}

c_queue::~c_queue() {
  free(quee);
}

void c_queue::push(int a) {
  if ((front == (rear + 1) || (front == 0 && rear == (SIZE - 1)))) {
    cout << "Queue is full!\n";
    return;
  }
  if (rear >= SIZE - 1) {
    rear++;
    rear = rear % SIZE;
    quee[rear] = a;
  } else {
    rear++;
    quee[rear] = a;
  }
}

int c_queue::pop() {
  if (rear == front) {
    cout << "Queue is empty!\n";
    return 0;
  }
  if (front >= SIZE - 1) {
    front++;
    front = front % SIZE;
    return quee[front];
  } else {
    front++;
    return quee[front];
  }
}

int main() {
  c_queue c1;

  for (int i = 1; i < 13; i++) {
    c1.push(i);
  }
  for (int i = 1; i < 7; i++) {
    cout << c1.pop() << "\n";
  }

  c_queue c2;

  c2 = c1;

  for (int i = 13; i < 17; i++) {
    c1.push(i);
    c2.push(i);
  }
  for (int i = 1; i < 15; i++) {
    cout << c1.pop() << "\n";
    cout << c2.pop() << endl;
  }

  return 0;
}