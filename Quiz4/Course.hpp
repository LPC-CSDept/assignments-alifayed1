#ifndef COURSE_H
#define COURSE_H

#include "Student.hpp"
#include <string>
#include <iostream>
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
    ~Course();

    string getCName() const;
    int getCredits() const;
    string getSemester() const;
    vector<Student> getStudent() const;
    int getNumCourses() const;

    void setCName(string);
    void setCredits(int);
    void setSemester(string);
    void setStudent(vector<Student>);
    void addStudent(Student&);
    void setCourse(string, int, string, vector<Student>);

    friend istream& operator >> (istream& is, Course& course){
      is >> course.cname >> course.credits >> course.semester;
      for (int i=0; i < course.student.size(); i++) {
        int id;
        string name;
        char grade;
        double scores;
        is >> id >> name >> grade >> scores;
        course.student[i].setID(id);
        course.student[i].setName(name);
        course.student[i].setGrade(grade);
        course.student[i].setScores(scores);
      }
      return is;
    }

    friend ostream& operator << (ostream& os, Course& course) {
      os << course.cname << "\n" << course.credits << "\n" << course.semester << "\n";
      os << course.student.size() << endl;
      for (int i=0; i < course.student.size(); i++) {
        os << course.student[i].getID() << " " << course.student[i].getName() <<
         " " << course.student[i].getGrade() << " " << course.student[i].getScores() << endl;
      }
      os << endl;
      return os;
    }
};

#endif