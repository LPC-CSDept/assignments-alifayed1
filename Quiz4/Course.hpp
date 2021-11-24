#ifndef COURSE_H
#define COURSE_H

#include "Student.cpp"

#include <string>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class Course {
  private:
    string cname;
    int credits;
    string semester;
    vector<Student> student;
    static int NUM_COURSES;

  public:
    Course();
    Course(string, int, string, vector<Student>);

    string getCName() const;
    int getCredits() const;
    string getSemester() const;
    vector<Student> getStudent() const;
    static int getNumCourses();

    void setCName(string);
    void setCredits(int);
    void setSemester(string);
    void setStudent(vector<Student>);
    void addStudent(Student&);
    void setCourse(string, int, string, vector<Student>);

    friend istream& operator >> (istream& is, Course& course);
    friend ostream& operator << (ostream& os, Course& course);
};

#endif