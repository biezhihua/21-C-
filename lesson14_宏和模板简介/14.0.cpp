//
// Created by biezhihua on 2018/11/7.
//


template<typename T1, typename T2 = T1>
bool TemplateFunction(const T1 &param1, const T2 &param2);

template<typename T1, typename T2=T1>
class Template {
private :
    T1 m_Obj1;
    T2 m_Obj2;

public:
    T1 getObj1() {
        return m_Obj1;
    }
};


template<typename objectType>
const objectType &getMax(const objectType &value1, const objectType &value2) {
    if (value1 > value2) {
        return value1;
    }
    return value2;
}


template<typename T>
class TemplateClass {
    T m_member;
};

TemplateClass<int> IntTemplate;


template<typename T1=int, typename T2=int>
class HoldsPair {

};

int main() {

    int integer1 = 25;
    int integer2 = 40;

    int maxValue = getMax<int>(integer1, integer2);

    double maxValue2 = getMax<double>(1.0, 2.0);


    return 0;
}