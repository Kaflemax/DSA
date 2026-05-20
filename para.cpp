#include<iostream>
#include<string>
using namespace std;
void myFunction(string name="shisir",int Roll=31){
cout<<name<<" "<<Roll<<"\n";
}
int main(){
    myFunction("Asim",22);
    myFunction("Richard",33);
    myFunction();
    myFunction("Prasanne",40);
    return 0;
}
