#include <iostream>
#include <ctime>
#include "Numbers.cpp"

using namespace std;

void printNumbers(Numbers<int> nums) {
    cout << "Nums\n";
    for(int i = 0; i < nums.getValues().size(); i++) {
        cout << nums.getValues()[i] << endl;
    }
    cout << "\n";
}

int main() {
    srand(time(0));

    Numbers<int> n(100, 10);
    printNumbers(n);
    return 0;
}