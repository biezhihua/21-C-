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

int main() {
    MyString sayHello("Hello from string class");
    cout << "String buffer in mystring is " << sayHello.getLength();
    cout << " characters long " << endl;

    cout << "Buffer contains:";
    cout << "Buffer contains:" << sayHello.getString() << endl;

    // 当main执行完毕后,会自动调用析构函数~MyString()
    return 0;
}

