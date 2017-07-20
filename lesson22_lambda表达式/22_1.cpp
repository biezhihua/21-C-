//
// Created by biezhihua on 2016/10/5.
//

#include <algorithm>
#include <istream>
#include <vector>
#include <list>
#include <iostream>

using  namespace std;

int main() {
    vector<int> vecIntegers;

    for (int i = 0; i < 10; ++i) {
        vecIntegers.push_back(i);
    }

    list<char>  listChars;
    for (char j = 'a'; j < 'k' ; ++j) {
        listChars.push_back(j);
    }

    cout << "Displaying vector of integers using a lambda:"<<endl;


    for_each(vecIntegers.begin(), vecIntegers.end(), [](int &item) {
        cout << item << " ";
    });

    cout << endl;

    for_each(listChars.begin(),listChars.end(), [](char&item) {
        cout << item << "";
    });

    cout << endl;

    return 0;
}

