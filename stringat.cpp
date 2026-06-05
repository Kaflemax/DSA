#include<iostream>
#include<vector>
#include<stdexcept>
using namespace std;
int main(){
    vector<int> numbers ={10,20,30};
    try{
        cout<<"Element at index 1: "<<numbers.at(1)<<endl;
        numbers.at(2)=100;
        cout<<"Modified element at index 2: "<<numbers.at(2)<<endl;
        cout<<"This will fail: "<<numbers.at(5)<<endl;
    }
    catch(const out_of_range& e){
        cerr<<"Exception caught: "<<e.what()<<endl;
    }
    return 0;


}