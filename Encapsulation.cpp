//Encapsulation
/*
Encapsulation involves bundling the data (variables) and methods (functions) that operate on the data into a single unit,
or class, and restricting access to some of the object's components.
This is typically done using access specifiers: public, private, and protected.

--> Access Control in Classes
    1. Public members are accessible from anywhere.
    2. Private members are accessible only from within the class itself or from friends of the class (reference Freinds.cpp).
    3. Protected members are accessible within the class and derived classes (not from outside).


--> Benefits of Encapsulation
    1. Security: By restricting access to the internal state, you prevent accidental modifications from outside the class, 
    ensuring integrity.
    2. Maintainability: It allows you to change internal logic or representation without affecting external code.
*/

#include <iostream>
#include <string>
using namespace std;

class Account{// Member variables are private by default in class, but we can declare them explicitly as private too.
private:
    double balance; //Hidden Internal Detail

public:
    void setBalance(double amount){ // Setter Method
        if (amount > 0){
            balance += amount;
        }
    }

    double getBalance(){ // Getter Method
        return balance;
    }
};

int main(){
    Account a;
    a.setBalance(100);
    cout << "Balance: " << a.getBalance() << endl;

    return 0;
}
