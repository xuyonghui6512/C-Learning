#include <iostream>
using namespace std;
int main() {
    void *pv;
    int i=5;
    pv=&i;
    int* intprint;
    intprint= static_cast<int*>(pv);
    cout<<"*intprint="<<*intprint<<endl;
    const int* ptrb;
    int a;
    int b;
    ptrb=&a;
    int* const p2=&b;
//    p2=&a;错误 常量指针，不能改变所指对象
//    ptrb=10;错误 指向常量的指针，只能指向常量。
    std::cout << "Hello, World!" << std::endl;
    return 0;
}