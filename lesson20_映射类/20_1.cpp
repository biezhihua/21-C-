//
// Created by biezhihua on 2016/10/3.
//

#include <map>
#include <string>


template<typename KeyType>
struct ReverseSort {
    bool operator()(const KeyType &key1, const KeyType &key2) {
        return key1 > key2;
    }
};

int main() {
    using namespace std;

    map<int,string> mapIntToString1;
    multimap<int,string> mmapIntToString1;


    return 0;
}