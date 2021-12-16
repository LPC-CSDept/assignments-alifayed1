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