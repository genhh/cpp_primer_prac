#include <iostream>
#include "Sales_item.h"
#include <string>
#include <unordered_map>
//暂时没想到简单的方法
using namespace std;
int main(){
    
    Sales_item tmp;
    unordered_map<string, int> st;
    
    while(std::cin >> tmp){
        st[tmp.isbn()]++;
    }

    for(auto [k,v]:st){ // -std=c++17
        cout << k << " times :" << v <<endl;
    }
    return 0;
}