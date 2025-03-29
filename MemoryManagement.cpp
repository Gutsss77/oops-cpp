//Memory Management in cpp
/*
In OOP, memory management becomes crucial, especially when dealing with dynamic allocation
(new/delete or malloc/free). You need to ensure there are no memory leaks and that resources are freed appropriately.

Smart Pointers (C++14 and above)
    1. std::unique_ptr: Represents ownership of a resource. Only one pointer can own the resource at any time.
    2. std::shared_ptr: Allows multiple pointers to share ownership of a resource. The resource is destroyed when 
       all shared pointers go out of scope.
*/

#include<iostream>
#include <memory>
using namespace std;

class MyClass {
public:
    void hello() { cout << "Hello, World!" << endl; }
};

int main() {
    unique_ptr<MyClass> p1 = make_unique<MyClass>();  // Automatically managed
    p1->hello();
}
