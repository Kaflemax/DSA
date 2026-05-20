//Shisir Kafle
#include<iostream>
using namespace std;
int main(){
    double sum=0;
    for(int i = 1; i<=97;i+=2)
    {
        sum=sum+(double)i/(i+2);
    }
    cout<<"The sum of the series is: "<<sum;
    return 0;
}

