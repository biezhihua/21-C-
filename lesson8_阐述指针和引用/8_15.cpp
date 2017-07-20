//
// Created by biezhihua on 16-9-13.
//
#include <iostream>

using namespace std;

int main() {

    try {
        int *pAge = new int[5368711111110911];

        delete[] pAge;
    } catch (bad_alloc) {
        cout << "Memory allocation failed. Ending program" << endl;
    }


    return 0;
}

