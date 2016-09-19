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

    Date operator+(int daysToAdd) {
        return Date(day + daysToAdd, month, year);
    }

    Date operator-(int daysToSub) {
        return Date(day - daysToSub, month, year);
    }

    void displayDate() {
        cout << day << "/" << month << "/" << year << endl;
    }
};


int main() {
    Date holiday(25, 12, 2011);

    cout << "Holiday on:";
    holiday.displayDate();

    Date previousHoliday(holiday - 19);
    cout << "Previous holiday on:";
    previousHoliday.displayDate();

    Date nextHoliday(holiday + 6);
    cout << "Next holiday on:";
    nextHoliday.displayDate();

    return 0;
}


