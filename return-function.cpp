#include<iostream>
#include<string>
using namespace std;
int sum(int a=3,int b=6){
    cout<<a+b<<endl;
}
int main(){
    sum(4,5);
    sum();
    sum(4,6);
    sum(6,7);
    return 0;
}
