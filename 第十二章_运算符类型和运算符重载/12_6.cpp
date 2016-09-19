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

    void operator+=(int daysToAdd) {
        day += daysToAdd;
    }

    void operator-=(int daysToSub) {
        day -= daysToSub;
    }

    void displayDate() {
        cout << day << "/" << month << "/" << year << endl;
    }
};


int main() {
    Date holiday(25, 12, 2011);

    cout << "Holiday is on:";
    holiday.displayDate();

    cout << "Holiday -= 19 gives:";
    holiday -= 19;
    holiday.displayDate();


    cout << "Holiday += 25 gives:";
    holiday += 25;
    holiday.displayDate();

    return 0;
}


