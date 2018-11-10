//
// Created by biezhihua on 2018/11/10.
//

#include <list>
#include <iostream>
#include <forward_list>

using namespace std;

template<typename T>
void displayContents(const T &input) {
    for (auto iElement = input.cbegin(); iElement != input.cend(); iElement++) {
        cout << *iElement << " ";
    }
    cout << endl;
}

int main() {

    forward_list<int> flistIntegers;
    flistIntegers.push_front(0);
    flistIntegers.push_front(2);
    flistIntegers.push_front(2);
    flistIntegers.push_front(4);
    flistIntegers.push_front(3);
    flistIntegers.push_front(1);

    displayContents(flistIntegers);

    flistIntegers.remove(2);
    flistIntegers.sort();

    displayContents(flistIntegers);
}