#include <iostream>
using namespace std;

class area_cl {
public:
  double height;
  double width;
};

class rectangle : public area_cl {
public:
  rectangle(double h, double w);
  double area();
};

class isosceles : public area_cl {
public:
  isosceles(double h, double w);
  double area();
};

rectangle::rectangle(double h, double w) {
  height = h;
  width = w;
}

double rectangle::area() {
  return height * width;
}

isosceles::isosceles(double h, double w) {
  height = h;
  width = w;
}

double isosceles::area() {
  return (height * width) / 2;
}

int main() {
  rectangle r1(3, 5);
  isosceles i1(3, 5);

  cout << r1.area() << endl;
  cout << i1.area() << endl;

  return 0;
}
