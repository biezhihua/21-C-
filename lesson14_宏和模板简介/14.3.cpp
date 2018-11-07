//
// Created by biezhihua on 2018/11/7.
//
#include <iostream>
#include <string>

using namespace std;


template<typename Type>

const Type &getMax(const Type &value1, const Type &value2) {
    if (value1 > value2) {
        return value1;
    }
    return value2;
}


template<typename Type>
void displayComparision(const Type &value1, const Type &value2) {
    cout << "GetMax(" << value1 << ", " << value2 << ")=";
    cout << getMax(value1, value2) << endl;
}

int main() {

    displayComparision(-101, 2001);

    displayComparision(3.14, 3.1416);

    displayComparision("jack", "john");


    return 0;
}