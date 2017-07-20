//
// Created by biezhihua on 16-9-25.
//

#include <iostream>

using namespace std;

template<typename Type>
const Type &getMax(const Type &value1, const Type &value2) {
    if (value1 > value2) {
        return value1;
    } else {
        return value2;
    }
}

template<typename Type>
void displayComparison(const Type &value1, const Type &value2) {
    cout << "GetMax(" << value1 << "," << value2 << ") = ";
    cout << getMax(value1, value2) << endl;
}

int main() {
    int int1 = -101, int2 = 2001;
    displayComparison(int1, int2);

    double d1 = 3.14, d2 = 3.1416;
    displayComparison(d1, d2);

    string name1("jack");
    string name2("john");
    displayComparison(name1, name2);

    return 0;
}


