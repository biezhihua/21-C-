//
// Created by biezhihua on 2018/11/10.
//

#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    vector<int> vecMultiplicand, vecMultiplier;

    for (int nCount1 = 0; nCount1 < 10; nCount1++) {
        vecMultiplicand.push_back(nCount1);
    }

    for (int nCount2 = 100; nCount2 < 110; nCount2++) {
        vecMultiplier.push_back(nCount2);
    }

    vector<int> vecResult;

    vecResult.resize(10);

    transform(vecMultiplicand.begin(), vecMultiplicand.end(), vecMultiplier.begin(), vecResult.begin(),
              [](int a, int b) {
                  return a * b;
              });

    cout << "The contents of the first vector are:" << endl;
    for (size_t nIndex1 = 0; nIndex1 < vecMultiplicand.size(); nIndex1++) {
        cout << vecMultiplicand[nIndex1] << " ";
    }
    cout << endl;

    cout << "The contents of the second vector are:" << endl;
    for (size_t nIndex2 = 0; nIndex2 < vecMultiplier.size(); nIndex2++) {
        cout << vecMultiplier[nIndex2] << " ";
    }
    cout << endl;


    cout << "The result of multiplication is : " << endl;
    for (size_t nIndex = 0; nIndex < vecResult.size(); nIndex++) {
        cout << vecResult[nIndex] << " ";
    }
    cout << endl;
}