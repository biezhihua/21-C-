//
// Created by biezhihua on 16-9-25.
//
#include <iostream>

using namespace std;

template<typename T>
class TestStatic {
public:
    static int staticValue;
};

template<typename T> int TestStatic<T>::staticValue;

int main() {
    TestStatic<int> intYear;


    TestStatic<int> int2;
    TestStatic<double> double1;
    TestStatic<double> double2;

    cout << "Setting staticValue for intYear to 2011:" << endl;
    intYear.staticValue = 2011;
    cout << "int2.staticValue = " << int2.staticValue << endl;
    cout << "intYear.staticValue = " << intYear.staticValue << endl;


    cout << "Setting staticVlaue for doubel2 to 1011" << endl;
    double2.staticValue = 1011;
    cout << "double1.staticValue = " << double1.staticValue << endl;
    cout << "double2.staticValue = " << double2.staticValue << endl;

    return 0;
}

