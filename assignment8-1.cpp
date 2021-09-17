#include <iostream>
#include <algorithm>

using namespace std;

int binarySearch(int[], int, int);

int main() {

  const int n = 10;
  int numbers[n] = {10, 25, 30, 35, 40, 45, 55, 60, 65, 70};

  int target = 31;
  int index;

  index = binarySearch(numbers, n, target);
  if(index == -1) {
    cout << target << " was not found" << endl;
  } else {
    cout << target << " was found" << endl;
  }

  return 0;
}

int binarySearch(int numbers[], int n, int target) {
  int first, last, mid;
  first = 0;
  last = n-1;

  while(first <= last) {
    mid = (first+last)/2;
    if(numbers[mid] == target) {
      return mid;
    } else if(numbers[mid] > target) {
      last = mid - 1;
    } else {
      first = mid + 1;
    }
  }
  return -1;
}