#include <iostream>
using namespace std;

int main(){
    int a = 50, sum = 0;
    while(a<=100){
        sum += a++;
    }
    cout<<sum<<endl;
    return 0;
}