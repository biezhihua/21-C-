//
// Created by biezhihua on 16-9-18.
//
#include <iostream>

using namespace std;

class Fish {
public:
    Fish() {
        cout << "Constructed fish" << endl;
    }

    virtual ~Fish() {
        cout << "Destroyed fish" << endl;
    }
};

class Tuna : public Fish {
public:
    Tuna() {
        cout << "Constructed tuna" << endl;
    }

    ~Tuna() {
        cout << "Destroyed tuna" << endl;
    }
};

void deleteFishMemory(Fish *pFish) {
    delete pFish;
}

int main() {
    cout << "Allocating a Tuna on the free store:" << endl;
    Tuna *pTuna = new Tuna;

    cout << "Deleting the tuna:" << endl;

    deleteFishMemory(pTuna);

    cout << "Instantiating a Tuna on the stack:" << endl;

    Tuna myDinner;
    cout << "Automatic destruction as it goes out of scope:" << endl;

    return 0;
}

