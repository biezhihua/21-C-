//
// Created by biezhihua on 16-9-15.
//

#include <iostream>
#include <cstring>

using namespace std;

class MyString {
private :
    char *buffer;

public:

    MyString(const char *initialInput) {
        if (initialInput != NULL) {
            buffer = new char[strlen(initialInput) + 1];
            strcpy(buffer, initialInput);
        } else {
            buffer = NULL;
        }
    }

    ~MyString() {
        cout << "Invoking destructor, clearing up" << endl;
        if (buffer != NULL) {
            delete[] buffer;
        }
    }

    int getLength() {
        return strlen(buffer);
    }

    char *getString() {
        return buffer;
    }
};

void useMyString(MyString input) {
    cout << "String buffer in my string is " << input.getLength();
    cout << " characters long" << endl;
    cout << "Buffer contains : " << input.getString() << endl;
    return;
}

int main() {
    MyString sayHello("Hello from string class");

    useMyString(sayHello);

    return 0;
}

