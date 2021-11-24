#include "Course.cpp"

#include <iostream>
#include <fstream>

using namespace std;

int main() {
  ifstream ifs;
  ifs.open("Quiz4/coursestudents.txt");

  Course courses[4];
        
  for (int i=0; i < 4; i++){
    ifs >> courses[i];
    cout << courses[i] << endl;
  }

  ifs.close();

  ifs.open("Quiz4/addstudents.txt");
  for(int i = 0; i < 2; i++) {
    string cname;
    int count;

    ifs >> cname;
    ifs >> count;

    int course_id;

    for(int j = 0; j < 4; j++) {
      if(cname == courses[j].getCName()) {
        course_id = j;
        for (int k = 0; k < count; k++) {
          int id;
          string name;
          char grade;
          double scores;
          ifs >> id >> name >> grade >> scores;
          Student s(id, name, grade, scores);
          courses[course_id].addStudent(s);
        }
        cout << "Updated Students list for the Course " << cname << endl;
        cout << courses[course_id] << endl;
      }
    }
  } 
  return 0;
}