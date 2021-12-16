#include <iostream>
#include <fstream>
#include <ctime>
#include "Course.cpp"

using namespace std;

void fillCourseArray(Course[], int);
void sortByID(Course[], int);
int binarySearchIterative(Course[], int, int);
int binarySearchRecursive(Course[], int, int, int);

int main() {
    srand(time(0));
    int size = 10;
    Course courses[size];

    fillCourseArray(courses, size);
    sortByID(courses, size);

    cout << "Index\tID\tName\n\n";
    for(int i = 0; i < size; i++) {
        cout << i << "\t" << courses[i].getID() << "\t" << courses[i].getName() << endl;
    }
    cout << endl;

    int target = rand() % (109 + 1 - 100) + 100;
    cout << "Locating " << target << " iteratively...\n";
    int index = binarySearchIterative(courses, size, target);
    cout << "Found " << target << " at index: " << index << " (" << courses[index].getName() << ")" << endl << endl;

    target = rand() % (109 + 1 - 100) + 100;
    cout << "Locating " << target << " recursively...\n";
    index = binarySearchRecursive(courses, 0, size-1, target);
    cout << "Found " << target << " at index: " << index << " (" << courses[index].getName() << ")" << endl;

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

    ifs.close();
}

void sortByID(Course courses[], int size) {
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            if (courses[i].getID() < courses[j].getID()){
                swap(courses[j], courses[i]);
            }
        }
    }
}

int binarySearchIterative(Course courses[], int size, int target) {
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

int binarySearchRecursive(Course courses[], int low, int high, int target) {
    if(low > high) {
        return -1;
    }

    int mid = low + ((high - low) / 2); // Safe way to calculate mid to prevent overflow
    if(target == courses[mid].getID()) {
        return mid;
    } else if (target < courses[mid].getID()) {
        return binarySearchRecursive(courses, low, mid - 1, target);
    } else {
        return binarySearchRecursive(courses, mid + 1, high, target);
    }
}