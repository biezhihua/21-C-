//
// Created by biezhihua on 2018/10/22.
//

#include <iostream>

using namespace std;

int main() {
    int age = 30;
    double Pi = 3.1416;
    char sayYes = 'y';

    int *pInt = &age;
    double *pDouble = &Pi;
    char *pChar = &sayYes;

    cout << "sizeof fundamental types - " << endl;
    cout << "sizeof(int) = " << sizeof(int) << endl;
    cout << "sizeof(double) = " << sizeof(double) << endl;
    cout << "sizeof(char) = " << sizeof(char) << endl;

    cout << "sizeof pointers to fundamental type - " << endl;
    cout << "sizeof(pInt) = " << sizeof(pInt) << endl;
    cout << "sizeof(pDouble) = " << sizeof(pDouble) << endl;
    cout << "sizeof(pChar) = " << sizeof(pChar) << endl;
}

