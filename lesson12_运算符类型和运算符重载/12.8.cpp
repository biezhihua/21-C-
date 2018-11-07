//
// Created by biezhihua on 16-9-19.
//

#include <iostream>

using namespace std;

class Date {
private :
    int day;
    int month;
    int year;
public:
    Date(int day, int month, int year) : day(day), month(month), year(year) {
    }

    bool operator==(const Date &compareTo) {
        return ((day == compareTo.day) && (month == compareTo.month) && (year == compareTo.year));
    }

    bool operator!=(const Date &compareTo) {
        return !(this->operator==(compareTo));
    }

    bool  operator<(const Date &compareTo) {
        if (year < compareTo.year) {
            return true;
        } else if (month < compareTo.month) {
            return true;
        } else if (day < compareTo.day) {
            return true;
        } else {
            return false;
        }
    }

    bool operator<=(const Date &compareTo) {
        if (this->operator==(compareTo)) {
            return true;
        } else {
            return this->operator<(compareTo);
        }
    }

    bool operator>(const Date &compareTo) {
        return !(this->operator<=(compareTo));
    }

    bool operator>=(const Date &compareTo) {
        if (this->operator==(compareTo)) {
            return true;
        } else {
            return this->operator>(compareTo);
        }
    }

    void displayDate() {
        cout << day << "/" << month << "/" << year << endl;
    }
};


int main() {
    Date holiday1(25, 12, 2011);
    Date holiday2(25, 12, 2011);

    cout << "Holiday 1 is ";
    holiday1.displayDate();

    cout << "Holiday 2 is ";
    holiday2.displayDate();

    if (holiday1 < holiday2) {
        cout << "operator<: holiday1 happens first" << endl;
    }

    if (holiday2 > holiday1) {
        cout << "operator>:holiday2 happens later" << endl;
    }

    if (holiday1 <= holiday2) {
        cout << "operator<=: holiday1 happens on or before holiday2" << endl;
    }

    if (holiday2 >= holiday1) {
        cout << "operator>=: holiday2 happens on or after holiday1" << endl;
    }

    return 0;
}


