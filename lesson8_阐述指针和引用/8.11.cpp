//
// Created by biezhihua on 16-9-13.
//

#include <iostream>

using namespace std;

int main() {

    int myNumbers[5];

    int *pNumbers = myNumbers;

    cout << "pNumbers = 0x" << hex << pNumbers << endl;

    cout << "&MyNumbers[0] = 0x" << hex << &myNumbers[0] << endl;

    return 0;
}
