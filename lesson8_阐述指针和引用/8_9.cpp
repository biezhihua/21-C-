//
// Created by biezhihua on 16-9-12.
//

#include <iostream>

using namespace std;

int main() {

    cout << "How many integers you wish to enter?";
    int inputNums = 0;
    cin >> inputNums;

    int *pNumbers = new int[inputNums];


    cout << "Successfully allocated memory for " << inputNums << " integers " << endl;

    for (int index = 0; index < inputNums; ++index) {
        cout << "Enter number " << index << ":";
        cin >> *(pNumbers + index);
    }

    cout << "Displaying all numbers input: " << endl;
    int *pCopy = pNumbers;
    for (int index = 0; index < inputNums; ++index) {
        cout << *(pCopy + index) << " ";
    }

    cout << endl;

    delete[] pNumbers;

    return 0;
}

