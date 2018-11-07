//
// Created by biezhihua on 16-9-25.
//

#include <iostream>

using namespace std;


#define ARRAY_LENGTH 25
#define PI 3.1416
#define MY_DOUBLE double
#define FAV_WHISKY "Jack Daniels"

int main() {

    int myNumbers[ARRAY_LENGTH] = {0};
    cout << "Array's length: " << sizeof(myNumbers) / sizeof(int) << endl;

    cout << "Enter a radius:";

    MY_DOUBLE radius = 0;
    cin >> radius;

    cout << "Area is:" << PI * radius * radius << endl;

    string favoriteWhisky(FAV_WHISKY);

    cout << "My favorite drink is : " << FAV_WHISKY << endl;

    return 0;
}


