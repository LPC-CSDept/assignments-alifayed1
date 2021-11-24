#include <iostream>
#include "Stack.hpp"

using namespace std;

Stack::Stack() {
  pool.reserve(0);
}

Stack::Stack(int s) {
  pool.reserve(s);
}

void Stack::isEmpty() {
  if (pool.empty() == true) {
    cout << "The stack is empty\n";
  }
  else {
    cout << "The stack is not empty\n";
  }
}

void Stack::clear() {
  pool.clear();
}

void Stack::push(int el) {
  pool.push_back(el);
}

int Stack::pop() {
  int element = pool.back();
  pool.pop_back();
  return element;
}

int Stack::topEl() {
  return pool.back();
}

int Stack::getSize() {
  return pool.size();
}

void Stack::printAll() {
  for(int i = 0; i < pool.size(); i++) {
    cout << pool[i] << " ";
  }
  cout << "\n";
}