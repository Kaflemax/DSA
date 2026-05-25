#include<iostream>
using namespace std;
void fibo(int c){
    int a=0,b=1;
    cout<<"Fibonacci Series: ";
    for(int i=1;i<=3;i++){
        cout<<a<<" ";
        c=a+b;
        a=b;
        b=c;
    }
}
int main(){
    int c;
    fibo(c);
    cout<<c<<endl;
    return 0;
}