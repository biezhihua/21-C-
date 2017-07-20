//
// Created by biezhihua on 16-9-13.
//
#include <iostream>

using namespace std;

int main() {

    int original = 30;

    cout << "Original = " << original << endl;

    cout << "Original is at address:" << &original << endl;

    int &ref = original;

    cout << "Ref is at address :" << &ref << endl;

    int ref2 = original;

    cout << "Ref2 is at address :" << &ref2 << endl;

    int &ref3 = ref;

    cout << "Ref3 is at address: " << &ref3 << endl;

    cout << "Ref3 gets value, Ref3 = " << ref3 << endl;

//    Original = 30
//    Original is at address:0x7fff28b126c0
//    Ref is at address :0x7fff28b126c0
//    Ref2 is at address :0x7fff28b126c4
//    Ref3 is at address: 0x7fff28b126c0
//    Ref3 gets value, Ref3 = 30


    return 0;
}
