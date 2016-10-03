//
// Created by biezhihua on 2016/10/3.
//

#include <algorithm>
#include <iostream>
#include <vector>
#include <list>

using namespace std;

template <typename Type>
struct DisplayeElementKeepCount {
    int count;

    DisplayeElementKeepCount() {
        count = 0;
    }

    void operator()(const  Type& element) {
        count++;
        cout << element << "";
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


    DisplayeElementKeepCount<int> result;

    result = for_each(vecIntegers.begin(), vecIntegers.end(), DisplayeElementKeepCount<int>());

    cout << endl<<result.count;

    return 0;
}
