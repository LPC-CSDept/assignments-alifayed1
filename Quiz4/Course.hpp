#ifndef COURSE_H
#define COURSE_H

#include <string>
#include <iostream>

using namespace std;

class Student {
  private:
    int id;
    string sname;
    char grade;
    double scores;
  
  public:
    Student();
    Student(int, string, char, double);
    ~Student();

    int getID() const;
    string getName() const;
    char getGrade() const;
    double getScores() const;

    void setID(int);
    void setName(string);
    void setGrade(char);
    void setScores(double);
    void setStudent(int, string, char, double);
};

class Course {
  private:
    string cname;
    int credits;
    string semester;
    vector<Student> student;

  public:
    Course();
    Course(string, int, string, vector<Student>);
    ~Course();

    string getCName() const;
    int getCredits() const;
    string getSemester() const;
    vector<Student> getStudent() const;

    void setCName(string);
    void setCredits(int);
    void setSemester(string);
    void setStudent(vector<Student>);
    void addStudent(Student&);
    void setCourse(string, int, string, vector<Student>);
};

#endif