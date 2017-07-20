//
// Created by biezhihua on 16-9-19.
//

#include <iostream>
#include <cstring>

using namespace std;

class MyString {
private:
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

    MyString(const MyString &copySource) {

    }

    MyString &operator=(const MyString &copySource) {
        if ((this != &copySource) && (copySource.buffer != NULL)) {
            if (buffer != NULL) {
                delete[] buffer;
            }

            buffer = new char[strlen(copySource.buffer) + 1];
            strcpy(buffer, copySource.buffer);
        }
        return *this;
    }

    ~MyString() {
        if (buffer != NULL) {
            delete[]buffer;
        }
    }

    int getLength() {
        return strlen(buffer);
    }

    operator const char *() {
        return buffer;
    }
};

int main() {
    MyString string1("Hello ");
    MyString string2(" World");

    cout << string1 << string2 << endl;
    string2 = string1;
    cout << string1 << string2 << endl;
    return 0;
}

