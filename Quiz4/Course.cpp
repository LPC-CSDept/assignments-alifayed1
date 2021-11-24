#include "Course.hpp"

using namespace std;

int Course::NUM_COURSES = 0;

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

int Course::getNumCourses() {
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

istream& operator >> (istream& is, Course& course) {
  int numStudents;
  is >> course.cname >> course.credits >> course.semester;
  is >> numStudents;

  for (int i=0; i < numStudents; i++) {
    int id;
    string name;
    char grade;
    double scores;
    is >> id >> name >> grade >> scores;
    Student s(id, name, grade, scores);
    course.student.push_back(s);
  }
  return is;
}

ostream& operator << (ostream& os, Course& course) {
  os << "Name: " << course.cname << "\t" << "Credits: " << course.credits << "\t"  << "Semester: " <<  course.semester << "\n"; 
  os << course.student.size() << endl;
  for (int i=0; i < course.student.size(); i++) {
    os << course.student[i].getID() << " " << course.student[i].getName() <<
    " " << course.student[i].getGrade() << " " << course.student[i].getScores() << endl;
  }
  os << endl;
  return os;
}

