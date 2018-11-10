//
// Created by biezhihua on 16-9-26.
//
#include <string>
#include <iostream>

using namespace std;

int main() {

    string strSTLString("Hello String");

    cout << "Displaying the elements in the string using array-syntax:" << endl;
    for (size_t nCharCounter = 0; nCharCounter < strSTLString.length(); ++nCharCounter) {
        cout << "Character [" << nCharCounter << "] is :" << strSTLString[nCharCounter] << endl;
    }
    cout << endl;

    cout << "Displaying the contents of the string using iterators:" << endl;

    int charOffset = 0;
    string::const_iterator iCharacterLocator;

    for (iCharacterLocator = strSTLString.begin(); iCharacterLocator != strSTLString.end(); ++iCharacterLocator) {
        cout << "Character [" << charOffset++ << "] is : " << *iCharacterLocator << endl;
    }

    cout << endl;

    charOffset = 0;
    string::iterator iterator1;
    for (iterator1 = strSTLString.begin(); iterator1 != strSTLString.end(); ++iterator1) {
        cout << "Character [" << charOffset++ << "] is : " << *iterator1 << endl;
    }

    cout << endl;

    cout << "The char * representation of the string is ";
    cout << strSTLString.c_str() << endl;

    return 0;
}

