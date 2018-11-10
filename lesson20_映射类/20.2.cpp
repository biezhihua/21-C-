//
// Created by biezhihua on 2018/11/10.
//

#include <map>
#include <iostream>
#include <string>

using namespace std;

typedef map<int, string> MAP_INT_STRING;
typedef multimap<int, string> MMAP_INT_STRING;

template<typename T>
void displayContents(const T &input) {
    for (auto iElement = input.cbegin(); iElement != input.cend(); iElement++) {
        cout << iElement->first << " -> " << iElement->second << endl;
    }
}

int main() {
    MAP_INT_STRING mapIntString;

    // Insert a pair using function make_pair
    mapIntString.insert(MAP_INT_STRING::value_type(3, "Three"));

    // Insert a pair object directly
    mapIntString.insert(pair<int, string>(1000, "One Thousand"));

    // Insert using an array-like syntax for inserting key-value pairs
    mapIntString[1000000] = "One Million";

    cout << "The map contains " << mapIntString.size();
    cout << " key-value pairs. They are: " << endl;
    displayContents(mapIntString);

    // instantiate a multimap that is a copy of map
    MMAP_INT_STRING mmapIntString(mapIntString.cbegin(), mapIntString.cend());

    // The insert function works the same way for multimap too
    // A multimap can store duplicates - insert a duplicate
    mmapIntString.insert(make_pair(1000, "Thousand"));

    cout << endl << " The multimap contains " << mmapIntString.size();
    cout << " key-value pairs. They are: " << endl;
    cout << "The elements in the multimap are: " << endl;
    displayContents(mmapIntString);

    cout << "The number of pairs in the multimap with 1000 as their key:" << mmapIntString.count(1000) << endl;

    return 0;
}
