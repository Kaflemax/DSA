#include<iostream>
using namespace std;
int main(){
    int myNumber[5]={10,20,40,50};
    int getArraylength=sizeof(myNumber)/sizeof(myNumber[0]);
    cout<<getArraylength;
    return 0;
}