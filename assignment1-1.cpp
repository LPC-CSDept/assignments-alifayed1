#include <iostream>
#include <fstream>

using namespace std;

struct Student {
  int id;
  string name;
  double score[2];
  double sum;
  double average;
};

int main() {
  ifstream istream;
  ofstream ostream;
  Student student;

  istream.open("students.txt");
  ostream.open("students.bin");

  for(int i = 0; i < 10; i++) {
    istream >> student.id;
    istream >> student.name;
    istream >> student.score[0];
    istream >> student.score[0];
    student.sum = student.score[0] + student.score[1];
    student.average = student.sum / 2;
  }

  for(int i = 0; i < 10; i++) {
    cout << "ID: " << student.id << endl;
    cout << "Name: " << student.name << endl;
    cout << "Sum: " << student.sum << endl;
    cout << "Average: " << student.average << endl;
  }

  for(int i = 0; i < 10; i++) {
    ostream.write((char*)&student, sizeof(student));
  }

  return 0;
}