//
// Created by biezhihua on 16-9-18.
//
#include <iostream>

using namespace std;

class Fish {
public:

    void swim() {
        cout << "Fish swims..." << endl;
    }

    void swim(bool freshWaterFish) {
        if (freshWaterFish) {
            cout << "Swims in lake" << endl;
        } else {
            cout << "Swims in sea" << endl;
        }
    }
};


class Tuna : public Fish {
public:
    using Fish::swim;

    void swim() {
        cout << "Tuna swims real fast" << endl;
    }
};

int main() {
    Tuna myDinner;

    cout << "Getting my food to swim" << endl;

    cout << "Dinner:";
    myDinner.swim();
    myDinner.Fish::swim(false);
    return 0;
}