#include "Course.hpp"

using namespace std;

Course::Course(int setID, string setName, int setCredits) {
    id = setID;
    name = setName;
    credits = setCredits;
}

Course::~Course() {

}

int Course::getID() const {
    return id;
}

string Course::getName() const {
    return name;
}

int Course::getCredits() const {
    return credits;
}

void Course::setID(int newID) {
    id = newID;
}

void Course::setName(string newName) {
    name = newName;
}

void Course::setCredits(int newCredits) {
    credits = newCredits;
}
