//
// Created by biezhihua on 16-9-18.
//
#include <iostream>

using namespace std;


class Fish {
public:
    virtual void swim() = 0;
};

class Tuna : public Fish {
public:
    void swim() override {
        cout << "Tuna swims fast in the sea!" << endl;
    }
};

class Carp : public Fish {
public:
    void swim() override {
        cout << "Tuna swims slow in the lake!" << endl;
    }
};


void makeFishSwim(Fish &inputFish) {
    inputFish.swim();
}

int main() {

//    Fish fish;
    Carp myLunch;
    Tuna myDinner;
    makeFishSwim(myLunch);
    makeFishSwim(myDinner);

    return 0;
}
