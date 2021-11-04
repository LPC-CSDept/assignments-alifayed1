#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <iostream>

using namespace std;

class Dob {
  private:
    int month;
    int day;
  public:
    Dob();
    Dob(int, int);
    ~Dob();
    int getMonth() const;
    int getDay() const;
    void printDate();
    void setDob(Dob);
    void setMonth(int);
    void setDay(int);
};

class Student {
  private:
    int sid;
    string sname;
    Dob dob;
  
  public:
    Student();
    Student(string, int, Dob);
    ~Student();
    int getId() const;
    string getSname() const;
    Dob getDob() const;
    void setSname(string);
    void setId(int);
    void setDob(Dob);
};

#endif