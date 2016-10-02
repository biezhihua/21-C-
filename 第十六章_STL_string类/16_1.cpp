//
// Created by biezhihua on 16-9-26.
//

#include <iostream>

using namespace std;

int main() {
    const char *constCStyleString = "Hello String";
    cout << "Constant string is :" << constCStyleString << endl;
    string strFromConst(constCStyleString);
    cout << "strFRomConst is:" << strFromConst << endl;

    string str2("Hello String");
    string str2Copy(str2);
    cout << "str2Copy is : " << str2Copy << endl;

    string strPartialCopy(constCStyleString, 5);
    cout << "strParticalCOpy is :" << strPartialCopy << endl;

    string strRepeatChars(10, 'a');
    cout << "strRepeatChars is:" << strRepeatChars << endl;
    return 0;
}

