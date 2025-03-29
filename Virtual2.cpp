/*
2. Virtual Inheritance (Multiple Inheritance)
    In multiple inheritance, a class can inherit from multiple base classes,
    and if those base classes share common ancestors, you might get a situation where
    the derived class inherits multiple copies of the same base class. This is known as the diamond problem.

    The virtual keyword in inheritance helps resolve this by ensuring only one instance of the base class is inherited,
    even if it is inherited through multiple paths.

    DiamondProblem without virtual refer to (DiamondProblem.cpp)
*/

//Solution of DiamondProblem.cpp
//Using Virtual Keyword
#include<iostream>
using namespace std;

class A{
public: 
    void speak(){
        cout << "Speak from A" << endl;
    }
};
class B : virtual public A{
public:
    void speak(){
        A::speak(); //For calling the speak of A using the resolution operator (::)
        cout << "Speak from B" << endl;
    }
};

class C : virtual public A{
public:
    void speak()
    {
        cout << "Speak from C" << endl;
    }
};

class D : public B, public C{
public:
    void speak()
    {
        cout << "Speak from D" << endl;
    }
};

int main(){
    A a;
    a.speak(); //ouput speak from A
    B b;
    b.speak(); //ouput speak from A and speak from B
    D d;
    d.speak(); //output speak from D
    return 0;
}