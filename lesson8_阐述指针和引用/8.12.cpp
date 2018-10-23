//
// Created by biezhihua on 2018/10/22.
//


#include <iostream>

using namespace std;


/**
 * 使用解除引用运算符（*）访问数组中的元素以及将数组运算符（[]）用于指针
 */
int main() {

    const int ARRAY_LEN = 5;

    int myNumbers[5] = {24, -1, 365, -999, 2011};

    int *pNumbers = myNumbers;

    cout << "Displaying array using pointer syntax, operator*" << endl;
    for (int index = 0; index < ARRAY_LEN; index++) {
        cout << "Element " << index << " = " << *(myNumbers + index) << endl;
    }

    cout << "Displaying array using pointer with array syntax, operator[]" << endl;
    for (int index = 0; index < ARRAY_LEN; ++index) {
        cout << "Element " << index << " = " << pNumbers[index] << endl;
    }

    return 0;
}
