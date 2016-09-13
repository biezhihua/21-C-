//
// Created by biezhihua on 16-9-13.
//

#include <iostream>

using namespace std;

class Human {
private:
    string name;
    int age;

public:
    Human() {
        age = 0;
        cout << "Default constructor creates an instance of Human" << endl;
    }

    Human(string name) {
        Human::name = name;
        Human::age = 0;
        cout << "Overloaded constructor creates " << name << endl;
    }

    Human(string name, int age) {
        Human::name = name;
        Human::age = age;
        cout << "Overloaded constructor creates ";
        cout << name << " of " << age << " years " << endl;
    }


    void setName(const string &mName) {
        Human::name = mName;
    }

    void setAge(int mAge) {
        Human::age = mAge;
    }

    void introduceSelf() {
        cout << "I am " + name << " and am ";
        cout << age << " year old " << endl;
    }
};

int main() {

    Human firstMan;
    firstMan.setName("biezhihua");
    firstMan.setAge(30);

    Human firstWoman("huyuqiong");
    firstWoman.setAge(28);

    Human firstChild("rose", 1);

    firstMan.introduceSelf();
    firstWoman.introduceSelf();
    firstChild.introduceSelf();

    return 0;
}

