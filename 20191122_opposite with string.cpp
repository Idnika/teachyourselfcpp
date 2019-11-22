#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
  map <string, string> m;
  int i;

  m.insert(pair<string, string>("Yes", "No"));
  m.insert(pair<string, string>("Up", "Down"));
  m.insert(pair<string, string>("Left", "Right"));
  m.insert(pair<string, string>("Good", "Bad"));

  string s;
  cout << "Enter word: ";
  cin >> s;

  map<string, string>::iterator p;

  p = m.find(s);
  if(p != m.end()) cout << "Opposite: " << p->second;
  else cout << "Word not in map.\n";

  return 0;
}