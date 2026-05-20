#include<iostream>
#define pi 3.14;
using namespace std;
int main(){
    float d,c;
    cout<<"Enter diameter of a circle "<<endl;
    cin>>d;
    c=2*pi*(d/2);
    cout<<"The circumference of a circle is "<<c<<endl;
    return 0;
}