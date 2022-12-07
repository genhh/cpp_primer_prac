#include <iostream>
#include "Sales_item.h"
//但是处理相同书籍的时候并没有认为是相同的书籍，不知道是输入格式不对还是怎么回事？可能是win系统的锅？只有
int main(){
    Sales_item total; //保存下一条交易记录的变量
    //读入第一条交易记录，确保有数据可以处理
    if(std::cin >> total){
        Sales_item trans;//保存和的变量
        //读入并处理剩余交易记录
        while(std::cin >> trans){
            //如果在处理相同的书
            if(total.isbn() == trans.isbn()){
                total += trans; //更新总销售额
            }
            else
            {
                //打印前一本书的结果
                std::cout<<total<<std::endl;
                total = trans; //total 现在表示下一本书的销售额
            }
            
        }

        std::cout << total << std::endl; //打印最后一本书的结果
    }
    else{
        //没有输入！警告
        std::cerr << "No data?" << std::endl;
        return -1; //表示失败
    }

    return 0;
}