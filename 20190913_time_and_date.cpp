#include <iostream>
#include <ctime>
using namespace std;

class t_and_d {
  time_t now;
  char *date;
public:
  t_and_d();
  void display();
};

t_and_d::t_and_d() {
  now = time(0);
  date = ctime(&now);
}

void t_and_d::display() {
  cout << date << endl;
}

int main() {
  t_and_d t1;

  t1.display();

  return 0;
}