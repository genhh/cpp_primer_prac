#include <iostream>
using namespace std;

int main(){
    int a = 0, b = 0;
    cout<<"please input num a and b (a > b):"<<endl;
    cin>>a>>b;
    if(a<b) swap(a,b);
    while(a>=b){
        cout<<a--<<" ";
    }
    
    cout<<endl;
    return 0;
}