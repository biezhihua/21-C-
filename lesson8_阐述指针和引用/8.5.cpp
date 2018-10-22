//
// Created by biezhihua on 2018/10/21.
//

#include <iostream>

using namespace std;

int main() {
    int DogsAge = 30;

    cout << "Initialized DogsAge = " << DogsAge << endl;

    int *pAge = &DogsAge;

    cout << "pAge points to DogsAge" << endl;

    cout << "Enter an age for your dog: ";

    cin >> *pAge;

    cout << "Input stored using pAge at " << hex << pAge << endl;

    cout << "Integer DogsAge = " << dec << DogsAge << endl;
}