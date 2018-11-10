//
// Created by biezhihua on 2018/11/10.
//

#include <algorithm>
#include <vector>
#include <iostream>


template<typename numberType>
struct IsMultiple {
    numberType Divisor;

    IsMultiple(const numberType &divisor) {
        Divisor = divisor;
    }

    bool operator()(const numberType &element) {
        return ((element % Divisor) == 0);
    }

};


using namespace std;

int main() {
    vector<int> vecIntegers;
    cout << "The vector contains the following sample values: ";

    for (int nCount = 25; nCount < 32; ++nCount) {
        cout << nCount << " ";
    }

    cout << endl << "Enter divisor (>0:";

    int Divisor = 2;
    cin >> Divisor;

    auto iElement = find_if(vecIntegers.begin(), vecIntegers.end(), IsMultiple<int>(Divisor));

    if (iElement != vecIntegers.end()) {
        cout << "First element in vector divisible by " << Divisor;
        cout << ": " << *iElement << endl;
    }

    return 0;
}

