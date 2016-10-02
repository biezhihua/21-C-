//
// Created by biezhihua on 16-9-27.
//

#include <vector>

int main() {
    std::vector<int> vecIntegers;

    std::vector<int> vecWithThenElements(10);

    std::vector<int> vecWithThenInitializedElements(10, 90);

    std::vector<int> vecArrayCopy(vecWithThenInitializedElements);

    std::vector<int> vecSomeElementsCopied(vecWithThenElements.cbegin(), vecWithThenElements.cbegin() + 5);



    return 0;
}

