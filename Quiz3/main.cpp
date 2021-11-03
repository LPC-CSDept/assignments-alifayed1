#include "Numbers.cpp"

#include <cstdlib>
#include <ctime>

using namespace std;

int findMax(Numbers[], int);
void deDup(Numbers &, Numbers &);

int main() {
  srand(time(0));

  const int N = 5;

  Numbers numberset[] = {Numbers(1, 5), Numbers(2, 5), Numbers(3, 10), Numbers(4, 5), Numbers(5, 7)};

  for (int i = 0; i < N; i++) {
    cout << "Number Set ID " << numberset[i].getID() << "\t\n";
    numberset[i].printAll();
    cout << "\n";
  }

  int id = findMax(numberset, N);

  cout << "The set ID that has max difference is " << id << "\t";
  cout << "The diff is " << numberset[id-1].getMax() - numberset[id-1].getMin() << endl;

  deDup(numberset[2], numberset[3]);
  cout << "ID 3 - ID 4\n ";
  numberset[2].printAll();

  // const int N = 5;
  // srand(time(0));
  // Numbers numberset[] = {Numbers(1, 5), Numbers(2, 5), Numbers(3, 10), Numbers(4, 5), Numbers(5, 7)};

  // for (int i = 0; i < N; i++)
  // {
  //   cout << "Number Set ID " << numberset[i].getID() << "\t\n";
  //   numberset[i].printAll();
  // }

  // int id = findMax(numberset, N);

  // cout << "The set ID that has max difference is " << id << "\t";
  // cout << "The diff is " << numberset[id].getMax() - numberset[id].getMin() << endl;

  // deDup(numberset[2], numberset[3]);

  // cout << "ID 3 - ID 4\n ";

  // numberset[2].printAll();
  // deDup(numberset[0], numberset[1]);

  // cout << "ID 1 - ID 2\n";

  // numberset[0].printAll();
}

int findMax(Numbers nums[], int size) {
  if(size > 5) {
    cout << "Error: Size is too large\n";
    throw -1;
  } else {
    int max = -1;
    int largestId = -1;
    for(int i = 0; i < size; i++) {
      int currMax = nums[i].getMax() - nums[i].getMin();
      if(currMax > max) {
        max = currMax;
        largestId = nums[i].getID();
      }
    }
    return largestId;
  }
}

void deDup(Numbers& firstSet, Numbers& secondSet) {
  for(int i = 0; i < secondSet.getSize()-1; i++) {
    firstSet.deleteElm(secondSet.getElm(i));
  }
}