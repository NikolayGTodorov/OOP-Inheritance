#include <iostream>

int main()
{
    //C++ derivation syntax
    class Base {
        //Base class members 
    };
    class Derived {//: access - specifier Base
        //Derived class members
    };
    // Access-specifier: public, private, or protected

    /*public
    - Most common
    - Establishes 'is-a' relationship between Derived and Base classes
    //private and protected
    - Establishes 'Derived class has a base class' relationship
    - "Is implemented in terms of" relationship
    - Different from composition
    */

    /* C++ derivation syntax 
    class Account {
        //Account class members...
    };
    class SavingAccount : public Account {
        //SavingsAccount class members...
    };
    //SavingsAccount 'is-a' Account
    
    */
    
}
