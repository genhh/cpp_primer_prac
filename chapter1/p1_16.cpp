#include <iostream>
int main(){
    int sum =0, value = 0;
    while(std::cin >> value){//输入不符合变量类型时或遇到文件结束符才会结束输入
        sum += value;
    }
    std::cout << "sum is : " << sum << std::endl;
    return 0;
}