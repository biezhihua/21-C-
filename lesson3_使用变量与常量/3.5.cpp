//
// Created by biezhihua on 2018/10/21.
//

#include <iostream>

using namespace std;

int main() {
    auto flag = true;
    auto number = 2500000000000;

    cout << "Flag = " << flag;

    cout << ", sizeof(flag) = " << sizeof(flag) << endl;

    cout << "Number = " << number;

    cout << ", sizeof(number) = " << sizeof(number) << endl;
}

constexpr double GetPi() {
    return 22.0 / 7;
}

constexpr double TwicePi() {
    return 2 * GetPi();
}

enum RainbowColors {
    Violet = 0,
    Indigo,
    Blue,
    Green,
    Yellow,
    Orange,
    Red
};

enum CardinalDirections {
    North,
    South,
    East,
    West
};
