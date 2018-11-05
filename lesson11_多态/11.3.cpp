//
// Created by biezhihua on 16-9-18.
//

#include <iostream>

using namespace std;

class Fish {
public:
    Fish() {
        cout << "Constructed Fish" << endl;
    }

    ~Fish() {
        cout << "Destroyed Fish" << endl;
    }
};

class Tuna : public Fish {
public:
    Tuna() {
        cout << "Constructed Tuna" << endl;
    }

    ~Tuna() {
        cout << "Destroyed Tuna" << endl;
    }
};


void deleteFishing(Fish *inputFish) {
    delete inputFish;
}

int main() {

    cout << "Allocating a Tuna on the free store: " << endl;
    Tuna *pTuna = new Tuna();

    cout << "Deleting the Tuna : " << endl;
    deleteFishing(pTuna);

    cout << "Instantiating a Tuna on the stack:" << endl;
    Tuna myDinner;

    return 0;
}
