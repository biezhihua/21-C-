//
// Created by biezhihua on 16-9-25.
//
#include <iostream>

using namespace std;

template<typename T1=int, typename T2=double>
class HoldsPair {
private:
    T1 value1;
    T2 value2;

public:
    HoldsPair(const T1 &value1, const T2 &value2) {
        this->value1 = value1;
        this->value2 = value2;
    }

    const T1 &getFirstValue() {
        return value1;
    }

    const T2 &getSecondValue() {
        return value2;
    }
};


int main() {
    HoldsPair<> mIntFloatPair(300, 10.00);
    HoldsPair<short, char *> mShortStringPair(25, "bie zhi hua");


    // out put values contained int the first object ...
    cout << "The first object contains ." << endl;
    cout << "Value 1:" << mIntFloatPair.getFirstValue() << endl;
    cout << "Value 2:" << mIntFloatPair.getSecondValue() << endl;

    cout << "The second object contains ." << endl;
    cout << "Value 1:" << mShortStringPair.getFirstValue() << endl;
    cout << "Value 2:" << mShortStringPair.getSecondValue() << endl;

    return 0;
}