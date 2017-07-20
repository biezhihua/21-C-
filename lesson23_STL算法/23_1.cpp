//
// Created by biezhihua on 2016/10/6.
//

#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    using namespace std;

    vector<int> ints;

    for (int i = -9; i < 10; ++i) {
        ints.push_back(i);
    }

    cout << "Enter number to find in collection:" << endl;
    int numToFind = 0;
    cin >> numToFind;

    auto iElementFound = find(ints.cbegin(), ints.cend(), numToFind);

    if (iElementFound != ints.cend()) {
        cout << "Result : value " << *iElementFound << " found !" << endl;
    } else {
        cout << "Result: No elements contains value " << numToFind << endl;
    }

    cout << "Finding the first even number using find_if:"<<endl;

    auto iEvenNumber = find_if(ints.cbegin(),ints.cend(),[](int element) {
        return (element % 2) == 0;
    });

    if (iEvenNumber != ints.cend()) {
        cout << "number :"<< *iElementFound<<" ' found at position [";
        cout << distance(ints.cbegin(), iEvenNumber);
        cout << "]"<<endl;
    }

    return 0;
}
