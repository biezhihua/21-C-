//
// Created by biezhihua on 2016/10/2.
//

/**
 * find the element at STL set or multiset
 */

#include <set>
#include <iostream>

using namespace std;

int main() {
    set<int> setIntegers;
    setIntegers.insert(100);
    setIntegers.insert(10);
    setIntegers.insert(-1100);
    setIntegers.insert(33330);
    setIntegers.insert(100);

    // write contents of the set to the screen
    for (auto iElement = setIntegers.cbegin(); iElement != setIntegers.cend(); iElement++) {
        cout << *iElement << endl;
    }

    // try finding an elements
    auto iElementFound = setIntegers.find(-1);

    // check if found...
    if (iElementFound != setIntegers.end()) {
        cout << "element " << *iElementFound << " found !" << endl;
    }

    // try finding another element
    auto iAnotherFind = setIntegers.find(1234);

    if (iAnotherFind != setIntegers.end()) {
        cout << "Element " << *iAnotherFind << " found!" << endl;
    } else {
        cout << "Element not found in set !" << endl;
    }


    return 0;


}

