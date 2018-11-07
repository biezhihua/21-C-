//
// Created by biezhihua on 16-9-25.
//

#include <iostream>

using namespace std;

#define SQUARE(x) ((x)*(x))
#define PI 3.1416
#define AREA_CIRCLE(r) (PI*(r)*(r))
#define MAX(a, b) (((a)>(b))? (a):(b))
#define MIN(a, b) (((a)<(b))? (a):(b))

int main() {

    cout << "Enter an integer:";

    int input1 = 0;

    cin >> input1;

    cout << "SQUARE(" << input1 << ")=" << SQUARE(input1) << endl;
    cout << "Area of a circle with radius " << input1 << " is: ";
    cout << AREA_CIRCLE(input1) << endl;

    cout << "Enter another integer: ";
    int input2 = 0;
    cin >> input2;

    cout << "MIN(" << input1 << ", " << input2 << ")=";
    cout << MIN(input1, input2) << endl;

    cout << "MAX(" << input1 << ", " << input2 << ")=";
    cout << MAX(input1, input2) << endl;

    return 0;
}


