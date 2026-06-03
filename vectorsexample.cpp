#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<string> cars={"Volvo","BMW","Ford","Mazda"};
    //Get the first element
    cout<<cars.front()<<endl;
    //Get the last element
    cout<<cars.back()<<endl;
    return 0;

}