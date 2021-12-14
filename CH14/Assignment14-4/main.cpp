#include <iostream>
#include "Numbers.cpp"

using namespace std;

int main() {
  srand(time(0));

  Numbers n1(10);
  Numbers n2 = n1;

  printNumbers(n1);
  printNumbers(n2);

  cout << "n1 max: " << n1.getMax() << endl;
  cout << "n2 max: " << n2.getMax() << endl;

  return 0;
}