#include "Student.hpp"

Student::Student() {

}

Student::~Student() {
  
}

int Student::getSid() const {
  return sid;
}

string Student::getSname() const {
  return sname;
}

double Student::getScores(int i) const {
  return scores[i];
}

double Student::getSum() const {
  int sum = 0;
  for(int i = 0; i < 3; i++) {
    sum += scores[i];
  }
  return sum;
}

double Student::getAvg() const {
  return getSum() / 3.0;
}

void Student::setSid(int id) {
  sid = id;
}

void Student::setSname(string name) {
  sname = name;
}

void Student::setScores(int i, int score) {
  scores[i] = score;
}