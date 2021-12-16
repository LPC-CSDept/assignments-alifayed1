#include <iostream>
#include <fstream>
#include <ctime>
#include "Course.cpp"

using namespace std;

void quicksort(Course[], int, int);

int main() {
    
    return 0;
}

void quicksort(Course courses[], int left, int right) {
    if(left >= right) {
        return;
    }

    int pivot = left + (right - left) / 2; // Safe way to calculate mid to prevent overflow
    swap(pivot, right);

    int x = left - 1;
    int y = right;

    while(x < y) {
    	while(courses[x] < courses[right]){
    		x++;
    	}
    	while(courses[y] > courses[right] && x < y) {
    		y--;
    	}
    	swap(x, y);
    }

    swap(right, y);

    quicksort(courses, left, y - 1);
    quicksort(courses, y + 1, right);
}

