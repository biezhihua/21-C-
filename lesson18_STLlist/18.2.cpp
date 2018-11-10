//
// Created by biezhihua on 2018/11/10.
//

#include <list>
#include <iostream>

using namespace std;

template<typename T>
void displayContents(const T &input) {
    for (auto iElement = input.cbegin(); iElement != input.cend(); iElement++) {
        cout << *iElement << " ";
    }
    cout << endl;
}

// 使用push_front和push_back在list中插入元素

int main() {

    list<int> listIntegers;

    listIntegers.push_front(1000);
    listIntegers.push_front(1001);
    listIntegers.push_front(1002);
    listIntegers.push_front(1003);

    displayContents(listIntegers);

    return 0;
}