#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> numbers={10,20,30,40};
    cout<<"Last element: "<<numbers.back()<<endl;
    numbers.back()=90;
    cout<<"New last element: "<<numbers.back()<<endl;
    return 0;
}