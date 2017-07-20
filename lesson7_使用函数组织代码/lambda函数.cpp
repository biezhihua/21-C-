//
// Created by biezhihua on 16-9-12.
//
#include <iostream>
#include <algorithm>

using namespace std;

void displayNums(vector<int> &dynArray) {
    for_each(dynArray.begin(), dynArray.end(), [](int element) {
        cout << element << " ";
    });
    cout << endl;
}

int main() {

    vector<int> myNumbers;
    myNumbers.push_back(504);
    myNumbers.push_back(503);
    myNumbers.push_back(501);
    myNumbers.push_back(505);
    myNumbers.push_back(502);

    displayNums(myNumbers);

    cout << "Sorting them in descending order" << endl;

    sort(myNumbers.begin(), myNumbers.end(), [](int num1, int num2) {
        return num2 < num1;
    });

    displayNums(myNumbers);


}


