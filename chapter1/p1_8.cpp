#include <iostream>
using namespace std;

int main(){
    cout<<"/*";
    cout<<"*/";
    //cout<</*"*/"*/; //不合法，最后加个"就合法
    cout<</*"*/" /* "/*" */; //合法
    return 0;
}