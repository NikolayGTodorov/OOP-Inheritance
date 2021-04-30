#include <iostream>

int main()
{
    /* Copy/Move constructors and overloaded operator=
    - Not inherited from the Base class
    - You may not need to provide your own
       - Compiler-provided may be just fine
    - We can explicitly invoke the Base class versions from the Derived class
    */

    /* Copy constructor
    - Can invoke Base copy constructor explicitly
        - Derived object 'other' will be SLICED by the compiler.
    Derived::Derived(const Derived& other) : Base(other), {Derived initialization list}..
    {
        //code
    }
    */

    /* Operator= 
    class Base {
        int value;
    public:
        //Same constructors
        Base& operator=(const Base& rhs) {
            if (this != &rhs) {
                value = rhs.value; //assign
            }
            return *this;
        }
    };

    class Derived : public Base {
        int doubledValue;
    public:
        //Same constructors
        Derived& operator=(const Derived& rhs) {
            if (this != &rhs) {
                Base::operator=(rhs); //!!! ASSIGN Base part
                doubledValue = rhs.doubledValue; //ASSIGN Derived part
            }
            return *this;
        }
    };
    */

    /* Copy/Move constructors and overloaded operator=
    - Often you do not need to provide your own
    - If you DO NOT define them in Derived
        - then the compiler will create them automatically and call the base class's version
    - If you DO provide Derived versions
        - then YOU MUST invoke the Base versions EXPLICITLY yourself
    - Be careful with RAW POINTERS
        - Especially if Base and Derived each have raw pointers
        - Provide them with deep copy semantics
    */
}
