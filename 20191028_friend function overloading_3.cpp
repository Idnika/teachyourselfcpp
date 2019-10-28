#include <iostream>
using namespace std;

class coord {
  int x, y;
public:
  coord() { x = 0; y = 0; }
  coord(int i, int j) { x = i; y = j; }
  void get_xy(int &i, int &j) { i = x; j = y; }
  friend coord operator+(coord ob1, int i);
  friend coord operator+(int i, coord ob1);
  friend coord operator-(coord ob1, coord ob2);
  friend coord operator/(coord ob1, coord ob2);

  friend coord operator*(coord ob1, int i);
  friend coord operator*(int i, coord ob1);

  friend coord operator--(coord &ob); 
  // --obejct
  friend coord operator--(coord &ob, int notused); 
  // object--
};

coord operator+(coord ob1, int i)
{
  coord temp;

  temp.x = ob1.x + i;
  temp.y = ob1.y + i;
  
  return temp;
}

coord operator+(int i, coord ob1) {
  coord temp;

  temp.x = ob1.x + i;
  temp.y = ob1.y + i;

  return temp;
}

coord operator-(coord ob1, coord ob2)
{
  coord temp;

  temp.x = ob1.x - ob2.x;
  temp.y = ob1.y - ob2.y;

  return temp;
}

coord operator/(coord ob1, coord ob2)
{
  coord temp;

  temp.x = ob1.x / ob2.x;
  temp.y = ob1.y / ob2.y;

  return temp;
}

coord operator*(coord ob1, int i) {
  coord temp;

  temp.x = ob1.x * i;
  temp.y = ob1.y * i;

  return temp;
}

coord operator*(int i, coord ob1) {
  coord temp;

  temp.x = ob1.x * i;
  temp.y = ob1.y * i;

  return temp;
}

coord operator--(coord &ob)
// --obejct
{
  ob.x--;
  ob.y--;

  return ob;
}

coord operator--(coord &ob, int notused)
// object--
{
  ob.x--;
  ob.y--;

  return ob;
}


int main()
{
  coord o1(10, 10), o2(10, 10), o3(5, 2), o4;
  int x, y;

  o1 = o1 + 10;
  o1.get_xy(x, y);
  cout << " (o1+10) X: " << x << ", Y: " << y << endl;

  o1 = 99 + o1;
  o1.get_xy(x, y);
  cout << " (99+o1) X: " << x << ", Y: " << y << endl;

  o4 = o2 - o3;
  o4.get_xy(x, y);
  cout << " (o2-o3) X: " << x << ", Y: " << y << endl;

  o4 = o2 / o3;
  o4.get_xy(x, y);
  cout << " (o2/o3) X: " << x << ", Y: " << y << endl;

  o4 = o2 * 5;
  o4.get_xy(x, y);
  cout << " (o2*5) X: " << x << ", Y: " << y << endl;

  o4 = 5 * o2;
  o4.get_xy(x, y);
  cout << " (5*o2) X: " << x << ", Y: " << y << endl;

  --o4;
  o4.get_xy(x, y);
  cout << " (--o4) X: " << x << ", Y: " << y << endl;

  o4--;
  o4.get_xy(x, y);
  cout << " (o4--) X: " << x << ", Y: " << y << endl;

  return 0;
}