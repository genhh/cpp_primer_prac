#include <iostream>
using namespace std;

int main(){
    int a=0 , b=0;

    cout<<"Please input num a and b:"<<endl;
    cin>>a>>b;

    cout<<"The result of "<<a 
        << " and "<<b
        <<" is "<<a*b<<endl;
    //p1.5
    cout<<"The result of "<<a; 
    cout<< " and "<<b;
    cout<<" is "<<a*b<<endl;

    //p1.6 不合法，把前两行末尾分号去掉，或者后两行补齐std::cout,类似p1.5

    return 0;
}