/*
* p2_5
* (a) 'a' 字符字面值。 L'a' 宽字符字面值。"a" 字符串字面值。L"a" 宽字符串字面值。
* (b) 10 整型， 10u unsigned整型， 10L long, 10uL unsigned long, 012 八进制, 0xC 十六进制
* (c) 3.14, 3.14f float, 3.14L long double
* (d) 10 , 10u , 10. double , 10e-2 double

* p2_6
* month没区别，day有区别，第一行都是十进制，第二行第一个month是十进制，day是八进制

* p2_7
* (a) 字符串类型 \后面顶多跟3个数字(八进制)构成转义， \x则是后面所有跟着的连续数字(十六进制)都要进行转义
* (b)  long double ,(c) 好像不合法?, (d) long double
*/
#include <iostream>


int main(){
    //std::cout << 3.14e1L << std::endl; //31.4
    //p2_8
    std::cout << "2\115\n";
    std::cout << "2\t\115\n";
    long double ld = 3.1415926;
    //int a{ld}, b = {ld}; //列表初始化对于可能会丢失信息的情况下会编译报错
    return 0;
}