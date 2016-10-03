//
// Created by biezhihua on 2016/10/3.
//


#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <list>


using namespace std;

template <typename  elementType>
struct displayElement {
    void operator()(const elementType & element) const {
        cout << element << " ";
    }
};

int main() {
    vector<int> vecIntegers;

    for (int i = 0; i < 10; ++i) {
        vecIntegers.push_back(i);
    }

    list<char> listChars;
    for (char i = 'a'; i< 'k'; ++ i) {
        listChars.push_back(i);
    }

    cout << "displaying the vector of integers:"<<endl;

    for_each(vecIntegers.begin(), vecIntegers.end(), displayElement<int>());


    cout << endl << endl;

    cout << "displaing the list of characters:"<<endl;
    for_each(listChars.begin(), listChars.end(), displayElement<char>());
    return 0;
}