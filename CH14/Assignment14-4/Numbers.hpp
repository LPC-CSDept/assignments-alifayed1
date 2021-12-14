#ifndef NUMBERS_H
#define NUMBERS_H

#include <iostream>
using namespace std;

class Numbers{
  private:
      int size;
      int* numbers;
  public:
      Numbers();
      Numbers(int s);
      Numbers(const Numbers &);
      ~Numbers();
      int getMax() const;
      friend void printNumbers(Numbers);
};

#endif