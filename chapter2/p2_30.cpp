/*
* 顶层const: 常量指针、指针、算数类型、类等
* 底层const: 指向常量的指针，引用

* 对于指针来说，拷贝必须其指向类型一致才合法，
*/
#include <iostream>

int main(){
    //p2_30
    const int v2 = 0;//顶层
    int v1 = v2; //顶层
    int *p1 = &v1, &r1 = v1; //顶层，底层
    const int *p2 = &v2, *const p3 = &v2, &r2 = v2; //最左边const 底层， 中间const顶层，右侧引用底层
    //p2_31
    r1 = v2; //顶层const拷贝不受限
    // p1 = p2; //不合法，底层拷贝受限
    p2 = p1; //非常量转换为常量
    //p1 = p3; //不合法
    p2 = p3;//合法
    // 常量表达式，等号左右侧都是常量const,在编译时就得到计算
    // constexpr:防止const初始化时赋值的不确定性，确保一定是常量，const的加强版?
    // constexpr指针的初始值必须是nullptr or 0
    //下面两个声明等价??
    constexpr int *q = nullptr;
    int *const q1 = nullptr;
    //p2_32
    int null = 0, *p = nullptr;//不能用整型初始化指针，即使其值为0
    // 类型别名
    typedef double SI;
    using SII = double;

    //const相当于修饰符，在之前未起别名的时候，靠近*的const就是修饰指针，所以为常量指针，靠近初始类型的const就是修饰指向的对象，所以是指向常量的指针。
    //经过别名之后相当于把指针和初始类型绑定在一起，因此const会优先修饰指针，相当于指针的类型覆盖了原有类型
    typedef char* pstring;
    const pstring cstr = 0; 
    const pstring *ps;
    const auto &j = 42; //可以为常量引用绑定字面值
    return 0;
}