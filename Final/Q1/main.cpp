#include <iostream>
#include <fstream>
#include "Course.cpp"

using namespace std;

void fillCourseArray(Course*, int);

int main() {
    int size = 10;
    Course courses[size];

    fillCourseArray(courses, size);
    
    return 0;
}

void fillCourseArray(Course* courses, int size) {
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