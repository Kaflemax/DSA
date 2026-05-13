#include<iostream>
using namespace std;
class Animal{
    public:
    string name;
    void eat(){
        cout<<"Eating\n";
    } 
    void sleep(){
        cout<<"Sleeping";
    }
};
class Dog: public Animal{
   public: 
    void bark(){
        cout<<"Woof!";
       }
    };
    
    int main(){
            Dog d;
            d.name="Rex";
            d.eat();
            d.bark();
            return 0;
        }
    