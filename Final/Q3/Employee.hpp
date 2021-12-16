#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

using namespace std;

class Employee {
    protected:
        string name;
        int number;
        string hireDate;
    public:
        Employee();
        Employee(string, int, string);
        ~Employee();

        string getName() const;
        int getNumber() const;
        string getHireDate() const;

        void setName(string);
        void setNumber(int);
        void setHireDate(string);
};

#endif