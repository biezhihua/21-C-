//
// Created by biezhihua on 2018/10/25.
//


#include <iostream>
#include <string>

using namespace std;

class Human {
private:
    string name;
    string age;

    friend void displayAge(const Human &person);

public:
    Human(string inputName, int inputAge) {
        name = inputName;
        age = inputAge;
    }
};

void displayAge(const Human &person) {
    cout << person.age << endl;
}


int main() {
    Human firstMan("biezhihua", 25);
    cout << "Accessing private member age via firend:";
    displayAge(firstMan);
}


