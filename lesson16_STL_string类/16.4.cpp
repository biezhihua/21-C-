//
// Created by biezhihua on 16-9-26.
//
#include <string>
#include <iostream>

using namespace std;

int main() {

    string strSample("Good day String ! Today is beautiful!");
    cout << "The sample string is : " << endl;
    cout << strSample << endl << endl;

    size_t charPos = strSample.find("day", 0);

    if (charPos != string::npos) {
        cout << "First instance of \"day\" was found at position " << charPos;
    } else {
        cout << "Substring not found." << endl;
    }

    cout << endl << endl;

    cout << "Locating all instances of substring \"day\"" << endl;

    size_t substringPos = strSample.find("day", 0);
    while (substringPos != string::npos) {
        cout << "\"day\" found at position " << substringPos << endl;

        size_t nSearchPosition = substringPos + 1;

        substringPos = strSample.find("day", nSearchPosition);
    }

    return 0;
}

