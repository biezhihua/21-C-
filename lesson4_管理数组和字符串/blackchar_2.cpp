//
// Created by biezhihua on 16-9-11.
//

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    cout << "Enter a word Not longer than 20 characters :" << endl;

    char userInput[21] = {'\0'};

    cin >> userInput;

    cout << "Length of yout input was:" << strlen(userInput) << endl;

    return 0;
}

