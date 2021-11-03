#include "Numbers.hpp"

using namespace std;

Numbers::Numbers() {
  id = -1;
  numbers.reserve(0);
}

Numbers::Numbers(int setID, int size) {
  srand(time(0));

  id = setID;
  numbers.reserve(size);

  for(int i = 0; i < size; i++) {
    numbers.push_back((rand() % 99));
  }
}

Numbers::~Numbers() {

}

