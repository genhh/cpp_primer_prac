#include <iostream>
// p1_17 所有值相等输出: num occurs n times
//所有值不等： num1 occurs 1 times\n num2 occurs 1 times\n ...
//p18: 如下所示
//p19
int main(){
    int curval = 0, val = 0;
    if(std::cin >> curval){
        int cnt = 1;
        while(std::cin >> val){
            if(val == curval){
                ++cnt;
            } else {
                std::cout << curval << " occurs "
                          << cnt << " times " << std::endl;
                curval = val;
                cnt = 1;
            }
        }
        std::cout << curval << " occurs "
                                << cnt << " times " << std::endl;
    }
    return 0;
}