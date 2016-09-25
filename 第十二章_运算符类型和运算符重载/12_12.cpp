//
// Created by biezhihua on 16-9-20.
//

#include <iostream>
#include <cstring>

using namespace std;


class MyString {
private:
    char *buffer;

    MyString() : buffer(NULL) {
        cout << "Default constructor called" << endl;
    }

public:

    ~MyString() {
        if (buffer != NULL) {
            delete[](buffer);
        }
    }

    // constructor
    MyString(const char *initialInput) {
        cout << "Constructor called for:" << initialInput << endl;
        if (initialInput != NULL) {
            buffer = new char[strlen(initialInput) + 1];
            strcpy(buffer, initialInput);
        } else {
            buffer = NULL;
        }
    }

    // copy constructor
    MyString(const MyString &copySource) {
        cout << "Copy constructor to copy from:" << copySource.buffer << endl;
        if (copySource.buffer != NULL) {
            buffer = new char[strlen(copySource.buffer) + 1];
            strcpy(buffer, copySource.buffer);
        } else {
            buffer = NULL;
        }
    }

    // Copy assignment operator
    MyString &operator=(const MyString &copySource) {
        cout << "Copy assignment operator to copy from :" << copySource.buffer << endl;
        if ((this != &copySource) && (copySource.buffer) != NULL) {
            if (buffer != NULL) {
                delete[](buffer);
                buffer = new char[strlen(copySource.buffer) + 1];
                strcpy(buffer, copySource.buffer);
            }
        }
        return *this;
    }

    // move constructor
    MyString(MyString &&moveSource) {
        cout << "Move constructor to move from:" << moveSource.buffer << endl;
        if (moveSource.buffer != NULL) {
            buffer = moveSource.buffer;// take ownership i.e. 'move'
            moveSource.buffer = NULL;// free move source
        }
    }

    // move assignment operator
    MyString &operator=(MyString &&moveSource) {
        cout << "Move assignment operator to move from:" << moveSource.buffer << endl;
        if ((moveSource.buffer != NULL) && (this != &moveSource)) {
            delete[] buffer;
            buffer = moveSource.buffer;
            moveSource.buffer = NULL;
        }
        return *this;
    }


    MyString operator+(const MyString &addThis) {
        cout << "operator+ called:" << endl;
        MyString newString;
        if (addThis.buffer != NULL) {
            newString.buffer = new char[getLength() + strlen(addThis.buffer) + 1];
            strcpy(newString.buffer, buffer);
            strcat(newString.buffer, addThis.buffer);
        }
        return newString;
    }

    char &operator[](int index) {
        if (index < getLength()) {
            return buffer[index];
        }
    }

    const char &operator[](int index) const {
        if (index < getLength()) {
            return buffer[index];
        }
    }

    int getLength() const {
        return strlen(buffer);
    }

    operator const char *() {
        return buffer;
    }
};

int main() {
    MyString hello("Hello ");
    MyString world("World");
    MyString cpp(" of C++");

    MyString sayHelloAgain("overwrite this");
    sayHelloAgain = hello+world+cpp;

    return 0;
}