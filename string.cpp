#include<iostream>
#include<string>
using namespace std;
int main(){
    string baseStr = "Hello";
    baseStr.append("World");
    baseStr+="!";
    cout<<baseStr<<endl;
    return 0;
}