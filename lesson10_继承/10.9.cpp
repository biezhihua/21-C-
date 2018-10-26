//
// Created by biezhihua on 2018/10/26.
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

class Car : protected Motor {

public:
    void move() {
        switchIgnition();
        pumpFuel();
        fireCylinders();
    }
};

class SuperCar : protected Car {
public:
    void move() {
        switchIgnition();
        pumpFuel();

        fireCylinders();
        fireCylinders();
        fireCylinders();
        fireCylinders();
    }
};

int main() {
    SuperCar myDreamCar;
    myDreamCar.move();
    return 0;
}

