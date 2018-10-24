//
// Created by biezhihua on 2018/10/24.
//

#include <iostream>

#include <string>

using namespace std;

class Human {
private:
    string name;
    int age;

public:
    void setName(string names) {
        name = names;
    }

    void setAge(int ages) {
        age = ages;
    }

    void introduceSelf() {
        cout << "I am " + name + " and am ";
        cout << age << " years old " << endl;
    }

};

int main() {
    Human firstMan;
    firstMan.setAge(30);
    firstMan.setName("Admin");

    Human firstWoman;
    firstWoman.setName("Eve");
    firstWoman.setAge(28);

    firstMan.introduceSelf();
    firstWoman.introduceSelf();
}
