//
// Created by biezhihua on 2018/11/10.
//

#include <list>
#include <iostream>

using namespace std;

bool sortPredicate_Descending(const int &lsh, const int &rsh) {
    return (lsh > rsh);
}

template<typename T>
void displayContents(const T &input) {
    for (auto iElement = input.cbegin(); iElement != input.cend(); iElement++) {
        cout << *iElement << " ";
    }
    cout << endl;
}

int main() {

    list<int> listIntegers;

    listIntegers.push_front(444);
    listIntegers.push_front(2011);
    listIntegers.push_front(-1);
    listIntegers.push_front(0);
    listIntegers.push_back(-5);

    displayContents(listIntegers);

    listIntegers.sort();

    displayContents(listIntegers);

    listIntegers.sort(sortPredicate_Descending);

    displayContents(listIntegers);

}