#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>
struct  Sales_data
{
    /* data */
    std::string bookNum; //图书序列号
    double price; //单价
    unsigned int num; //卖出数量
    double sum; //总的卖出价格
    int foo();
};
#endif