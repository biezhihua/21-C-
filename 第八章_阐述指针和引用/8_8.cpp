//
// Created by biezhihua on 16-9-12.
//

#include <iostream>
#include <cstring>

using namespace std;


int main() {

    cout << "Enter your name:";
    string name;
    cin >> name;

    unsigned long charsToAllocate = name.length() + 1;

    char *copyOfName = new char[charsToAllocate];

    strcpy(copyOfName, name.c_str());

    cout << "Dynamically allocated buffer contains:" << copyOfName << endl;

    delete[] copyOfName;

}

