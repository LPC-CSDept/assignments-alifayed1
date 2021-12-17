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