//
// Created by biezhihua on 16-9-13.
//

#include <iostream>

using namespace std;

void calculateSquare(const int &number, int &result) {
    result = number * number;
}

int main() {
    cout << "Enter a number you wish to square:";
    int number = 0;
    cin >> number;

    int square = 0;
    calculateSquare(number, square);

    cout << number << "^2 = " << square << endl;
}

