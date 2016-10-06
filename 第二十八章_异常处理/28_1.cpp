//
// Created by biezhihua on 2016/10/6.
//


#include <iostream>

using namespace std;

int main() {
    cout << "Enter number of intergers you wish to reserve:";
    try {
        int input = 0;
        cin >> input;

        int *pReservedInts = new int[input];
        delete[] pReservedInts;
    } catch (...) {
        cout << "Exception enocountered. Got to end, sorry~" << endl;
    }

    return 0;
}

