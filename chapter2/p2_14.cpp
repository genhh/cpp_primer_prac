#include <iostream>
int i = 42;
int main(){
    int i = 100, sum = 0;
    for(int i=0; i!=10; i++){//这个i只在for循环内存在
        sum += i;
    }
    std::cout << i << " " << sum << std::endl; // 100 45
    return 0;
}