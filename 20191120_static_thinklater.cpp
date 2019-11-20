#include <iostream>
#include <cstring>
using namespace std;

class output {
  static char outbuf[255];
  static int inuse; // 고정값/전역
  static int oindex; // 고정값/전역
  char str[80];
  int i; // i는 인덱스와 달리 static 아님??
  int who; // 머하는 놈이야

public:
  output(int w, char *s) { strcpy(str, s); i = 0; who = w;}


  int putbuf()
  {
    if (!str[i]) {
      inuse = 0;
      return 0;
    }
    // str[i]가 비어있다면 사용하지 않았음을 알리고 return 0;

    if (!inuse) inuse = who;
    if (inuse != who) return -1;
    if (str[i]) {
      outbuf[oindex] = str[i];
      i++;
      oindex++;
      outbuf[oindex] = '\0'; // 다음값을 null로 만들어놓네
      return 1;
    }
    return 0;
  }
  
  void show() { cout << outbuf << endl; }
};

char output::outbuf[255];
int output::inuse = 0;
int output::oindex = 0;

int main()
{
  output o1(1, "This is a test"), o2(2, " of statics");

  while(o1.putbuf() | o2.putbuf()) ;

  o1.show();

  return 0;
}