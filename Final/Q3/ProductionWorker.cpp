#include "ProductionWorker.hpp"

using namespace std;

ProductionWorker::ProductionWorker() {
    shift = 0;
    hourlyWage = 0;
}

ProductionWorker::ProductionWorker(string name, int number, string hireDate, int newShift, double newHourlyWage) {
    setName(name);
    setNumber(number);
    setHireDate(hireDate);

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

ProductionWorker findHighestPaidEmployee(ProductionWorker workers[], int size) {
    ProductionWorker max = workers[0];

    for(int i = 0; i < size; i++) {
        if(workers[i] > max) {
            max = workers[i];
        }
    }
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
    os << "Name: " << worker.getName() << endl;
    return os;
}