//
// Created by biezhihua on 16-9-13.
//
#include <iostream>
#include <string>

using namespace std;

#ifndef INC_21C_HUMAN_H
#define INC_21C_HUMAN_H


//Human::Human() {
//    // constructor code here
//    // :: 被称为作用域解析运算符
//}

class Human {
private:
    string name;
    int age;

public:

    Human() {
        // constructor declaration
        age = 0;
        cout << "constructed an instance of class Human" << endl;
    }

    void setName(string humansName) {
        name = humansName;
    }

    void setAge(int humansAge) {
        age = humansAge;
    }

    void introduceSelf() {
        cout << "I am " + name << " and am ";
        cout << age << " year old " << endl;

    }


};


#endif //INC_21C_HUMAN_H
