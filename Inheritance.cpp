//Inheritance
/*
Inheritance enables one class to inherit properties and behaviors (methods) from another class. 
The class that is inherited from is called the base class (or parent), and the class inheriting is the derived class (or child).

--> Types of Inheritance
    1. Single Inheritance: One class inherits from another.
    2. Multiple Inheritance: A class can inherit from more than one class. (C++ supports this directly, unlike languages like Java.)
    3. Multilevel Inheritance: A class inherits from a derived class, creating a chain of inheritance.
    4. Hierarchical Inheritance: Multiple classes inherit from a single base class.
    5. Hybrid Inheritance: A combination of multiple types of inheritance.
*/

#include<iostream>
#include<string>
using namespace std;


class Animals{
public:
    void eat(){
        cout << "Eating !" << endl;
    }
};

// Single inheritance
class Dog : virtual public Animals{
public:
    void bark(){
        cout << "Barking !" << endl;
    }
};

//Multiple Inheritance
//This cause Ambiguity in code :
/*
When you have multiple inheritance, as in the GermanShepherd class,
both the Dog and Animals classes can have a same method eat().
This causes ambiguity when calling eat() from an instance of GermanShepherd,
because it's unclear whether the method should be called from the Dog or Animals class.


class GermanShefherd : public Dog , public Animals{
public:
    void breed(){
        cout << "German Shefherd" << endl;
    }
};

Solution to Avoid Ambiguity (Virtual Inheritance):
You can avoid such ambiguity by using virtual inheritance. 
This ensures that there is only one instance of the Animals class, even if it is inherited through multiple paths.
Reference (Virtual.cpp)
*/

class GermanShepherd : public Dog{
public:
    void breed(){
        cout << "Its German Shepherd" << endl;
    }
};


int main()
{
    Dog d; //Single Ineritance
    d.eat(); //Dog can now use parent class method also (Inherited Method)
    d.bark();

    GermanShepherd  gs; //Multiple Ineritance using virtual
    gs.eat(); //From Animals
    gs.bark(); //From Dog
    gs.breed();

    return 0;
}
