//
// Created by biezhihua on 16-9-25.
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> vectorInts;
    vectorInts.push_back(50);
    vectorInts.push_back(52);
    vectorInts.push_back(51);
    vectorInts.push_back(555);
    vectorInts.push_back(11);

    cout << "The contents of the vector are:" << endl;

    vector<int>::iterator iArrayWalker = vectorInts.begin();

    while (iArrayWalker != vectorInts.end()) {
        cout << *iArrayWalker << endl;
        ++iArrayWalker;
    }

    vector<int>::iterator iElement = find(vectorInts.begin(), vectorInts.end(), 11);

    if (iElement != vectorInts.end()) {
        int position = distance(vectorInts.begin(), iElement);
        cout << "value " << *iElement;
        cout << " found in the vector at position:" << position << endl;
    }

    return 0;
}

