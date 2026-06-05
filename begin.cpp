#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> numbers = {10,20,30,40,50};
    vector<int>::iterator it = numbers.begin();
    cout<<"First Element: "<<*it<<"\n\n";
    cout<<"All elements: "<<;
    for(auto iter=numbers.begin();iter!=numbers.end();++iter){
        cout<<*iter<<"";
    
    }
    return 0;
}