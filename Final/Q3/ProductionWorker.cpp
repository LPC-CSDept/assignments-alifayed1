#include "ProductionWorker.hpp"
#include <iostream>

using namespace std;

ProductionWorker::ProductionWorker() {
    this->name = "";
    this->number = 0;
    this->hireDate = "";

    shift = 0;
    hourlyWage = 0.0;
}

ProductionWorker::ProductionWorker(string name, int number, string hireDate, int newShift, double newHourlyWage) {
    this->name = name;
    this->number = number;
    this->hireDate = hireDate;

    shift = newShift;
    hourlyWage = newHourlyWage;
}

ProductionWorker::~ProductionWorker() {

}

int ProductionWorker::getShift() const {
    return shift;
}

double ProductionWorker::getHourlyWage() const {
    return hourlyWage;
}

void ProductionWorker::setShift(int newShift) {
    shift = newShift;
}

void ProductionWorker::setHourlyWage(double newHourlyWage) {
    hourlyWage = newHourlyWage;
}

/**
 * Finds the highest paid employee
 *
 * The algorithm starts off with the first worker as a base and saved in a variable (max). 
 * Then iterates through the array one by one and compares the wage of the current index
 * with (max) and updates (max) if the current wage is higher
 *
 * @param workers ProductionWorker array
 * @param size Size of the array
 * @return ProductionWorker with the highest wage.
 */
ProductionWorker findHighestPaidEmployee(ProductionWorker workers[], int size) {
    ProductionWorker max = workers[0];

    cout << "Overloaded (>) operator output\n\n";
    for(int i = 0; i < size; i++) {
        if(workers[i] > max) {
            cout << workers[i].getName() << " > " << max.getName() << endl;
            max = workers[i];
        }
    }
    cout << "\n";
    return max;
}

istream& operator >> (istream& is, ProductionWorker& worker) {
    string name;
    int number;
    string hireDate;

    is >> name >> number >> hireDate >> worker.shift >> worker.hourlyWage;

    worker.setName(name);
    worker.setNumber(number);
    worker.setHireDate(hireDate);

    return is;
}

ostream& operator << (ostream& os, ProductionWorker& worker) {
    os << "Name: " << worker.getName() << endl;
    os << "Number: " << worker.getNumber() << endl;
    os << "Hire Date: " << worker.getHireDate() << endl;
    os << "Shift: " << (worker.getShift() == 1 ? "Day" : "Night") << endl;
    os << "Hourly Wage: " << worker.getHourlyWage() << endl << endl;
    return os;
}