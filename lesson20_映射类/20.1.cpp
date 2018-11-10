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

    map<int, string> mapIntToString1;
    multimap<int, string> mmapIntToString1;

    map<int, string> mapIntToString2(mapIntToString1);
    multimap<int, string> mmapIntToString2(mmapIntToString1);

    map<int, string> mapIntToString3(mapIntToString1.cbegin(), mapIntToString1.cend());
    multimap<int, string> mmapIntToString3(mmapIntToString1.cbegin(), mmapIntToString1.cend());

    map<int, string, ReverseSort<int>> mapIntToString4(mapIntToString1.cbegin(), mapIntToString1.cend());
    multimap<int, string, ReverseSort<int>> mmapIntToString4(mapIntToString1.cbegin(), mapIntToString1.cend());

    return 0;
}