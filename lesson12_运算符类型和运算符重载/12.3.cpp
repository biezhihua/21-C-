//
// Created by biezhihua on 16-9-19.
//
#include <iostream>
#include <memory>

using namespace std;

class Date {
private :
    int day;
    int month;
    int year;
    string dateInString;

public:
    Date(int day, int month, int year) : day(day), month(month), year(year) {
    }

    void displayDate() {
        cout << day << "/" << month << "/" << year << endl;
    }
};

int main() {
    unique_ptr<int> pDynamicAllocInteger(new int);
    *pDynamicAllocInteger = 42;

    cout << "Integer value is :" << *pDynamicAllocInteger << endl;

    unique_ptr<Date> pHoliday(new Date(25, 11, 2015));
    cout << "The new instance of date contains:";
    pHoliday->displayDate();

    return 0;
}
