#include <iostream>
#include <string>
#include "Sales_data.h"
struct Foo{}; //会报错p2_39.cpp:3:13: error: expected ';' after struct definition struct Foo{}

//p2_40
/*struct  Sales_data
{
    
    std::string bookNum; //图书序列号
    double price; //单价
    unsigned int num; //卖出数量
    double sum; //总的卖出价格
    int foo();
};
*/

// p2_41
// p2_42 懒得做了，后面有空再说
int main(){
    Sales_data t;
    t.foo();
    return 0;
}