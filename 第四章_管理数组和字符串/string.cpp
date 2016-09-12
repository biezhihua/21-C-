//
// Created by biezhihua on 16-9-11.
//

#include <iostream>

using namespace std;

int main() {
    string Greetings("Hello std::string!");
    cout << "Enter a line of text:" << endl;
    string firstLine;
    getline(cin, firstLine);

    cout << "Enter another:" << endl;
    string secLine;
    getline(cin, secLine);

    cout << "Result of concatenation:" << endl;
    string concat = firstLine + " " + secLine;

    cout << concat << endl;

    cout << "Copy of concatenated string:" << endl;

    string copy = concat;
    cout << copy << endl;

    cout << "Length of concat string:" << concat.length() << endl;

    return 0;
}

