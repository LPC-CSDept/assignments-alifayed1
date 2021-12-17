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
        Numbers(int, vector<T>, int);
        ~Numbers();

        static int getNumOfObjects() const;
        bool operator>(Numbers& rightObj) const;
};

#endif