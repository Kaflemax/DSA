#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    a=0;
    b=1;
     cout<<a<<endl;
    cout<<b<<endl;
    for(int i=0;i<=10;i++){
        c=a+b;
        a=b;
        b=c;
        cout<<c<<endl;
    }
     return 0;
}