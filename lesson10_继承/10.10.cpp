

#include <iostream>

using namespace std;

class Mammal {
public:
    void feedBabyMilk() {
        cout << "Mammal: baby says glug!" << endl;
    }
};

class Reptile {
public:
    void spitVenom() {
        cout << "Reptile: Shoo enemy! Spits  venom!" << endl;
    }
};

class Bird {
public:
    void layEggs() {
        cout << "Bird: laid my eggs, am lighter now!" << endl;
    }
};


class Platypus : public Mammal, public Bird, public Reptile {
public :

    void swim() {
        cout << "Platypus: Voila, I can swim!" << endl;
    }
};

int main() {

    Platypus realFreak;

    realFreak.layEggs();
    realFreak.feedBabyMilk();
    realFreak.spitVenom();
    realFreak.swim();

    return 0;
}