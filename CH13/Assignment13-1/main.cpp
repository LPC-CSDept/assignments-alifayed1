#include <iostream>
#include "Student.cpp"

using namespace std;

int main() {
  Student ali;

  ali.setSname("ali");
  ali.setSid(1071136);
  ali.setScores(0, 100);
  ali.setScores(1, 91);
  ali.setScores(2, 94);

  cout << "Name: " << ali.getSname() << endl;
  cout << "ID: " << ali.getSid() << endl;
  cout << "Score sum: " << ali.getSum() << endl;
  cout << "Score avg: " << ali.getAvg() << endl;

  return 0;
}