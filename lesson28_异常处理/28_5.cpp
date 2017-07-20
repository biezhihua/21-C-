//
// Created by biezhihua on 2016/10/6.
//

#include <exception>
#include <iostream>
#include <string>

using namespace std;

class CustomException : public std::exception {
    string reason;

public:
    CustomException(const char *why) : reason(why) {}

    virtual const char *what() const throw() {
        return reason.c_str();
    }

};

double divide(double dividend, double divisor) {
    if (divisor == 0) {
        throw CustomException("CustomException:Dividing by 0 is a crime");
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
    } catch (exception &exp) {
        cout << exp.what() << endl;
        cout << "Sorry, can't continuew!" << endl;
    }
    return 0;
}
