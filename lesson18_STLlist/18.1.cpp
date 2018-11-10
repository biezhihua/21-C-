//
// Created by biezhihua on 2018/11/10.
//

#include <list>
#include <vector>
#include <iostream>

using namespace std;

// 指定元素数和初始值

int main() {

    list<int> listIntegers;

    list<int> listWith10Integers(10);

    list<int> listWith4IntegerEach99(10, 99);

    list<int> listCopyAnother(listWith4IntegerEach99);

    vector<int> vecIntegers(10, 2011);

    list<int> listContainsCopyAnother(vecIntegers.cbegin(), vecIntegers.cend());

    return 0;
}