#ifndef COURSE_H
#define COURSE_H

#include <string>
#include <fstream>

using namespace std;

class Course {
    private:
        int id;
        string name;
        int credits;
    public:
        Course();
        Course(int, string, int);
        ~Course();

        int getID() const;
        string getName() const;
        int getCredits() const;

        void setID(int);
        void setName(string);
        void setCredits(int);

        friend istream& operator >> (istream& is, Course& course);
        friend ostream& operator << (ostream& os, Course& course);

        bool operator<(Course& rightObj) const { return this->id < rightObj.id; }
        bool operator<=(Course& rightObj) const { return this->id <= rightObj.id; }
        bool operator>(Course& rightObj) const { return this->id > rightObj.id; }
        bool operator>=(Course& rightObj) const { return this->id >= rightObj.id; }
        bool operator==(Course& rightObj) const { return this->id == rightObj.id; }
        bool operator!=(Course& rightObj) const { return this->id != rightObj.id; }
};

#endif