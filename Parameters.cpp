#include<iostream>
#include<string>
using namespace std;
void myFunction(string country = "Norway", string capital = "Oslo"){
    cout<<country<<" "<<capital<<"\n";
}
int main(){
  //  string country,capital
    myFunction("Sweden","Oslo");
    myFunction("India","New Delhi");
    myFunction(); //Default function
    myFunction("USA","Washington DC");
    return 0;
}