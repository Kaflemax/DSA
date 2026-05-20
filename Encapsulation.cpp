#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    double salary;
    int age;

public:
    // Setters
    void setName(string n) {
        if (!n.empty())
            name = n;
    }

    void setSalary(double s) {
        if (s >= 0)
            salary = s;
    }

    void setAge(int a) {
        if (a >= 18 && a <= 65)
            age = a;
    }

    // Const Getters
    string getName() const {
        return name;
    }

    double getSalary() const {
        return salary;
    }

    int getAge() const {
        return age;
    }

    void display() const {
        cout << "Name: " << getName() << endl;
        cout << "Salary: " << getSalary() << endl;
        cout << "Age: " << getAge() << endl;
    }
};

int main() {
    Employee E1;
    E1.setName("Shisir");
    E1.setSalary(15000000);
    E1.setAge(21);
    E1.display();
    return 0;
}