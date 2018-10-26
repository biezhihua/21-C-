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
};

class Carp : public Fish {
public:
    Carp() : Fish(true) {
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


    return 0;
}