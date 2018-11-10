//
// Created by biezhihua on 2016/10/3.
//

#include <algorithm>
#include <string>
#include <iostream>
#include <vector>

using namespace std;

class CompareStringNoCase {
public:
    bool operator()(const string &str1, const string &str2) {
        string str1LowerCase;
        str1LowerCase.resize(str1.size());

        transform(str1.begin(), str1.end(), str1LowerCase.begin(), tolower);

        string str2LowerCase;
        str2LowerCase.resize(str2.size());

        transform(str2.begin(), str2.end(), str2LowerCase.begin(), tolower);

        return str1LowerCase < str2LowerCase;
    }
};

template<typename T>
void displayContents(const T &input) {
    for (auto item = input.cbegin(); item != input.end(); item++) {
        cout << *item << endl;
    }
}

int main() {
    vector<string> vecNames;

    vecNames.push_back("biezhihua");
    vecNames.push_back("biezhihua1");
    vecNames.push_back("biezhihua2");
    vecNames.push_back("biezhihua3");

    displayContents(vecNames);

    sort(vecNames.begin(), vecNames.end());
    displayContents(vecNames);

    sort(vecNames.begin(), vecNames.end(), CompareStringNoCase());
    displayContents(vecNames);
    return 0;
}
