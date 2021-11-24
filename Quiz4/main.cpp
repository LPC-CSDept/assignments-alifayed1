#include "Course.cpp"

#include <iostream>
#include <fstream>

using namespace std;

int main() {
  ifstream ifs;
  ifs.open("Quiz4/coursestudents.txt");

  Course courses[4];
        
  for (int i=0; i < 4; i++){
    ifs >> courses[i];
    cout << courses[i] << endl;
  }

  ifs.open("addstudents.txt");
  while (/*for all courses*/) {
    course_id = Find the course id to add the student
    for (/*all students in the course*/) {
      read each student information  and cook the Struct student
      s.setStudent(id, sname, grade, sc);
      courses[course_id].addStudent(s);
      }
      cout << "Updated Students list for the Course " << cname << endl;
      cout << courses[course_id] << endl;
  } 
  return 0;
}