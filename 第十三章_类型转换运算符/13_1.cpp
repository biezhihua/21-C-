//
// Created by biezhihua on 16-9-21.
//
#include <iostream>

using namespace std;


class Fish {
public:
    virtual void swim() {
        cout << "Fish swims in water" << endl;
    }

    virtual ~Fish() { }
};

class Tuna : public Fish {
public:
    void swim() {
        cout << "Tuna swims real fast in the sea" << endl;
    }

    void becomeDinner() {
        cout << "Tuna become dinner in sushi" << endl;
    }
};

class Crap : public Fish {
public:
    void swim() {
        cout << "crap swims real show in the lake" << endl;
    }

    void talk() {
        cout << "Carp talked crap" << endl;
    }
};

void detecFishType(Fish *inputFish) {
    Tuna *pIsTuna = dynamic_cast<Tuna *>(inputFish);

    if (pIsTuna) {
        cout << "Detected tuna. making tuna dinner:" << endl;
        pIsTuna->becomeDinner();
    }

    Crap *pIsCarp = dynamic_cast<Crap *>(inputFish);
    if (pIsCarp) {
        cout << "Detected carp. making carp talk:" << endl;
        pIsCarp->talk();
    }

    cout << "Verifying type using vertual fish:swim" << endl;
    inputFish->swim();
}

int main() {
    Crap myLunch;
    Tuna myDinner;

    detecFishType(&myDinner);

    cout << endl;

    detecFishType(&myLunch);

    return 0;
}