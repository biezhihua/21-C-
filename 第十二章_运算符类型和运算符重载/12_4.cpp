//
// Created by biezhihua on 16-9-19.
//
#include <iostream>

using namespace std;

template<typename T>
class smart_pointer {
private:
    T *m_pRawPointer;
public:
    smart_pointer(T *pData) : m_pRawPointer(pData) {

    }

    ~smart_pointer() {
        delete m_pRawPointer;
    }

    T &operator*() const {
        return *(m_pRawPointer);
    }

    T *operator->() const {
        return m_pRawPointer;
    }
};

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
    smart_pointer<int> pDynamicInt(new int(42));
    cout << "Dynamically allocated integer value=" << *pDynamicInt << endl;

    smart_pointer<Date> pDate(new Date(24, 12, 2011));
    cout << "Date is = ";
    pDate->displayDate();
    return 0;
}
