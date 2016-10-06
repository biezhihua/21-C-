//
// Created by biezhihua on 2016/10/6.
//

#include <iostream>

using namespace std;

double divide(double dividend, double divisor) {
    if (divisor == 0) {
        throw "Dividing by 0 is a crime";
    }
    return (dividend / divisor);
}

int main() {
    cout << "Enter dividend:";
    double dividend = 0;
    cin >> dividend;

    cout << "Enter divisor:";
    double divisor;
    cin >> divisor;

    try {
        cout << "Result of division is : " << divide(dividend, divisor);
    } catch (char *exp) {
        cout << "Exception :" << exp << endl;
        cout << "Sorry,can't continuew!" << endl;
    }
    return 0;
}
