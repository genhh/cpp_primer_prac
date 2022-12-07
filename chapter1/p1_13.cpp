//p1.12 将 -100至100之间的数字进行加和，sum终值是0

//p1_13 重写P1.9,1.10,1.11,这里只重写9，后面的类似

//p1_14 for循环次数已知，while循环次数可以是未知

//p1_15 语法错误，类型错误，声明错误
#include <iostream>
using namespace std;

int main(){
    int sum = 0;
    for(int a=50;a<=100;a++){
        sum += a;
    }
    cout<<sum<<endl;
    return 0;
}