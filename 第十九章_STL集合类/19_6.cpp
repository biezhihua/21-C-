//
// Created by biezhihua on 2016/10/2.
//

#include <unordered_set>
#include <iostream>

using namespace std;

template<typename T>
void displayContent(const T &input) {
    cout << "number of elements, size =" << input.size() << endl;
    cout << "Max bucket count = " << input.max_bucket_count() << endl;
    cout << "load factor " << input.load_factor() << endl;
    cout << "Max laod factr" << input.max_load_factor() << endl;
    cout << "Unordered set contains:" << endl;
    for (auto iElement = input.cbegin(); iElement != input.cend(); iElement++) {
        cout << *iElement << endl;
    }
    cout << endl;
}



