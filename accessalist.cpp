#include<iostream>
#include<list>
using namespace std;
int main(){
    list<string> cars={"Volvo","BMW","Ford","Mazda"};
   // cars[0]="Toyota";
    cout<<cars[0];
    cout<<cars.front()<<endl;
    cout<<cars.back();
    return 0;
}