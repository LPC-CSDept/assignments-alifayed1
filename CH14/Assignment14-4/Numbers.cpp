#include "Numbers.hpp"
#include <ctime>

Numbers::Numbers(){
    size=0;
    numbers=nullptr;
}

Numbers::Numbers(int s){
    size=s;
    numbers=new int[s];

    for(int i = 0; i < s; i++) {
      numbers[i] = rand() % 100;
    }
}

Numbers::Numbers(const Numbers& n1){
    size=n1.size;
    numbers=new int[n1.size];

    for(int i=0; i<n1.size; i++) {
        numbers[i] = n1.numbers[i];
    }
}
Numbers::~Numbers(){
    delete[] numbers;
}

int Numbers::getMax() const{
    int max = numbers[0];
    for (int i = 0; i < size; i++){
        if (numbers[i] > max){
            max = numbers[i];
        }
    }
    return max;
}

void printNumbers(Numbers n) {
  for (int i = 0; i < n.size; i++) {
    cout << n.numbers[i] << " ";
  }
  cout << endl;
}