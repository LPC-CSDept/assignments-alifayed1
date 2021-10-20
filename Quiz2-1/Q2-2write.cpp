#include <iostream>
#include <fstream>

using namespace std;

const int LEN_NAME = 20;
const int NUM_SCORES = 3;

struct Student {
  int sid;
  char sname[LEN_NAME];
  double scores[NUM_SCORES];
};

int main() {
  Student* s = new Student;

  ifstream ifs;
  ofstream ofs;

  ifs.open("Quiz2-1/students.txt");
  ofs.open("Quiz2-1/students.bin");

  if(ifs.fail()) {
    cerr << "Failed to read students.txt" << endl;
  }
  ifs >> (s)->sid >> (s)->sname;
  for(int j=0; j<NUM_SCORES; j++) {
      ifs >> (s)->scores[j] ;
  }

  cout << s->sid << " " << s->sname << " ";
  for(int i = 0; i < NUM_SCORES; i++) {
    cout << s->scores[i] << " ";
  }
  cout << "\n";

  ofs.write((char*)&s, sizeof(s));
  return 0;
}