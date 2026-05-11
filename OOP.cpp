#include<iostream>
using namespace std;
        class Car {
            public:
            string brand; //attribute
            int speed;

            void accelerate(){ //method
                speed+=10;
                cout<<"Speed: "<<speed;
            }
        };
        //Creating Objects (Instances)
        int main(){
            Car myCar; //object 1
            myCar.brand="Toyota";
            myCar.speed=0;
            myCar.accelerate();//Speed: 10
            Car anotherCar; //object 2
            return 0;
        }
    
