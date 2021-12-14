#include "Numbers.hpp"
#include <ctime>

Numbers::Numbers() {
  size = 0;
  numbers = nullptr;
}

Numbers::Numbers(int s) {
  srand(time(0));
  size = s;
  numbers = new int[s];

  for (int i = 0; i < s; i++) {
    int num = rand() % 100;
    numbers[i] = num;
  }
}

Numbers::Numbers(const Numbers &otherObj) {
  size = otherObj.size;
  numbers = new int[size];
  for (int i = 0; i < size; i++) {
    numbers[i] = otherObj.numbers[i];
  }
  
}

Numbers::~Numbers() {
  delete[] numbers;
}

int Numbers::operator>(const Numbers &otherObj) {
  int n1Total = 0, n2Total = 0;
  
  for (int i = 0; i < size; i++) {
    n1Total += numbers[i]; 
  }
  
  for (int i = 0; i < otherObj.size; i++) {
    n2Total += numbers[i]; 
  }
  
  if (n1Total > n2Total) { 
    return 1;
  } else { 
    return 0;
  }
}

Numbers Numbers::operator=(const Numbers &otherObj) {
  size = otherObj.size;
  numbers = new int[size];

  for (int i = 0; i < size; i++) {
    numbers[i] = otherObj.numbers[i];
  }

  return *this;
}

Numbers Numbers::operator+(const Numbers &otherObj) {
  Numbers n3;
  n3.size = size;
  n3.numbers = new int[n3.size];
  
  for (int i = 0; i < size; i++) {
    n3.numbers[i] = this->numbers[i] + otherObj.numbers[i];
  }
  
  return n3;
}

void printNumbers(Numbers obj) {
  for (int i = 0; i < obj.size; i++) {
    cout << obj.numbers[i] << " ";
  }
  cout << endl;
}