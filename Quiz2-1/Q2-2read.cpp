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
  ifs.open("Quiz2-1/students.bin");

  if (ifs.fail()) {
    cerr << "Failed to open students.bin\n";
    exit(0);
  }

  ifs.read((char*)&(*s), sizeof(*s));

  double avg = (s->scores[0] + s->scores[1] + s->scores[2]) / NUM_SCORES;
  if(avg > 85) {
    cout << "\tScore is greater than 85, printing student's information...\n";
    cout << "ID: " << s->sid << endl;
    cout << "Name: " << s->sname << endl;
    cout << "Scores: ";
    for(int i = 0; i < NUM_SCORES; i++) {
      cout << s->scores[i] << " ";
    }
    cout << "\n";
  }
  return 0;
}