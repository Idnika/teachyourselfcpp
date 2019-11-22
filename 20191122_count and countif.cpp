#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool even(int x)
{
  return !(x % 2);
}

int main()
{
  vector<int> v;
  int i;

  for(i = 0; i < 20; i++) {
    if(i % 2) v.push_back(1);
    else v.push_back(2);
  }

  cout << "Sequence: ";
  for(i = 0; i < v.size(); i++) cout << v[i] << " ";
  cout << endl;

  int n;
  n = count(v.begin(), v.end(), 1);
  cout << n << " elements are 1." << endl;

  n = count_if(v.begin(), v.end(), even);
  cout << n << " elements are even." << endl;

  return 0;
}