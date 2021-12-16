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

        friend ProductionWorker findHighestPaidEmployee(ProductionWorker[], int);
        friend istream& operator >> (istream& is, ProductionWorker& course);
        friend ostream& operator << (ostream& os, ProductionWorker& course);

        bool operator<(ProductionWorker& rightObj) const { return this->hourlyWage < rightObj.hourlyWage; }
        bool operator<=(ProductionWorker& rightObj) const { return this->hourlyWage <= rightObj.hourlyWage; }
        bool operator>(ProductionWorker& rightObj) const { return this->hourlyWage > rightObj.hourlyWage; }
        bool operator>=(ProductionWorker& rightObj) const { return this->hourlyWage >= rightObj.hourlyWage; }
        bool operator==(ProductionWorker& rightObj) const { return this->hourlyWage == rightObj.hourlyWage; }
        bool operator!=(ProductionWorker& rightObj) const { return this->hourlyWage != rightObj.hourlyWage; }
};

#endif