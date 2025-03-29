//Virtuals Keyword in cpp
/*
In C++, the virtual keyword is primarily used for dynamic polymorphism (runtime polymorphism),
which allows the program to decide at runtime which function to call,
based on the actual object type (not the type of the pointer or reference).

--> Key Use Cases of virtual:
    1. Virtual Functions: When a method is declared as virtual in a base class, 
    C++ ensures that the correct derived class method is called, 
    even if the function is called using a base class pointer or reference.

    2. Virtual Inheritance: Used to prevent the "diamond problem" in multiple inheritance, 
    ensuring that a class inherits only one copy of a base class. (cont. in virtual2.cpp)
*/

#include<iostream>
#include<string>
using namespace std;

//Base Class
class Animal{
public:
    virtual void speak(){ //Virtual Function
        cout << "Animal Speaking!" << endl;
    }
};

class Dog : public Animal{
public:
    void speak() override { //Overrided base class method speak()
        cout << "Bhau bhauu!" << endl;
    }
};

class Cat : public Animal{
    void speak() override{ //Override base class method speak()
        cout << "Meowwwww!" << endl;
    }
};

int main(){
    //Dynamic Binding or Dynamic dispatch (Reference DynamicBinding.txt)
    Animal* a1 = new Dog();
    Animal* a2 = new Cat();

    a1->speak(); //Bhau bhau
    a2->speak(); //Meowww

    delete a1; //free up the memory
    delete a2;
    return 0;
}

/*
Why is virtual important here?
Without virtual, the program would call Animal::speak() (the base class function) even if the object is a Dog or Cat. 
But with virtual, C++ determines at runtime which version of speak() to invoke (this is dynamic dispatch).
*/