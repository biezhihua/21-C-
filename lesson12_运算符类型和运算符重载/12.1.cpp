//
// Created by biezhihua on 16-9-19.
//

#include <iostream>

using namespace std;

class Date {
private:
    int day;
    int month;
    int year;
public:
    Date(int day, int month, int year) : day(day), month(month), year(year) {
//        this->day = day;
//        this->month = month;
//        this->year = year;
    }

    Date &operator++() {
        ++day;
        return *this;
    }

    Date &operator--() {
        --day;
        return *this;
    }

    Date operator++(int) {
        Date copy(day, month, year);
        --copy;

        return copy;
    }

    Date operator--(int) {
        Date copy(day, month, year);
        --day;
        return copy;
    }


    void displayDate() {
        cout << day << "/" << month << "/" << year << endl;
    }
};

int main() {
    Date holiday(25, 12, 2015);

    cout << "The date object is initialized to:";
    holiday.displayDate();

    ++holiday;

    cout << "Date after prefix-increment is:";
    holiday.displayDate();

    --holiday;
    --holiday;

    cout << "Date after two prefix-decrements is:";
    holiday.displayDate();

    return 0;
}
