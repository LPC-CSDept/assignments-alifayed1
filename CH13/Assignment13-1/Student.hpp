#ifndef STUDENT_H
#define STUDENT_H

#include <string>

using namespace std;

class Student {
  private:
    int sid;
    string sname;
    double scores[3];

  public:
    Student();
    ~Student();
    int getSid() const;
    string getSname() const;
    double getScores(int) const;
    double getSum() const;
    double getAvg() const;
    void setSid(int);
    void setSname(string);
    void setScores(int, int); 
};

#endif