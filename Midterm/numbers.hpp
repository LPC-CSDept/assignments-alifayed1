#ifndef NUMBERS_H
#define NUMBERS_H

#include <vector>

using namespace std;

template<typename T>
class Numbers {
    private:
        int id;
        vector<T> values;
        static int numOfObjects;
    public:
        Numbers();
        Numbers(int, int);
        ~Numbers();

        int getID() const;
        vector<T> getValues() const;

        void setID(int);
        void setValues(vector<T>)

        static int getNumOfObjects() const;

        friend printNumbers(Numbers n);
        bool operator>(Numbers& rightObj) const;
};

#endif