//Abstraction
/*
Abstraction is the principle of hiding the implementation details and showing only the necessary functionality. 
It helps reduce complexity and isolates the impact of changes.

Abstract Classes and Pure Virtual Functions
    An abstract class is a class that cannot be instantiated directly and typically contains pure virtual functions.
    A pure virtual function is a function that must be overridden by derived classes.
*/

#include<iostream>
using namespace std;

//Abstract class
class Shape {
public:
    virtual void draw() = 0;  // Pure virtual function , this makes the class absract (i.e interface)
    //Now derived class must implement this method
}; 
//Now we cannot create the instance of shape class directly
    
class Circle : public Shape {
public:
    void draw() override { cout << "Drawing a circle" << endl; }
};
    
int main(){
    Circle c;
    c.draw();
}