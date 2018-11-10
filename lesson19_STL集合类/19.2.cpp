//
// Created by biezhihua on 2016/10/2.
//

#include <set>
#include <iostream>

using namespace std;

template<typename T>
void displayContents(const T &input) {
    for (auto iElement = input.cbegin(); iElement != input.cend(); iElement++) {
        cout << *iElement << endl;
    }
}

int main() {
    set<int> setIntegers;
    multiset<int> msetIntegers;

    setIntegers.insert(60);
    setIntegers.insert(61);
    setIntegers.insert(22);
    setIntegers.insert(1111);
    setIntegers.insert(-11);

    cout << "Writing the contents of the set to the screen" << endl;

    displayContents(setIntegers);

    msetIntegers.insert(setIntegers.cbegin(), setIntegers.cend());
    msetIntegers.insert(0033300);

    cout << "Writing the contents of the set to the screen" << endl;

    displayContents(msetIntegers);


    cout << "Number of instances of '0033300' in the multiset are:";
    cout << msetIntegers.count(0033300) << "'" << endl;


    return 0;
}