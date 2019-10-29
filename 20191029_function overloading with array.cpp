#include <iostream>
using namespace std;

class array1 {
  int nums[10];
public:
  array1();
  void set(int n[10]);
  void show();
  friend array1 operator+(array1 ob1, array1 ob2);
  friend array1 operator-(array1 ob1, array1 ob2);
  friend int operator==(array1 ob1, array1 ob2);
  array1 operator++();
  array1 operator++(int unused);

  friend array1 operator--(array1 &ob1);
  friend array1 operator--(array1 &ob1, int unused);
};



array1 operator--(array1 &ob1) {
  for (int i = 0; i < 10; i++) {
    ob1.nums[i]--;
  }

  return ob1;
}

array1 operator--(array1 &ob1, int unused) {
  for (int i = 0; i < 10; i++) {
    ob1.nums[i]--;
  }

  return ob1;
}

array1 array1::operator++() {
  for (int i = 0; i < 10; i++) {
    nums[i]++;
  }

  return *this;
}

array1 array1::operator++(int unused) {
  for (int i = 0; i < 10; i++) {
    nums[i]++;
  }

  return *this;
}

array1::array1()
{
  int i;
  for (i = 0; i < 10; i++) nums[i] = 0;
}

void array1::set(int *n)
{
  int i;
  for (i = 0; i < 10; i++) nums[i] = n[i];
}

void array1::show()
{
  int i;

  for(i = 0; i < 10; i++)
  {
    cout << nums[i] << ' ';
  }

  cout << endl;
}

array1 operator+(array1 ob1, array1 ob2) {
  array1 temp;

  for (int a = 0; a < 10; a++) {
    temp.nums[a] = ob1.nums[a] + ob2.nums[a];
  }

  return temp;
}

array1 operator-(array1 ob1, array1 ob2) {
  array1 temp;

  for (int a = 0; a < 10; a++) {
    temp.nums[a] = ob1.nums[a] - ob2.nums[a];
  }

  return temp;
}

int operator==(array1 ob1, array1 ob2) {
  int a = 0;
  int count = 0;

  while (a < 10)
  {
    if (ob1.nums[a] != ob2.nums[a]) {
      count++;
      break;
    }
    a++;
  }

  if (count == 0) return true;
  else { return false; }
}

int main()
{
  array1 o1, o2, o3;

  int i[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  o1.set(i);
  o2.set(i);

  o3 = o1 + o2;
  o3.show();

  o3 = o1 - o2;
  o3.show();

  if (o1==o2) cout << "o1 equals o2" << endl;
  else cout << "o1 does not equal o2" << endl;

  if (o1==o3) cout << "o1 equals o3" << endl;
  else cout << "o1 does not equal o3" << endl;

  o3++;
  o3.show();

  ++o3;
  o3.show();

  o3--;
  o3.show();

  --o3;
  o3.show();

  return 0;
}