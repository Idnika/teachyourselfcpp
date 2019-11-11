#include <iostream>
using namespace std;

#define SIZE 10

template <class QueueType> class queue {
  QueueType quee[SIZE];
  int front, end;
public:
  queue() { front = end = 0; }
  void push(QueueType i)
  {
    if (((front - end) == 1) || ((front == 0) && (end == SIZE - 1))) {
      cout << "Queue is FULL!" << endl;
      return;
    }

    if (end == SIZE - 1) end = 0;
    else end++;

    quee[end] = i;
  }
  QueueType pop() {
    if (end == front) {
      cout << "Queue is EMPTY!" << endl;
      return 0;
    }
    
    if (front == SIZE - 1) front = 0;
    else front++;

    return quee[front];
  }
};

int main()
{
  queue<int> q1;
  int a;

  while(1) {
    cout << "Enter number : 1.push  2.pop  3.end   ";
    cin >> a;
    if (a == 1) {
      cout << "Enter push number : ";
      cin >> a;
      q1.push(a);
    } else if (a == 2) {
      cout << q1.pop() << endl;
    } else if (a == 3) {
      break;
    } else {
      cout << "Wrong Number!" << endl;
    }
  }

  return 0;
}