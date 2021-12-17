#include "Numbers.hpp"

template<typename T>
Numbers::Numbers() {
    id = 0;
}

template<typename T>
Numbers::Numbers(int setID, int randomElems) {
    id = setID;
    for(int i = 0; i < randomElems; i++) {
        int val = rand() % 100;
        values.push_back(val);
    }
}

template<typename T>
Numbers::~Numbers() {

}

