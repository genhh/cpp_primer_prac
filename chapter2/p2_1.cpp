/*
* p2_1
* 整型都是默认带符号的，加unsigned可以编程无符号类型
*  int：执行整数运算
*  long: 和int尺寸一样
*  long long： 超过int的表示范围时需要用 long long
*  short：比int尺寸还要小

*  无符号(unsigned)：可以表示为正数、0
*  带符号(signed):可以表示为正数、负数、0


*  float 1个字=4字节=32位bit。 单精度
*  double： 双精度，一般用于浮点数运算

* p2_2
* 按揭贷款就是买房时房子可以住，但是要分期付款加利息
* 本金一般来说应该是整数，用整型就行，利率和分期付款一般都会有小数，所以用浮点类型
*/

//p2_3,p2_4
#include <iostream>


int main(){
    unsigned u = 10, u2 = 42;
    std::cout << u2 -u << std::endl; //32
    std::cout << u -u2 << std::endl; //2^32 - 32 = 4294967264

    int i = 10, i2 = 42;
    std::cout << i2 -i << std::endl; //32
    std::cout << i -i2 << std::endl; //-32
    std::cout << i -u << std::endl; //0
    std::cout << u -i << std::endl; //0

    return 0;
}