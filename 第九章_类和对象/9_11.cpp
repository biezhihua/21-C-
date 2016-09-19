//
// Created by biezhihua on 16-9-15.
//

#include <iostream>

using namespace std;

class MonsterDB {
private:
    ~MonsterDB() { }

public:
    static void destroyInstance(MonsterDB *pInstance) {
        delete pInstance;
    }
};

int main() {
    MonsterDB *pInstance = new MonsterDB();

    MonsterDB::destroyInstance(pInstance);
    return 0;
}

