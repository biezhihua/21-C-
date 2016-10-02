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

typedef multiset<int> MSETINT;

int main() {

    MSETINT msetIntegers;


    // inset some random values
    msetIntegers.insert(43);
    msetIntegers.insert(78);
    msetIntegers.insert(18);
    msetIntegers.insert(-8);
    msetIntegers.insert(7118);

    cout << "multiset contins " << msetIntegers.size() << " elements";

    cout << "These are: "<<endl;

    displayContents(msetIntegers);

    cout << "Please enter a number to be erased from set "<<endl;
    int numberToErase = 0;
    cin >> numberToErase;

    cout << "Erasing " << msetIntegers.count(numberToErase);
    cout << " instances of value "<<numberToErase<<endl;

    // try finding an element
    msetIntegers.erase(numberToErase);


    cout << "multiset contins " << msetIntegers.size() << " elements";

    cout << "These are: "<<endl;

    displayContents(msetIntegers);

    return 0;
}
