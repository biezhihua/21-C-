//
// Created by biezhihua on 16-9-27.
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vecInteger;

    vecInteger.push_back(51);
    vecInteger.push_back(52);
    vecInteger.push_back(53);
    vecInteger.push_back(54);
    vecInteger.push_back(55);

    vector<int>::iterator iElementLocator = vecInteger.begin();

    while (iElementLocator != vecInteger.end()) {
        size_t index = distance(vecInteger.begin(), iElementLocator);
        cout << "Element at position ";
        cout << index << " is: " << *iElementLocator << endl;
        ++iElementLocator;
    }

    for (auto iElement = vecInteger.cbegin(); iElement != vecInteger.cend(); ++iElement) {
        cout << *iElement << " ";
    }

    return 0;
}

