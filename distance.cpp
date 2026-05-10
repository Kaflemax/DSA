#include<iostream>
#include<cmath>
using namespace std;
int main(){
double x1,x2,y1,y2,d;
cout<<"Enter the value of x1 ";
cin>>x1;
cout<<"Enter the value of x2 ";
cin>>x2;
cout<<"Enter the value of y1 ";
cin>>y1;
cout<<"Enter the value of y2 ";
cin>>y2;
d=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
cout<<"The distance is "<<d<<endl;
return 0;
}
