//
// Created by biezhihua on 2016/10/3.
//
#include <vector>
#include <iostream>
#include <algorithm>

template<typename Type>
class Multiply {
public:
    Type operator()(const Type &type1, const Type &type2) {
        return type1 * type2;
    }
};

int main() {
    using namespace std;

    vector<int> vecMultiplicand,vecMultiplier;

    for (int i = 0; i < 10; ++i) {
        vecMultiplicand.push_back(i);
    }


    for (int i = 100; i < 110; ++i) {
        vecMultiplier.push_back(i);
    }

    vector<int> vecResult;
    vecResult.resize(10);

    transform(vecMultiplicand.begin(), vecMultiplicand.end(), vecMultiplier.begin(), vecResult.begin(),
              Multiply<int>());

    for (int j = 0; j < vecMultiplicand.size(); ++j) {
        cout << vecMultiplicand[j] << ' ';
    }
    cout << endl;

    for (int k = 0; k < vecMultiplier.size(); ++k) {
        cout << vecMultiplier[k] << " ";
    }
    cout << endl;

    for (int l = 0; l < vecResult.size(); ++l) {
        cout << vecResult[l] << " ";
    }




    return 0;
}

