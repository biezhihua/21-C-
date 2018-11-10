//
// Created by biezhihua on 2018/11/10.
//

template<typename numberType>
struct IsMultiple {
    numberType Divisor;

    IsMultiple(const numberType &divisor) {
        Divisor = divisor;
    }

    bool operator()(const numberType &element) {
        return ((element % Divisor) == 0);
    }

};


