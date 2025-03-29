//Classes and Objects :
/*
In C++, a class is essentially a blueprint for an object.
The class defines data (variables) and functions (methods) that operate on the data.
Objects are instances of these classes.

--> Memory Layout: A class defines the structure of its objects in memory. 
    When an object is created, C++ allocates memory based on the size of the class, 
    including its member variables and any additional memory for virtual function tables (vtable) if polymorphism is used.

--> Constructors and Destructors:
    A constructor is a special function that is automatically called when an object is created, used to initialize the object.
    A destructor is called when an object goes out of scope, used to release resources (especially important when managing dynamic memory or file handles).
*/

#include<iostream>
#include<string>
using namespace std;

class Car{
public:
    //Member variable
    string brand;
    int year;

    //Member function
    void display(){
        cout << "Brand : " << brand << " Year : " << year << endl;
    }

};

//Constructor and Destructor
//Constructor and destructor have the same name as of the class 
class MyClass{
public:
    MyClass(){ cout << "Constructor is Called !" << endl;}
    ~MyClass(){ cout << "Destructor is called !" << endl;}
};

int main(){
    Car c1; //Object created
    c1.brand = "BMW";
    c1.year = 1978;
    c1.display();

    MyClass m1; //Constructor is called automatically when object is created

    
    return 0;
} //Destructor method is called as the object goes out of scope