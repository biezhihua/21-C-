//
// Created by biezhihua on 16-9-13.
//

#include <iostream>

using namespace std;

class Human {
private :
    int age;
    string name;

public:
    Human(string inputName = "biezihua", int inputAge = 25) : name(inputName), age(inputAge) {
        cout << "Constructed a Human called" << name;
        cout << ", " << age << " yours old " << endl;
    }
};

int main() {
    Human firstMan;
    Human firstWoman("biezhihua", 28);
}

