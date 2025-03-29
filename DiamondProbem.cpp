#include <iostream>
using namespace std;

class A{
public:
    void speak(){
        cout << "Class A speaking!" << endl;
    }
};

//B inerits A
class B : public A{
public:
    void speak(){
        cout << "Class B speaking!" << endl;
    }
};
//C also inerit A
class C : public A{
public:
    void speak(){
        cout << "Class C speaking!" << endl;
    }
};

class D : public B, public C{ // D inherits from both B and C
public:
    void speak(){
        cout << "Class D speaking!" << endl;
    }
};

int main(){
    D d;
    d.speak(); // Which `speak()` function will be called? (Run it and check)
    //What if we want class A speak from object of Class D

    // General output will be : "error: request for member 'speak' is ambiguous"

    // But for some modern compiler output will be : "Class D speaking!"
    /*
    This behavior suggests that your compiler is handling the ambiguity more gracefully,
    likely due to compiler-specific behavior (or implicit handling of the diamond problem).
    Some modern compilers (like GCC, Clang, or even MSVC) allow multiple inheritance with a simple
    override of the method in the derived class, even if there's ambiguity.

    remove D class speak() if the output is this "Class D speaking!" then you will se the amibiguity
    */

    return 0;
}
