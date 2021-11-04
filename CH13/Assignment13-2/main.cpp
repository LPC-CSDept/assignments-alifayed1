#include <iostream>
#include "Numbers.cpp"

using namespace std;

int main() {
  Numbers num1;
  Numbers num2(100);

  cout << "Num1 size: " << num1.getSize() << endl;
  cout << "Num2 size: " << num2.getSize() << endl << endl;

  cout << "Num1 Setting Random Elements" << endl;
  num1.setElement();
  cout << "Num2 Setting Random Elements" << endl << endl;
  num2.setElement();

  cout << "Num1 Element 3: " << num1.getElement(2) << endl;
  cout << "Num2 Element 3: " << num2.getElement(2) << endl << endl;

  cout << "Num1 sum: " << num1.getSum() << endl;
  cout << "Num2 sum: " << num2.getSum() << endl << endl;

  cout << "Num1 avg: " << num1.getAvg() << endl;
  cout << "Num2 avg: " << num2.getAvg() << endl << endl;

  cout << "Sorting Num1 ascending" << endl;
  num1.bubbleSort(0);
  cout << "Sorting Num2 descending" << endl << endl;
  num2.bubbleSort(1);

  cout << "Num1 Printing" << endl;
  num1.printNumbers();
  cout << "\n";

  cout << "Num2 Printing" << endl;
  num2.printNumbers();
  cout << "\n";

  cout << "Num1 clearing" << endl;
  num1.clear();
  cout << "Num2 clearing" << endl;
  num2.clear();
  return 0;
}