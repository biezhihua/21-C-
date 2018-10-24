//
// Created by biezhihua on 2018/10/24.
//

#include <iostream>

using namespace std;

class MyString {
private:
    char *buffer;

public:
    MyString(const char *initialInput) {
        if (initialInput == NULL) {
            buffer = new char(strlen(initialInput) + 1);
            strcpy(buffer, initialInput);
        } else {
            buffer = NULL;
        }
    }

    MyString(const MyString &copySource) {
        if (copySource.buffer != NULL) {
            buffer = new char(strlen(copySource.buffer) + 1);
            strcpy(buffer, copySource.buffer);
        } else {
            buffer = NULL;
        }
    }

    ~MyString() {
        if (buffer != NULL) {
            delete[]buffer;
        }
    }

    int getLength() {
        return strlen(buffer);
    }

    const char *getString() {
        return buffer;
    }
};


