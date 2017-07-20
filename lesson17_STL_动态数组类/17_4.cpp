//
// Created by biezhihua on 16-9-27.
//
#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> vecIntegerArray;

    vecIntegerArray.push_back(50);
    vecIntegerArray.push_back(51);
    vecIntegerArray.push_back(52);
    vecIntegerArray.push_back(53);
    vecIntegerArray.push_back(54);

    for (size_t i = 0; i < vecIntegerArray.size(); ++i) {
        cout << "Element [" << i << " ] = ";
        cout << vecIntegerArray[i] << endl;
    }

    vecIntegerArray[2] = 2011;
    cout << "After replacement: " << endl;
    cout << "Element[2] = " << vecIntegerArray[2] << endl;

    return 0;
}


