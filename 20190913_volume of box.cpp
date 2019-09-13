#include <iostream>
using namespace std;

class box {
  double len1;
  double len2;
  double len3;
  double volume;
public:
  box(double l1, double l2, double l3);
  void vol();
};

box::box(double l1, double l2, double l3) {
  len1 = l1;
  len2 = l2;
  len3 = l3;
  volume = len1 * len2;
  volume = volume * len3;
}

void box::vol() {
  cout << volume << endl;
}

int main() {
  box b1(3, 5, 6);

  b1.vol();

  return 0;
}