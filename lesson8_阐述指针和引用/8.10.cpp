//
// Created by biezhihua on 16-9-13.
//

#include <iostream>

using namespace std;

void CalcArea(const double *const pPi, const double *const pRadius, double *const pArea) {
    if (pPi && pRadius && pArea) {
        *pArea = (*pPi) * ((*pRadius) * (*pRadius));
    }
}

int main() {

    const double Pi = 3.1416;

    cout << "Enter radius of circle:";
    double radius = 0;
    cin >> radius;

    double area = 0;
    CalcArea(&Pi, &radius, &area);

    cout << "Area is = " << area << endl;

    return 0;
}
