#include <iostream>
#include <cmath>
using namespace std;

void round1(double &num);

int main()
{
  double i = 100.4;

  cout << i << " rounded is ";
  round1(i);
  cout << i << endl;

  i = 10.9;
  cout << i << " rounded is ";
  round1(i);
  cout << i << endl;

  return 0;
}

void round1(double &num) {
  double frac;
  double val;

  frac = modf(num, &val);

  if (frac < 0.5) num = val;
  else num = val + 1.0;
}