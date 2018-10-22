//
// Created by biezhihua on 2018/10/21.
//

#include <iostream>

using namespace std;

int main() {
    int age = 30;
    int dogsAge = 9;

    cout << "Integer age = " << age << endl;

    cout << "Integer DogsAge = " << dogsAge << endl;

    int *pInteger = &age;
    cout << "pInteger points to Age " << endl;

    cout << "pInteger = 0x" << hex << pInteger << endl;

    cout << "*pInteger = " << dec << *pInteger << endl;

    pInteger = &dogsAge;


    cout << "pInteger points to DogsAge noe " << endl;

    cout << "pInteger = 0x" << hex << pInteger << endl;

    cout << "*pInteger = " << dec << *pInteger << endl;

}