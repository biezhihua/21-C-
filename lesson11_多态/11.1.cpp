//
// Created by biezhihua on 16-9-18.
//

#include <iostream>

using namespace std;

class Fish {
public:
    void swim() {
        cout << "Fish swims!" << endl;
    }
};

class Tuna : public Fish {
public:
    void swim() {
        cout << "Tuna swims!" << endl;
    }
};


void makeFishSwim(Fish &inputFish) {
    inputFish.swim();
}

int main() {

    Tuna tuna;
    tuna.swim();
    makeFishSwim(tuna);

    return 0;
}
