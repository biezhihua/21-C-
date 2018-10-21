//
// Created by biezhihua on 2018/10/21.
//

#include <iostream>

using namespace std;

inline long DoubleNum(int inputNum) {
    return inputNum * 2;
}

int main() {
    int inputNum = 6;
    cout << "Double is " << DoubleNum(inputNum) << endl;
}

