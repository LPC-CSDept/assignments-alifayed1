#include "Numbers.hpp"

Numbers::Numbers() {
  size = 10;
  head = new int[10];
}

Numbers::Numbers(int n) {
  size = n;
  head = new int[size];
}

Numbers::~Numbers() {
  delete[] head;
}

int Numbers::getSize() const {
  return size;
}

int Numbers::getElement(int i) const {
  return head[i];
}

double Numbers::getSum() const {
  int sum = 0;
  for(int i = 0; i < size; i++) {
    sum += head[i];
  }
  return sum;
}

double Numbers::getAvg() const {
  return getSum() / size;
}

void Numbers::setElement() {
  for(int i = 0; i < size; i++) {
    head[i] = rand() % 99;
  }
}

void Numbers::setElement(int value, int index) {
  head[index] = value;
}

void Numbers::bubbleSort (int mode) {
  if (mode == 0) {
    for(int i = 0; i < size - 1; i++) {
      for (int j = 0; j < size - i - 1; j++) {
        if (head[j] > head[j + 1]) {
          swap(head[j], head[j + 1]);
        }    
      }
    }
  } else {
    for(int i = 0; i < size - 1; i++) {
      for (int j = 0; j < size - i - 1; j++) {
        if (head[j] < head[j+1]) {
          swap(head[j], head[j+1]);
        }  
      }
    }
  }
}

void Numbers::printNumbers() {
  for(int i = 0; i < size; i++) {
    cout << head[i] << "\t";
  }
  cout << "\n";
}

void Numbers::clear() {
  delete[] head;
  head = new int[size];
}