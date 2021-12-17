#include "Student.hpp"

Student::Student() {
    name = "";
    id = 0;
    scores[0] = 0;
    scores[1] = 0;
    scores[2] = 0;
}

Student::Student(string name, int id, int scores[]) {
    this->name = name;
    this->id = id;
    for(int i = 0; i < 3; i++) {
        this->scores[i] = scores[i];
    }
}

Student::~Student() {
    
}

