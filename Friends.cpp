//Friends in cpp
/*
In C++, the concept of friend classes and friend functions allows certain external functions
or classes to access the private and protected members of another class, even though those members would normally be inaccessible.

--> Two ways to acheive this
    1. Friend Functions
    2. Friend Classes

--> Why Use a Friend Function?
    In this case, secretReveal might be used when:

    You want to expose the internal data to a specific function (like logging or debugging).
    You need access to the internals of a class for operations that logically 
    don't belong inside the class (like overloaded operators, special formatting functions, etc.).

*/

/*
--> Friend Functions
    A friend function is a function that is not a member of the class but still has the ability to access
    the class's private and protected members. Friend functions are declared using the friend keyword inside the class.
*/

/*
In the example, secretReveal() is able to access
the private member secretData of MyClass because it is declared as a friend function of the class.
*/

#include<iostream>
using namespace std;

class MyClass{
    int secretData;

public:
    // MyClass() : secretData(45) {}
    //or use 
    MyClass(){
        secretData = 45; //or use: this->secretData = 45
    }

    //Friend Function
    friend void secretReveal(MyClass&);
};

void secretReveal(MyClass& obj){
    cout << "The private data of MyClass is : " << obj.secretData << endl;
}

/*
--> Friend Classes
    A friend class is another class that has the privilege of
    accessing the private and protected members of the class in which it is declared as a friend.
*/

class MyClassA
{
private:
    int privateData;

public:
    MyClassA() : privateData(56) {} // Setting the value of privateData (Inilializing) using constructor

    // Friend Class
    friend class MyClassB;
};

class MyClassB
{
public:
    void display(MyClassA &obj)
    {
        cout << "Private Data from classA : " << obj.privateData << endl;
    }
};

int main(){
    MyClass obj;
    secretReveal(obj); //passing object to acces the data using friend function

    MyClassB cb;
    MyClassA ca; //Object of MyClassA
    cb.display(ca); //with MyClassB we have accessed MyClassA private member using friend class


    return 0;
}

