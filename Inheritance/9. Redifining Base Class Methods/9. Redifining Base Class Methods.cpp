#include <iostream>

int main()
{
    /* Using and redefining Base class methods
    - Derived class can directly INVOKE Base class methods
    - Derived class can OVERRIDE or REDEFINE Base class methods
    - (Very powerful when using polymorphic functions)
    */

    //pseudo-example
    /*class Account {
    public:
        void deposit(double amount) { balance += amount; }
    };
    
    class SavingsAccount : public Account {
    public:
        void deposit(double amount) {  //REDEFINE Base class method
            amount += interest;
            Account::deposit(amount);  //INVOKE call Base class method
        }
    };*/

    /* Static Binding of method calls
    - The compiler determines which method is called based on what it sees compile-time
        - Default binding in C++ is static (efficient)
        - Derived class objects will use Derived::deposit (methods from Derived)
        - But we can explicitly invoke Base::deposit from Derived::deposit
        - Its fine in most cases but limited, much more powerful is 
        dynamic binding(runtime) (will see that in Polymorphism)

        Base b;
        b.deposit(1000.0);              // Base::deposit

        Derived d;
        d.deposit(1000.0);             // Derived::deposit

        Base* ptr = new Derived();
        ptr->deposit(1000.0);              The compiler will call Base::deposit because it sees 
                                           pointer-to-Base, to fix this we need Dynamic binding
                                           (will see this in Polymorphism)
        */

}
