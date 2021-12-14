#include "Numbers.cpp"

using namespace std;

int main() {
  Numbers n1(5);
  cout << "N1: " << n1 << endl;
  cout << "Enter 5 new numbers: " << endl;
  cin >> n1;
  cout << "New N1: " << n1;
  
  return 0;
}