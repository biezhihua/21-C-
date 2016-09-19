//
// Created by biezhihua on 16-9-18.
//
#include <iostream>

using namespace std;

class Fish {
private:
    bool freshWaterFish;
public:
    Fish(bool isFreshWater) : freshWaterFish(isFreshWater) {
    }

    void swim() {
        if (freshWaterFish) {
            cout << "Swims in lake" << endl;
        } else {
            cout << "Swims in sea" << endl;
        }
    }
};


class Tuna : public Fish {
public:
    Tuna() : Fish(false) {
    }

    void swim() {
        cout << "Tuna swims real fast" << endl;
        Fish::swim();
    }

};

class Carp : public Fish {
public:
    Carp() : Fish(true) {
    }

    void swim() {
        cout << "Carp swims real slow" << endl;
        Fish::swim();
    }
};


int main() {
    Carp myLunch;
    Tuna myDinner;

    cout << "Getting my food to swim" << endl;

    cout << "Lunch:";
    myLunch.swim();

    cout << "Dinner:";
    myDinner.swim();

    cout << "Dinner : ";
    myDinner.Fish::swim();

    return 0;
}