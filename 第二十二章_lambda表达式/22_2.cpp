//
// Created by biezhihua on 2016/10/5.
//

#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector<int> vecnums;
    vecnums.push_back(1);
    vecnums.push_back(11);
    vecnums.push_back(122);
    vecnums.push_back(-122);

    auto boolNum = find_if(vecnums.cbegin(), vecnums.cend(), []( const  int & num) {
        return ((num % 2) == 0);
    });

    if (boolNum != vecnums.cend()) {
        cout << "Event number in collection is :" << *boolNum<<endl;
    }

    return 0;
}
