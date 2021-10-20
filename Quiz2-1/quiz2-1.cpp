#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

void fillUpArray(int*, int);
void printArray(int*, int);

int main() {
  srand(time(0));

  int n = 10;
  int* arr = new int[10];
  fillUpArray(arr, n);
  printArray(arr, n);

  delete[] arr;
  return 0;
}

void fillUpArray(int* arr, int n) {
  for(int i = 0; i < n; i++) {
    arr[i] = (rand() % 100);
  }
}

void printArray(int * arr, int n) {
  cout << "\tPrinting Array...\n";
  for(int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}