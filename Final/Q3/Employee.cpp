#include "Employee.hpp"

Employee::Employee() {
    name = "";
    number = 0;
    hireDate = "";
}

Employee::Employee(string setName, int setNumber, string setHireDate) {
    name = setName;
    number = setNumber;
    hireDate = setHireDate;
}

Employee::~Employee() {

}

string Employee::getName() const {
    return name;
}

int Employee::getNumber() const {
    return number;
}

string Employee::getHireDate() const {
    return hireDate;
}

void Employee::setName(string newName) {
    name = newName;
}

void Employee::setNumber(int newNumber) {
    number = newNumber;
}

void Employee::setHireDate(string newHireDate) {
    hireDate = newHireDate;
}