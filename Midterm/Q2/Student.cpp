#include "Student.hpp"

Student::Student() {
    name = "";
    id = 0;
    scores[0] = 0;
    scores[1] = 0;
    scores[2] = 0;
}

Student::Student(string name, int id, int* scores) {
    this->name = name;
    this->id = id;
    for(int i = 0; i < 3; i++) {
        this->scores[i] = scores[i];
    }
}

Student::~Student() {
    
}

string Student::getName() const {
    return this->name;
}

int Student::getID() const {
    return this->id;
}

int* Student::getScores() const {
    return this->scores;
}

void Student::setName(string name) {
    this->name = name;
}

void Student::setID(int id) {
    this->id = id;
}

void Student::setScores(int* scores) {
    for(int i = 0; i < 3; i++) {
        this->scores[i] = scores[i];
    }
}