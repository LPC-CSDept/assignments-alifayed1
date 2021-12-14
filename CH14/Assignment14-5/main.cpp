#include <iostream>
#include "Numbers.cpp"

int main() {
  Numbers n1(10);
  Numbers n2;
  n2 = n1;

  printNumbers(n1);
  printNumbers(n2);

  if(n1 > n2) {
    cout << "N1 is greater than N2" << endl;
  } else {
    cout << "N2 is less than or equal to N1" << endl;
  }

  Numbers n3 = (n1 + n2);

  printNumbers(n3);
  return 0;
}