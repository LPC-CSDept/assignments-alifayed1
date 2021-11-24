#include "Course.hpp"

using namespace std;

Course::Course(){
    cname="";
    credits=0;
    semester="";
    NUM_COURSES++;
}

Course::Course(string setName, int setCredits, string setSemester, vector<Student> setStudent){
    cname = setName;
    credits = setCredits;
    semester = setSemester;
    student = setStudent;
    NUM_COURSES++;
}

int Course::NUM_COURSES = 0;

string Course::getCName() const {
    return cname;
}

int Course::getCredits() const {
    return credits;
}

string Course::getSemester() const {
    return semester;
}

vector<Student> Course::getStudent() const {
    return student;
}

int Course::getNumCourses() const{
    return NUM_COURSES;
}

void Course::setCName(string name) {
    cname = name;
}

void Course::setCredits(int cred){
    credits = cred;
}

void Course::setSemester(string sem){
    semester = sem;
}

void Course::setStudent(vector <Student> s){
    student=s;
}

void Course::setCourse(string setName, int setCredits, string setSemester, vector<Student> setStudent){
    cname = setName;
    credits = setCredits;
    semester = setSemester;
    student = setStudent;
    NUM_COURSES++;
}

void Course::addStudent(Student &s){
    student.push_back(s);
}