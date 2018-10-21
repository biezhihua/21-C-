//
// Created by biezhihua on 2018/10/21.
//

#include <iostream>

using namespace std;

void DisplayArray(int numbers[], int length) {
    for (int index = 0; index < length; index++) {
        cout << numbers[index] << " ";
    }
    numbers[3] = 100;
    cout << endl;
}

void DisplayArray(char characters[], int length) {
    for (int index = 0; index < length; index++) {
        cout << characters[index] << " ";
    }
    characters[0] = 'b';
    cout << endl;
}

int main() {
    int myNumbers[4] = {24, 58, -1, 245};
    DisplayArray(myNumbers, 4);
    DisplayArray(myNumbers, 4);

    char myStatement[7] = {'h', 'e', 'l', 'l', 'o', '!', '\0'};
    DisplayArray(myStatement, 7);
    DisplayArray(myStatement, 7);
}