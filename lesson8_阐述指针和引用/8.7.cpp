//
// Created by biezhihua on 16-9-12.
//
#include <iostream>

using namespace std;

int main() {

    int *pAge = new int;

    cout << "Enter your dog's age:";

    cin >> *pAge;

    cout << "Age " << *pAge << " is stored at " << pAge << endl;

    delete (pAge);




}

