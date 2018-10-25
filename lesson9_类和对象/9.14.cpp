//
// Created by biezhihua on 2018/10/25.
//

#include <iostream>
#include <string>

using namespace std;

class Human {
private:
    string name;
    int age;

    friend class Utility;

public:
    Human(string inputName, int inputAge) {
        name = inputName;
        age = inputAge;
    }
};

class Utility {
public:
    static void displayAge(const Human &person) {
        cout << person.name << endl;
    }
};


int main() {
    Human firstMan("biezhihua", 25);
    cout << "Accessing private member age via friend class: ";
    Utility::displayAge(firstMan);
}
