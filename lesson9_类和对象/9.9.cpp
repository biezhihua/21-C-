//
// Created by biezhihua on 16-9-15.
//
#include <iostream>
#include <cstring>

using namespace std;


class MyString {
private:
    char *buffer;
public:
    // constructor
    MyString(const char *initialInput) {
        cout << "Constructor: creating new MyString " << endl;
        if (initialInput != NULL) {

            buffer = new char[strlen(initialInput) + 1];

            strcpy(buffer, initialInput);

            // Display memory address pointed by local buffer
            cout << "Buffer points to : 0x" << hex;
            cout << (unsigned int *) buffer << endl;
        } else {
            buffer = NULL;
        }
    }

    // copy constructor
    MyString(const MyString &copySource) {

        cout << "Copy constructor: copying from MyString" << endl;

        if (copySource.buffer != NULL) {
            // ensure deep copy by first allocating own buffer
            buffer = new char[strlen(copySource.buffer) + 1];

            // copy from the source into local buffer
            strcpy(buffer, copySource.buffer);

            // Display memory address pointed by local buffer
            cout << "Buffer points to : 0x" << hex;
            cout << (unsigned int *) buffer << endl;
        } else {
            buffer = NULL;
        }
    }

    ~MyString() {
        cout << "Invoking destructor,clearing up " << endl;
        if (buffer != NULL) {
            delete[] buffer;
        }
    }

    int getLength() {
        return strlen(buffer);
    }

    const char *getString() {
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

    MyString overwrite("who cares?");

    overwrite = sayHello;

    return 0;
}
