#include <iostream>
#include <fstream>
#include <ctime>
#include "Course.cpp"

using namespace std;

void swap(int, int);
void quicksort(int, int);
void fillCourseArray(int);
void printCourses(int);

const int SIZE = 10;
Course courses[SIZE];

int main() {
    srand(time(0));

    fillCourseArray(SIZE);

    cout << "Before Sort: \n\n";
    printCourses(SIZE);

    cout << "Recursion Call Hierarchy\n\n";
    quicksort(0, SIZE);
    cout << "\n";

    cout << "After Sort: \n\n";
    printCourses(SIZE);

    return 0;
}

void swap(int i, int j) {
    Course temp = courses[i];
    courses[i] = courses[j];
    courses[j] = temp;
}

void quicksort(int left, int right) {
   if(left >= right) {
    	return;
    }

    cout << "quicksort(" << left << ", " << right << ")\n";

    int pivot = left + (right - left) / 2;
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

    quicksort(left, y - 1);
    quicksort(y + 1, right);
}

void fillCourseArray(int size) {
    ifstream ifs;
    ifs.open("C:\\Users\\alifa\\Documents\\CS2 Assignments\\assignments-alifayed1\\Final\\Q1\\courses.txt");

    if (ifs.fail()) {
        cerr << "Failed to open courses.txt\n";
        exit(0);
    }

    for(int i = 0; i < size; i++) {
        ifs >> courses[i];
    }

    ifs.close();
}

void printCourses(int size) {
    cout << "Index\tID\tName\n\n";
    for(int i = 0; i < size; i++) {
        cout << i << "\t" << courses[i].getID() << "\t" << courses[i].getName() << endl;
    }
    cout << endl;
}