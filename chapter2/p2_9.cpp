/*
* p2_9
* (a) 通过用户输入变量值来赋值， 应该把int类型定义放在cin之前
* (b) 有信息丢失的风险，会编译报错，不用花括号初始化
* (c) 变量wage未定义，把它去掉
* (d) 没问题，初始化

* p2_10
* global_str "", golbal_int 0, local_int 随机数, local_str ""

* 声明可以多次，定义只能一次

* p2_11
* (a) 声明
* (b)  定义 (c) 声明,

* c++操作符替代名??

* p2_12
* 非法: a c d
*/
#include <iostream>

int main(){
    //std::cout << 3.14e1L << std::endl; //31.4
    //p2_8
    std::cout << "2\115\n";
    std::cout << "2\t\115\n";
    long double ld = 3.1415926;
    //int a{ld}, b = {ld}; //列表初始化对于可能会丢失信息的情况下会编译报错
    int Double;
    return 0;
}