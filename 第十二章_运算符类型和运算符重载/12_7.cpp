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

    if (holiday1 == holiday2) {
        cout << "Equality operator: the tow are the same day" << endl;
    } else {
        cout << "Equality operator: the tow are the different day" << endl;

    }


    return 0;
}


