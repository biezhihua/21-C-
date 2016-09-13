//
// Created by biezhihua on 16-9-13.
//

#include <iostream>

using namespace std;

void returnSquare(int &number) {
    number *= number;
}

int main() {
    cout << "Enter a number you wish to square:";
    int number = 0;
    cin >> number;

    returnSquare(number);

    cout << "Square is :" << number << endl;

    return 0;
}



