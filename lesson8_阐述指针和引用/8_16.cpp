//
// Created by biezhihua on 16-9-13.
//
#include <iostream>

using namespace std;

int main() {

    int *pAge = new(nothrow) int[0x1fffffff];

    if (pAge) {
        delete[] pAge;
    }else {
        cout << "Memory allocation filed.Ending program"<<endl;
    }

    return 0;
}

