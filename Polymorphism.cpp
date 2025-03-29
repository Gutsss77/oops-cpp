//Polymorphism
/*
Polymorphism is the ability to treat different classes in a uniform way,
allowing the same function name to behave differently based on the object calling it.
Two main concept of overlaoding ad overriding

--> Types of Polymorphism
    1. Compile-time Polymorphism (Static Polymorphism): This happens when the method is determined at compile time, 
       often through function overloading or operator overloading.
    2. Runtime Polymorphism (Dynamic Polymorphism): This happens when the method is determined at runtime
       using virtual functions and function overriding.
*/

#include<iostream>
#include<string>
using namespace std;

//OverLoading
class Printer{
public:
    //Both function having different signature 
    void print(int i){
        cout << "Printing Integer : " << i << endl;
    }

    void print(string s){
        cout << "Printing String : " << s << endl;
    }

};

//OverRiding
class Animal{
public:
    virtual void speak(){
        cout << "Animal is speaking!" << endl;
    }
};

class Dog : public Animal{
    void speak(){
        cout << "Dog is speaking!" << endl;
    }
};

int main(){
    Printer p;
    p.print(79);
    p.print("Ansh"); //OverLoading

    Animal* a = new Dog(); //Dynamic Dispatch
    a->speak(); //output : Dog is speaking!
    return 0;
}

/*
Virtual Tables (vtable) and Dynamic Dispatch
    Each class with virtual functions has a vtable, which is an array of pointers to virtual functions.
    The vtable allows for dynamic dispatch (i.e., the program chooses the appropriate method to
    call at runtime based on the object type, not the pointer type).
*/