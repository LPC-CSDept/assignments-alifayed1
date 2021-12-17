#include "Student.cpp"
#include <fstream>
#include <iostream>

using namespace std;

void fillStudentArray(Student[]);

int main() {
    Student students[10];

    fillStudentArray(students);

    for(int i = 0; i < 10; i++) {
        cout << students[i] << endl;
    }
    return 0;
}

void fillStudentArray(Student students[]) {
    ifstream ifs;
    ifs.open("C:\\Users\\alifa\\Documents\\CS2 Assignments\\assignments-alifayed1\\Midterm\\Q2\\students.txt");

    if (ifs.fail()) {
        cerr << "Failed to open students.txt\n";
        exit(0);
    }

    for(int i = 0; i < 10; i++) {
        ifs >> students[i];
    }

    ifs.close();
}