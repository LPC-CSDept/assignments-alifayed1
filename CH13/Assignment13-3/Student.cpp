#include "Student.hpp"

Dob::Dob() {
  month = 1;
  day = 1;
}

Dob::Dob(int setMonth, int setDay) {
  month = setMonth;
  day = setDay;
}

Dob::~Dob() {
  
}

int Dob::getMonth() const {
  return month;
}

int Dob::getDay() const {
  return day;
}

void Dob::printDate() {
  cout << "Month: " << month << " Day: " << day << endl;
}

void Dob::setDob(Dob dob) {
  month = dob.getMonth();
  day = dob.getDay();
}

void Dob::setMonth(int setMonth) {
  month = setMonth;
}

void Dob::setDay(int setDay) {
  day = setDay;
}

Student::Student() {

}

Student::Student(string name, int id, Dob setdob) {
  sname = name;
  sid = id;
  dob = setdob;
}

Student::~Student() {
  
}

int Student::getId() const {
  return sid;
}

string Student::getSname() const {
  return sname;
}

Dob Student::getDob() const {
  return dob;
}

void Student::setSname(string name) {
  sname = name;
}

void Student::setId(int id) {
  sid = id;
}

void Student::setDob(Dob setDob) {
  dob = setDob;
}