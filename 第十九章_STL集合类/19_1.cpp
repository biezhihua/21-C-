//
// Created by biezhihua on 2016/10/2.
//



#include <set>

using namespace std;

template <typename  T>
struct SortDescending {
    bool operator() (const T& lhs, const T& rhs) const  {
        return (lhs > rhs);
    }
};

int main () {
    set<int> setintegers;
    multiset<int> msetintegers;

    set<int,SortDescending<int>> setInteger2;
    multiset<int,SortDescending<int>> multisetInteger2;

    return 0;
}