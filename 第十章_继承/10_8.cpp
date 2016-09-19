//
// Created by biezhihua on 16-9-18.
//
#include <iostream>

using namespace std;

class Motor {
public:
    void switchIgnition() {
        cout << "Ignition ON" << endl;
    }

    void pumpFuel() {
        cout << "Fuel in cylinders" << endl;
    }

    void fireCylinders() {
        cout << "Vrooom" << endl;
    }
};

class Car : private Motor {

public:
    void move() {
        switchIgnition();
        pumpFuel();
        fireCylinders();
    }
};

int main() {
    Car car;
    car.move();
    return 0;
}

