//
// Created by biezhihua on 16-9-18.
//
#include <iostream>

using namespace std;

class Fish {
public:
    virtual Fish *clone() = 0;

    virtual void swim() = 0;
};

