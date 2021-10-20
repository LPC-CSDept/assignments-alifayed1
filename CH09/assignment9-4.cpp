#include <iostream>
#include <fstream>

using namespace std;

const int 	MAX_LEN = 20;
const int 	NUM_SCORES = 3;

struct Students {
	int sid;
	char sname[MAX_LEN];
	double scores[NUM_SCORES];
};

Students *makeStudents(int);
void printStudents(Students * const, int);
void sortStudents(Students * const, int);

int main()
{
    const int N=10;
    Students *ptr = nullptr;
    ptr = makeStudents(N);
    printStudents(ptr, N);
    sortStudents(ptr, N);
    cout << "\nSorted \n\n";
    printStudents(ptr, N);
}

Students *makeStudents(int n)
{
  ifstream ifs;
  Students *s = new Students [n];

  ifs.open("CH09/students.txt");
  if (ifs.fail())
  {
    cerr << "Failed to open students.txt\n";
    exit(0);
  }
  for(int i=0;i<n; i++)
  {
    ifs >> (s+i)->sid >> (s+i)->sname;
    for(int j=0; j<NUM_SCORES; j++) {
      ifs >> (s+i)->scores[j] ;
    }
    if (ifs.fail())
    {
      cerr << "Failed to read students.txt\n";
      exit(0);
    }
  }
  return s;
}

void printStudents(Students * const s, int n) {
  for(int i = 0; i < n; i++) {
    cout << "ID: " << (s+i)->sid << " - Name: " << (s+i)->sname << "\t";
    for(int j=0; j<NUM_SCORES; j++) {
      cout <<  (s+i)->scores[j] << "\t";
    }
		cout << endl;
  }
}

void sortStudents(Students * const s, int n)
{
  for(int i=0; i < n-1; i++)
	{
		for(int j=0; j<n-i-1; j++) {
      int sum1=0, sum2=0;
      for(int k=0;k<NUM_SCORES; k++) {
        sum1 += (s+j)->scores[k];
        sum2 += (s+j+1)->scores[k];
      }
			if (sum1 > sum2) {
        swap(*(s+j), *(s+j+1));
      }
		}
	}
}