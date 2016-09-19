//
// Created by biezhihua on 16-9-19.
//

#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class Date {
private:
    int day;
    int month;
    int year;
public:
    Date(int day, int month, int year) : day(day), month(month), year(year) {
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

    string dateInString;

    operator const char *() {
        ostringstream formattedDate;
        formattedDate << day << "/" << month << "/" << year;

        dateInString = formattedDate.str();
        return dateInString.c_str();
    }

    void displayDate() {
        cout << day << "/" << month << "/" << year << endl;
    }
};

int main() {
    Date holiday(25, 12, 2015);
    cout << "Holiday is on:" << holiday << endl;

    return 0;
}
