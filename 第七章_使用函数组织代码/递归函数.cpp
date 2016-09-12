//
// Created by biezhihua on 16-9-12.
//

#include <iostream>

using namespace std;

int fibNumber(int fibIndex) {
    if (fibIndex < 2) {
        return fibIndex;
    } else {
        return fibNumber(fibIndex - 1) + fibNumber(fibIndex - 2);
    }
}

int main(){
    cout << "Enter 0-based index of desired fibonacci number:";
    int index = 0;
    cin >> index;

    cout<< "Fibonacci number is :" << fibNumber(index) << endl;
    return;
}


