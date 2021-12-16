#ifndef COURSE_H
#define COURSE_H

#include <string>

using namespace std;

class Course {
    private:
        int id;
        string name;
        int credits;
    public:
        Course(int, string, int);
        ~Course();

        int getID() const;
        string getName() const;
        int getCredits() const;

        void setID(int);
        void setName(string);
        void setCredits(int);
};

#endif