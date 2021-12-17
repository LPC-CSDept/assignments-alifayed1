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

    int target;
    cout << "Enter an ID to search: ";
    cin >> target;

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
            if (students[i].getID() > students[j].getID()){
                swap(students[j], students[i]);
            }
        }
    }
}

/**
 * Iterative binary search
 *
 * After the array is sorted, the function locates the middle value and checks if
 * it is the target, if not, it splits the array in half based on whether or not
 * the current value is greater or smaller than the target. The loop continues
 * until a value is found. If no value is found at the end of the loop, 
 * -1 is returned.
 *
 * @param students Students array
 * @param target Student ID
 * @return Index of target.
 */
int searchStudent(Student students[], int target) {
    int first, last, mid, size;
    size = 10;
    first = 0;
    last = size-1;

    while(first <= last) {
        mid = last + ((first - last) / 2); // Safe way to calculate mid to prevent overflow
        if(students[mid].getID() == target) {
            return mid;
        } else if(students[mid].getID() < target) {
            last = mid - 1;
        } else {
            first = mid + 1;
        }
    }
    return -1;
}