//
// Created by biezhihua on 2018/11/10.
//

#include <deque>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    deque<int> dqIntegers;

    dqIntegers.push_back(3);
    dqIntegers.push_back(4);
    dqIntegers.push_back(5);

    dqIntegers.push_front(2);
    dqIntegers.push_front(1);
    dqIntegers.push_front(0);


    cout << "The contents of the deque after inserting elements:";
    cout << "at the top end bottom are: " << endl;

    for (size_t nCount = 0; nCount < dqIntegers.size(); ++nCount) {
        cout << "Element [" << nCount << "] = ";
        cout << dqIntegers[nCount] << endl;
    }

    cout << endl;

    dqIntegers.pop_front();

    dqIntegers.pop_back();

    cout << "The contents of the deque after erasing an element ";
    cout << "from the top and bottom are: " << endl;

    for (auto iElementLocator = dqIntegers.begin(); iElementLocator != dqIntegers.end(); iElementLocator++) {
        size_t offset = distance(dqIntegers.begin(), iElementLocator);
        cout << "Element [" << offset << "] = " << *iElementLocator << endl;
    }


    return 0;
}