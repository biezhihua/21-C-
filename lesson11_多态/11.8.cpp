//
// Created by biezhihua on 16-9-18.
//
#include <iostream>

using namespace std;


class Animal {
public:
    Animal() {
        cout << "Animal constructor" << endl;
    }

    int age;
};


class Mammal : public virtual Animal {

};

class Bird : public virtual Animal {

};

class Reptile : public virtual Animal {

};

class Platypus : public Mammal, public Bird, public Reptile {
public:

    Platypus() {
        cout << "Platypus constructor" << endl;
    }
};

int main() {

    Platypus platypus;

    return 0;
}
