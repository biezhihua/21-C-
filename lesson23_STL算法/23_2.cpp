//
// Created by biezhihua on 2016/10/6.
//

#include <algorithm>
#include <iostream>
#include <vector>

template<typename T>
bool isEven(const T &number) {
    return ((number % 2 == 0));
}

int main() {
    using namespace std;

    vector<int> ints;
    for (int i = -9; i < 10; ++i) {
        ints.push_back(i);
    }

    size_t mNumZeroes = count(ints.begin(), ints.end(), 0);

    cout << "Number of instance of '0' "<<mNumZeroes<<endl;

    size_t nNumEvenElements = count_if(ints.begin(), ints.end(), isEven<int>);

    cout << "Number of event elements :"<<nNumEvenElements<<endl;



    return 0;
}

