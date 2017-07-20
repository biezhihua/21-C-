//
// Created by biezhihua on 2016/10/5.
//

#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector<int> vecIntegers;

    for (int i = 25; i < 32; ++i) {
        vecIntegers.push_back(i);
        cout << i << " ";
    }

    cout << endl;

    cout << "enter divisor (>0>";

    int Divisor = 2;

    cin >> Divisor;

    vector<int>::iterator iElement;
    iElement = find_if(vecIntegers.begin(), vecIntegers.end(), [Divisor](int dividend) {
        return ((dividend % Divisor) == 0);
    });

    if (iElement != vecIntegers.end()) {
        cout << "First element in vector divisible by = " << Divisor;
        cout << " : " << *iElement << endl;
    }

    return 0;
}

