#ifndef STACK_HPP
#define STACK_HPP

#include <iostream>
#include <vector>

using namespace std;

class Stack {

private:
  vector<int> pool;
public:
  Stack();
  Stack(int s);
  void isEmpty();
  void clear();
  void push(int el);
  int pop();
  int topEl();
  int getSize();
  void printAll(); 
};

#endif