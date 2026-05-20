//Shisir Kafle
#include<iostream>
using namespace std;
class Student{
    private:
    string name;
    int age;
    public:
    //Default Constructor
    Student()
    {name = "Unknown";
    age=0;
    }
    //Parametarized Constructor
    Student(string n,int a){
            name= n;
            age = a;
        cout<<"Student created: "<<name<<endl;
    } 
        
        //Copy Constructor
        Student(const Student &s){
            name=s.name;age=s.age;
        }
        //Destructor
        ~Student(){
            cout<<name<<"Object Destroyed."<<endl;
        }
        void display(){
            cout<<name<<" |Age: "<<age<<endl;
        }
    };
    int main(){
        Student s1("Alice", 20);
        Student s2=s1;
        s1.display();
        return 0;
    }
