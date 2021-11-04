#include <iostream>
#include <fstream>
#include "Student.cpp"

using namespace std;

void sortStudent(Student[]);

int main() {
  ifstream ifs;
  const int SIZE = 10;
  string sname;
  int ID, month, day;
  Dob date;

  Student students[SIZE];
  
  ifs.open("CH13/Assignment13-3/studentsDOB.txt");
  if (ifs.fail()) {
    cerr << "File could not be opened\n";
    exit(0);
  }
  
  int i = 0;
  while (ifs >> sname >> ID >> month >> day) {
    date.setMonth(month);
    date.setDay(day);
    date.setDob(date);
    students[i].setSname(sname);
    students[i].setId(ID);
    students[i].setDob(date);
    i++;
  }
  
  sortStudent(students);
  
  for (int i = 0; i < SIZE; i++) {
    cout << "Name: " << students[i].getSname() << endl;
    cout << "ID: " << students[i].getId() << endl;
    Dob dob = students[i].getDob();
    dob.printDate();
    cout << "\n";
  }

  return 0;
}

void sortStudent(Student s[]) {
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10 - 1; j++) {
      if(s[j].getDob().getMonth() > s[j + 1].getDob().getMonth()) {
        swap(s[j], s[j+1]);
      } else if (s[j].getDob().getMonth() == s[j + 1].getDob().getMonth() 
      && s[j].getDob().getDay() > s[j + 1].getDob().getDay()) {
        swap(s[j], s[j+1]);
      }
    }
  }
}