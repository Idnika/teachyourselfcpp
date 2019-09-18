#include <iostream>
using namespace std;

class letters {
  char ch;
public:
  letters(char c) { ch = c; }
  char get_ch() { return ch; }
};

int main()
{
  letters ob[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

  for (int i = 0; i < 10; i++) {
    cout << ob[i].get_ch();
    cout << endl;
  }

  return 0;
}