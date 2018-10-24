//
// Created by biezhihua on 16-9-15.
//

#include <iostream>

using namespace std;

class President {
private:

    // private default constructor
    President() {}

    // private copy constructor
    President(const President &president);

    // private operator =
    const President &operator=(const President &);

    string name;
public:

    static President &getInstance() {
        // static objects are constructed only once
        static President onlyInstance;
        return onlyInstance;
    }

    string getName() {
        return name;
    }

    void setName(string inputName) {
        name = inputName;
    }
};

int main() {
    President::getInstance().setName("biezhihua");

    President::getInstance().setName("haha");

//    President second;
//    President * thrird = new President();

//    President fourth = onlyPresident;
//    President& ti = onlyPresident; ok
//    onlyPresident = President::getInstance();

    cout << President::getInstance().getName() << endl;

    return 0;
}

