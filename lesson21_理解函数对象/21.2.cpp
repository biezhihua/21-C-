//
// Created by biezhihua on 2018/11/10.
//

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

template<typename elementType>
struct DisplayElementKeepCount {
    int Count;

    DisplayElementKeepCount() : Count(0) {

    }

    void operator()(const elementType &element) {
        ++Count;
        cout << element << " ";
    }
};

int main() {
    vector<int> vecIntegers;

    for (int nCount = 0; nCount < 10; ++nCount) {
        vecIntegers.push_back(nCount);
    }

    cout << "Displaying the vector of integers: " << endl;

    DisplayElementKeepCount<int> Result;

    Result = for_each(vecIntegers.begin(), vecIntegers.end(), DisplayElementKeepCount<int>());

    cout << endl << endl;

    cout << " ' " << Result.Count << " ' elements were displayed!" << endl;
}