#ifndef NUMBERS_H
#define NUMBERS_H

#include <cstdlib>
#include <ctime>
#include <vector>

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
    int getSum() const;
    void deleteElm(int);
    void addElm(int);
    void printAll() const;
}