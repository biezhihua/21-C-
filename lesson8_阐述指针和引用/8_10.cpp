//
// Created by biezhihua on 16-9-13.
//

#include <iostream>

using namespace std;

void calcArea(const double *pArea) {
    double a = 13;
    pArea = &a;
}


int main() {

    double a = 1;

    calcArea(&a);

    cout << a;

}
