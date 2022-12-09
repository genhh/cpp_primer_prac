#include <iostream>

int main(){
    const int i = 42;
    auto j = i;  //int
    const auto &k = i; //auto --> int, so result type is const int  
    auto *p = &i; // const int
    const auto j2 = i, &k2 = i; //auto -->int
    std::cout << "var j type :"<< (typeid(j).name() == typeid(int).name()) << std::endl;
    std::cout << "var k type :"<< (typeid(k).name() == typeid(const int).name()) << std::endl; // const int 和 int 都会判断正确...
    std::cout << "var p type :"<< typeid(p).name() << std::endl;
    std::cout << "var j2 type :"<< typeid(j2).name() << std::endl;
    // decltype: 声明类型为表达式结果的类型，如果是单值，就返回对应类型。
    int *pp = &j;
    decltype(i) ci = 0; // const int类型，不会吞掉const
    decltype(*pp) rj = j; // rj 是int&类型
    decltype(j) d; // int 类型
    decltype((j)) e = d; // int& 类型,加括号后结果永远是引用
    //p2_36 a=4,b=4,c=4,d=4;
    //p2_37 int a b c, int& d
    //p2_38 auto 会把顶层const忽略,decltype会保留。decltype变量再加括号就会变成引用
    return 0;
}