#ifndef NUMBERS_H
#define NUMBERS_H

#include <algorithm>
#include <iostream>

using namespace std;

class Numbers {
  private:
    int size;
    int* head;

  public:
    Numbers();
    Numbers(int);
    ~Numbers();
    int getSize() const;
    int getElement(int) const;
    double getSum() const;
    double getAvg() const;
    void setElement();
    void setElement(int, int);
    void bubbleSort(int);
    void printNumbers();
    void clear();
};

#endif