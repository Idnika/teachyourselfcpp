#include <iostream>
#include <string>
using namespace std;

int main()
{
  string str1("This is a test");
  string str2("ABCDEFG");

  cout << "Initial strings: " << endl;
  cout << "str1: " << str1 << endl;
  cout << "str2: " << str2 << endl << endl;

  cout << "Insert str2 into str1: " << endl;
  str1.insert(5, str2);
  cout << str1 << endl << endl;

  cout << "Remove 7 characters from str1: " << endl;
  str1.erase(5, 7);
  cout << str1 << endl << endl;

  cout << "Replace 2 characters in str1 with str2: " << endl;
  str1.replace(5, 2, str2);
  cout << str1 << endl;

  return 0;
}