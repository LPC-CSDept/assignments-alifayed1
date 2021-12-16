#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H

#include "Employee.hpp"
#include <string>

using namespace std;

class ProductionWorker : public Employee {
    private:
        int shift;
        double hourlyWage;
    public:
        ProductionWorker();
        ProductionWorker(string, int, string, int, double); 
        ~ProductionWorker();

        int getShift() const;
        double getHourlyWage() const;

        void setShift(int);
        void setHourlyWage(double);
};

#endif