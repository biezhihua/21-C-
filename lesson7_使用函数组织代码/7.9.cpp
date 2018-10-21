//
// Created by biezhihua on 2018/10/21.
//

#include <iostream>

using namespace std;

const double Pi = 3.1416;

/**
 * 引用参数
 */
void Area(double radius, double &result) {
    result = Pi * radius * radius;
}

int main() {
    double radius = 3;
    double areaFetched = 0;

    Area(radius, areaFetched);

    cout << "The area is " << areaFetched << endl;
    return 0;

}