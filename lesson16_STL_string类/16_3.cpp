//
// Created by biezhihua on 16-9-26.
//
#include <string>
#include <iostream>

using namespace std;

int main() {
    string strSample1("Hello");
    string strSample2(" String!");

    strSample1 += strSample2;
    cout << strSample1 << endl;

    string strSample3("Fun is not needing to use pointers!");
    strSample1.append(strSample3);
    cout << strSample1 << endl;

    const char *constCStyleString = " you however still can!";
    strSample1.append(constCStyleString);
    cout << strSample1 << endl;

    return 0;
}

