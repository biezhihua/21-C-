//
// Created by biezhihua on 16-9-12.
//

#include <iostream>

using namespace std;

int main() {

    int age = 30;
    const double pi = 3.1415;
    cout << "Integer age is at : "  << &age << endl;
    cout << "Double pi is located at : "  << &pi << endl;

    return 0;
}

