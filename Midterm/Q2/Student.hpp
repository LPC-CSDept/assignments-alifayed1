#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <fstream>

using namespace std;

class Student{
    private:
        string name;
        int id; 
        int scores[3];
    public:
        Student();
        Student(string, int, int[]);
        ~Student();

        string getName() const;
        int getID() const;
        int* getScores();

        void setName(string);
        void setID(int);
        void setScores(int[]);

        friend istream &operator >> (istream&, Student&);
        friend ostream &operator << (ostream&, Student&);
};

#endif