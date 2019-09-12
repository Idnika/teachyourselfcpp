#include <iostream>
#include <ctime>
using namespace std;

class stopwatch {
  clock_t staart;
  double total_time;
  clock_t endd;
public:
  stopwatch();
  ~stopwatch();
  void start();
  void stop();
  void show();
};

stopwatch::stopwatch() {
  total_time = 0;
}

stopwatch::~stopwatch() {
  cout << "Elapsed time is : ";
  cout << total_time << "\n";
}

void stopwatch::start() {
  staart = clock();
}

void stopwatch::stop() {  
  endd = clock();
  total_time += ((endd - staart) / CLOCKS_PER_SEC);
}

void stopwatch::show() {
  clock_t instancae;
  int inss = 0;

  instancae = clock();
  inss = total_time + ((instancae - staart) / CLOCKS_PER_SEC);

  cout << "Now time : " << inss << "\n";
}

int main() {
  stopwatch s1;
  char ins = 'a';

  while (true) {
    cout << "Start(s), Stop(t), Show(w), Exit(x) : ";
    cin >> ins;

    if (ins == 's') {
      s1.start();
    } else if (ins == 't') {
      s1.stop();
    } else if (ins == 'w') {
      s1.show();
    } else if (ins == 'x') {
      break;
    } else {
      cout << "Error!\n";
    }
  }

  return 0;
}