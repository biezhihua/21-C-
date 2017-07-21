#include <iostream>

using namespace std;

class Copy_construct_Line {
public:
    int getLength(void);

    Copy_construct_Line(int len);             // 简单的构造函数
    Copy_construct_Line(const Copy_construct_Line &obj);      // 拷贝构造函数
    ~Copy_construct_Line();                     // 析构函数

private:
    int *ptr;
};

// 成员函数定义，包括构造函数
Copy_construct_Line::Copy_construct_Line(int len) {
    cout << "调用构造函数" << endl;
    // 为指针分配内存
    ptr = new int;
    *ptr = len;
}

Copy_construct_Line::Copy_construct_Line(const Copy_construct_Line &obj) {
    cout << "调用拷贝构造函数并为指针 ptr 分配内存" << endl;
    ptr = new int;
    *ptr = *obj.ptr; // 拷贝值
}

Copy_construct_Line::~Copy_construct_Line(void) {
    cout << "释放内存" << endl;
    delete ptr;
}

int Copy_construct_Line::getLength(void) {
    return *ptr;
}

void display(Copy_construct_Line obj) {
    cout << "line 大小 : " << obj.getLength() << endl;
}

void display(Copy_construct_Line *obj) {
    cout << "line 大小 : " << obj->getLength() << endl;
}

// 程序的主函数
int main() {
    Copy_construct_Line line(10);
    display(line);

    Copy_construct_Line *line1 = new Copy_construct_Line(11);
    display(line1);

    Copy_construct_Line line2 = line;
    display(line2);

    return 0;
}