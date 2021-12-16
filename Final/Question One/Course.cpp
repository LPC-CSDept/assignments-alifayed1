#include "Course.hpp"

using namespace std;

Course::Course() {
    id = 0;
    name = "";
    credits = 0;
}

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

istream& operator >> (istream& is, Course& course) {
    is >> course.id >> course.name >> course.credits;
    return is;
}

ostream& operator << (ostream& os, Course& course) {
    os << "Course ID\tCourse Name\tCourse Credits\n";
    os << course.id << "\t" << course.name << "\t" << course.credits << "\n";
    return os;
}
