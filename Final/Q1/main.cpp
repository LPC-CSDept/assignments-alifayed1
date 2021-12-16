#include <iostream>
#include <fstream>
#include "Course.cpp"

using namespace std;

void fillCourseArray(Course[], int);
int binarySearch(Course[], int, int);

int main() {
    int size = 10;
    Course courses[size];

    fillCourseArray(courses, size);

    cout << "Index\tID\tName\n\n";
    for(int i = 0; i < size; i++) {
        cout << i << "\t" << courses[i].getID() << "\t" << courses[i].getName() << endl;
    }
    cout << endl;

    int target = 103;
    cout << "Locating " << target << "...\n";
    int index = binarySearch(courses, size, target);
    cout << "Found " << target << " at: " << index << endl;

    return 0;
}

void fillCourseArray(Course courses[], int size) {
    ifstream ifs;
    ifs.open("C:\\Users\\alifa\\Documents\\CS2 Assignments\\assignments-alifayed1\\Final\\Q1\\courses.txt");

    if (ifs.fail()) {
        cerr << "Failed to open courses.txt\n";
        exit(0);
    }

    for(int i = 0; i < size; i++) {
        ifs >> courses[i];
    }
}

int binarySearch(Course courses[], int size, int target) {
    int first, last, mid;
    first = 0;
    last = size-1;

    while(first <= last) {
        mid = last + ((first - last) / 2); // Safe way to calculate mid to prevent overflow
        if(courses[mid].getID() == target) {
        return mid;
        } else if(courses[mid].getID() > target) {
        last = mid - 1;
        } else {
        first = mid + 1;
        }
    }
    return -1;
}