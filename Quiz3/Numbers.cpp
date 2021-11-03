#include "Numbers.hpp"

using namespace std;

Numbers::Numbers() {
  id = -1;
  numbers.reserve(0);
}

Numbers::Numbers(int setID, int size) {
  id = setID;
  numbers.reserve(size);

  for(int i = 0; i < size; i++) {
    numbers.push_back((rand() % 20));
  }
}

Numbers::~Numbers() {

}

int Numbers::getID() const {
  return id;
}

int Numbers::getSize() const {
  return numbers.size();
}

int Numbers::getElm(int index) const {
  if(index > numbers.size()-1) {
    cout << "Error: Index out of bounds.\n";
  } else {
    return numbers[index];
  }
  throw -1;
}

int Numbers::getMax() const {
  if(numbers.size() == 0) {
    cout << "Error: No numbers to fetch\n";
    throw -1;
  } else if(numbers.size() == 1) {
    return numbers[0];
  } else {
    int max = numbers[0];
    for(int i = 0; i < numbers.size() - 1; i++) {
      int current = numbers[i];
      if(current > max) {
        max = current;
      }
    }
    return max;
  }
}

int Numbers::getMin() const {
  if(numbers.size() == 0) {
    cout << "Error: No numbers to fetch\n";
    throw -1;
  } else if(numbers.size() == 1) {
    return numbers[0];
  } else {
    int min = numbers[0];
    for(int i = 0; i < numbers.size() - 1; i++) {
      int current = numbers[i];
      if(current < min) {
        min = current;
      }
    }
    return min;
  }
}

int Numbers::getSum() const {
    if(numbers.size() == 0) {
    cout << "Error: No numbers to add\n";
    throw -1;
  } else if(numbers.size() == 1) {
    return numbers[0];
  } else {
    int sum = 0;
    for(int i = 0; i < numbers.size() - 1; i++) {
      sum += numbers[i];
    }
    return sum;
  }
}

void Numbers::deleteElm(int value) {
  vector<int>::iterator iter;
  for(iter = numbers.begin(); iter < numbers.end(); iter++) {
    if(*iter == value) {
      numbers.erase(iter--);
    }
  }
}

void Numbers::addElm(int num) {
  numbers.push_back(num);
}

void Numbers::printAll() const {
  if(numbers.size() == 0) {
    cout << "Error: No numbers to print\n";
  } else {
    for(int i = 0; i < numbers.size()-1; i++) {
      cout << numbers[i] << "\t";
    } 
    cout << "\n";
  }
}