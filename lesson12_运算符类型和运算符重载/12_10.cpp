//
// Created by biezhihua on 16-9-20.
//


#include <iostream>
#include <cstring>

using namespace std;

class MyString {
private:
    char *buffer;

    MyString() {

    }

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

    ~MyString() {
        if (buffer != NULL) {
            delete[] buffer;
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
    cout << "Type a statement:";
    string strInput;
    getline(cin, strInput);

    MyString youSaid(strInput.c_str());

    cout << "Using operator[] for displaying your input:" << endl;
    for (int i = 0; i < youSaid.getLength(); ++i) {
        cout << youSaid[i] << " ";
    }
    cout << endl;

    cout << "Enter index 0 - " << youSaid.getLength() - 1 << ":";
    int index = 0;
    cin >> index;
    cout << "input character at zero-based position :" << index;
    cout << " is: " << youSaid[index] << endl;

    return 0;
}