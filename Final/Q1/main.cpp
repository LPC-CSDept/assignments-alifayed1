#include <iostream>
#include <fstream>
#include "Course.cpp"

using namespace std;

int fillCourseArray();

int main() {
    fillCourseArray();
    return 0;
}

int fillCourseArray() {
    int size = 10;
    Course arr[size];

    ifstream ifs;
    ifs.open("Final/Question One/courses.txt");

    if (ifs.fail()) {
        cerr << "Failed to open courses.txt\n";
        exit(0);
    }

    for(int i = 0; i < 10; i++) {
        cout << i << endl;
    }
    return 1;
}