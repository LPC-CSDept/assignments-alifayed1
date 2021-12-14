#ifndef NUMBERS_HPP
#define NUMBERS_HPP

#include <iostream>

using namespace std;

class Numbers {
  private:
    int size;
    int *numbers;
  public:
    Numbers();
    Numbers(int);
    Numbers(const Numbers &);
    ~Numbers();
    int operator>(const Numbers &);
    Numbers operator=(const Numbers &);
    Numbers operator+(const Numbers &);
    friend void printNumbers(Numbers);
};

#endif