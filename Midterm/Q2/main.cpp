#include "Student.cpp"
#include <fstream>
#include <iostream>

using namespace std;

void fillStudentArray(Student[]);
void sortStudents(Student[]);
int searchStudent(Student[], int);

int main() {
    Student students[10];

    fillStudentArray(students);

    for(int i = 0; i < 10; i++) {
        cout << students[i] << endl;
    }

    sortStudents(students);

    int target = 84092;
    cout << "Locating student with ID: " << target << endl;
    int index = searchStudent(students, target);
    if(index != -1) {
        cout << "Found Student with ID: " << target << endl;
        cout << "Printing info...\n\n";
        cout << students[index];
    } else {
        cout << "Student with ID: " << target << " was not found\n";
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

void sortStudents(Student students[]) {
    int size = 10;
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            if (students[i].getID() < students[j].getID()){
                swap(students[j], students[i]);
            }
        }
    }
}

int searchStudent(Student students[], int target) {
    int first, last, mid, size;
    size = 10;
    first = 0;
    last = size-1;

    while(first <= last) {
        mid = last + ((first - last) / 2); // Safe way to calculate mid to prevent overflow
        if(students[mid].getID() == target) {
            return mid;
        } else if(students[mid].getID() > target) {
            last = mid - 1;
        } else {
            first = mid + 1;
        }
    }
    return -1;
}