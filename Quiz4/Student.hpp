#ifndef STUDENT_H
#define STUDENT_H

#include <string>

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

#endif