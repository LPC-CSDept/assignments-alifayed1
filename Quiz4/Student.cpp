#include "Student.hpp"

using namespace std;

Student::Student() {
  id = 0;
  sname = "";
  grade = 'F';
  scores = 0;
}

Student::Student(int setId, string setName, char setGrade, double setScores) {
  id = setId;
  sname = setName;
  grade = setGrade;
  scores = setScores;
}

int Student::getID() const {
    return id;
}

string Student::getName() const {
    return sname;
}

char Student::getGrade() const {
    return grade;
}

double Student::getScores() const {
    return scores;
}

void Student::setID(int setId) {
    id = setId;
}

void Student::setName(string setName) {
    sname = setName;
}

void Student::setGrade(char setGrade){
    grade = setGrade;
}

void Student::setScores(double setScores){
    scores = setScores;
}

void Student::setStudent(int setId, string setName, char setGrade, double setScores) {
  id = setId;
  sname = setName;
  grade = setGrade;
  scores = setScores;
}

