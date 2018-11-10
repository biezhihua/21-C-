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

int main() {

    list<int> listIntegers;

    listIntegers.push_front(4);
    listIntegers.push_front(3);
    listIntegers.push_front(2);
    listIntegers.push_front(1);
    listIntegers.push_front(0);
    listIntegers.push_back(5);

    displayContents(listIntegers);

    listIntegers.reverse();

    displayContents(listIntegers);

}