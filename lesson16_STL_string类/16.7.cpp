//
// Created by biezhihua on 16-9-27.
//

#include <string>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {

    cout << "Please enter a string for case-convertion:" << endl;

    cout << "> ";

    string strInput;
    getline(cin, strInput);
    cout << endl;

    transform(strInput.begin(), strInput.end(), strInput.begin(), tolower);

    cout << "The string converted to upper case is : " << endl;

    cout << strInput << endl << endl;

    return 0;
}