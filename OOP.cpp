#include<iostream>
using namespace std;
        class Car {
            public:
            string brand;
            int speed;

            void accelerate(){
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
    
