//
// Created by biezhihua on 16-9-27.
//

#include <vector>
#include <iostream>

using namespace std;

void displayVector(const vector<int> &vecInput) {
    for (auto iElement = vecInput.cbegin(); iElement != vecInput.cend(); ++iElement) {
        cout << *iElement << " ";
    }
    cout << endl;
}


int main() {

    vector<int> vecIntegers(4, 0);
    displayVector(vecIntegers);

    vecIntegers.insert(vecIntegers.begin() + 2, 25);
    displayVector(vecIntegers);

    vecIntegers.insert(vecIntegers.end(), 2, 45);
    displayVector(vecIntegers);


    vector<int> vecAnother(2, 30);
    displayVector(vecAnother);

    return 0;
}

