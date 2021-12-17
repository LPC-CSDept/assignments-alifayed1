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
    Numbers<int> n2(110, 10);

    printNumbers(n);
    printNumbers(n2);

    cout << "Is n > n2? (1 = true. 0 = false): " << (n > n2) << endl;

    return 0;
}