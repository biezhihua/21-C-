
//
// Created by biezhihua on 2016/10/5.
//


#include <algorithm>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

template<typename T>
void displayContents(const T &input) {
    for (auto ielement = input.cbegin(); ielement != input.cend(); ielement++) {
        cout << *ielement << endl;
    }
}

int main() {
    vector<string> vecNames;

    vecNames.push_back("bie");
    vecNames.push_back("zhi");
    vecNames.push_back("hua");

    cout << "The names in vector in order of insertion :" << endl;
    displayContents(vecNames);
    cout << "Nmaes after sorting using default std:less<>:" << endl;
    sort(vecNames.begin(), vecNames.end());
    displayContents(vecNames);

    cout << "Names after sorting using predicate that ignores case:" << endl;
    sort(vecNames.begin(), vecNames.end(), [](const string &str1, const string &str2) -> bool {
        string str1Lowercase;

        str1Lowercase.resize(str1.size());

        transform(str1.begin(), str1.end(), str1Lowercase.begin(), tolower);

        string str2Lowercase;

        str2Lowercase.resize(str2.size());

        transform(str2.begin(), str2.end(), str2Lowercase.begin(), tolower);

        return (str1Lowercase < str2Lowercase);
    });

    displayContents(vecNames);


    return 0;
}
