#include "Numbers.hpp"

template<typename T>
Numbers<T>::Numbers() {
    id = 0;
}

template<typename T>
Numbers<T>::Numbers(int setID, int randomElems) {
    id = setID;
    for(int i = 0; i < randomElems; i++) {
        int val = rand() % 100;
        values.push_back(val);
    }
}

template<typename T>
Numbers<T>::~Numbers() {

}

template<typename T>
int Numbers<T>::getID() const {
    return id;
}

template<typename T>
vector<T> Numbers<T>::getValues() const {
    return values;
}

template<typename T>
void Numbers<T>::setID(int newID) {
    id = newID;
}

template<typename T>
void Numbers<T>::setValues(vector<T> newValues) {
    values = newValues;
}

template<typename T>
int Numbers<T>::numOfObjects = 0;

template<typename T>
int Numbers<T>::getNumObjects(){
    return numOfObjects;
}

template<typename T>
bool Numbers<T>operator>(Numbers<T>& rightObj) const {
    int sumOne = 0;
    int sumTwo = 0;

    for(int i = 0; i < this->numOfObjects-1; i++) {
        sumOne += this->values[i];
    }
        for(int i = 0; i < rightObj.numOfObjects-1; i++) {
        sumTwo += rightObj.values[i];
    }
}

void printNumbers(Numbers<T> nums) {
    cout << "Nums\n";
    for(int i = 0; i < nums.getNumOfObjects()-1; i++) {
        cout << nums.getValues[i] << endl;
    }
    cout << "\n";
}