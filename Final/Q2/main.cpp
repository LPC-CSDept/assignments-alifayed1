#include <iostream>
#include <fstream>
#include <ctime>
#include "Course.cpp"

using namespace std;

void quicksort(int, int);

int main() {

    return 0;
}

void quicksort(int left, int right) {
    if(left >= right) {
        return;
    }
    int pivot = left + (right - left) / 2; // Safe way to calculate mid to prevent overflow
}

