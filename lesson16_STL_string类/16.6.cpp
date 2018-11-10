//
// Created by biezhihua on 16-9-27.
//

#include <string>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {


    string strSample("Hello String! We will reverse you!");
    cout << "The original sample string is:" << endl;
    cout << strSample << endl << endl;

    reverse(strSample.begin(), strSample.end());

    cout << "After apply the std::reverse algorithm:" << endl;
    cout << strSample << endl;

    return 0;
}