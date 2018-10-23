
//
// Created by biezhihua on 2018/10/22.
//

#include <iostream>

using namespace std;

int main() {

    int *pTempreature;

    cout << "Is it sunny (y/n)?" << endl;
    char userInput = 'y';
    cin >> userInput;

    if (userInput == 'y') {
        pTempreature = new int;
        *pTempreature = 30;
    }

    cout << "Temperature is : " << *pTempreature;

    delete pTempreature;

    return 0;
}