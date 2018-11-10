//
// Created by biezhihua on 16-9-27.
//

#include <iostream>
#include <vector>

using namespace std;

template<typename T>
void displayVecotr(const vector<T> &vecInput) {
    for (auto iElement = vecInput.cbegin(); iElement != vecInput.cend(); ++iElement) {
        cout << *iElement << " ";
    }
    cout << endl;
}

int main() {
    vector<int> vecInteger;

    vecInteger.push_back(51);
    vecInteger.push_back(52);
    vecInteger.push_back(53);
    vecInteger.push_back(54);
    vecInteger.push_back(55);

    cout << "Vector contains " << vecInteger.size() << " elements: ";
    displayVecotr(vecInteger);

    vecInteger.pop_back();

    cout << "After a call to pop_back()" << endl;

    cout << "Vector contains " << vecInteger.size() << " elements: ";
    displayVecotr(vecInteger);

    return 0;
}

