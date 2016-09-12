//
// Created by biezhihua on 16-9-11.
//

#include <iostream>

using namespace std;

int main() {

    char sayHello[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    cout << sayHello << endl;
    cout << "Size of array:" << sizeof(sayHello) << endl;
    cout << "Replacing space with null" << endl;
    sayHello[2] = '\0';
    cout << sayHello << endl;
    cout << "Size of array:" << sizeof(sayHello) << endl;
}

