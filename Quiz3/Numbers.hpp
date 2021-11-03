#ifndef NUMBERS_H
#define NUMBERS_H

#include <vector>
#include <iostream>

using namespace std;

class Numbers {
  private:
    int id;
    vector<int> numbers;

  public:
    Numbers();
    Numbers(int, int);
    ~Numbers();

    int getID() const;
    int getSize() const;
    int getElm(int) const;
    int getMax() const;
    int getMin() const;
    int getSum() const;
    void deleteElm(int);
    void addElm(int);
    void printAll() const;
};

#endif