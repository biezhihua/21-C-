//
// Created by biezhihua on 16-9-27.
//

#include <string>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string str("Hello string wake up to beautiful day");


    string::iterator iChars = find(str.begin(), str.end(), 's');

    return 0;
}