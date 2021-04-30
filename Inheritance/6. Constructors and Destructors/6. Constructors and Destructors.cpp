#include <iostream>

int main()
{
    /* Constructors and class initalization: 
    - A Derived class inherits from its Base class
    - The Base part of the Derived MUST be initialized BEFORE the Derived class is initialized
    - When a Derived object is created:
        - Base class constructor executes then
        - Derived class constructor executes
    */

    /* Destructors
    - Class destructors are invoked in the reverse order as constructors
    - The Derived part of the Derived class MUST be destroyed BEFORE the Base class destructor is invoked
    - When a Derived object is destroyed:
        - Derived class destructor executes then
        - Base class destructors executes
        - Each destructor should free resources allocated in it's own constructors
    */

    /*
       - A Derived class does NOT inherit
          - Base class constructors
          - Base class destructor
          - Base class overloaded assignment operators
          - Base class friend functions
       - However the Derived class constructor, destructor, and overloaded assignment operators
       can invoke the Base-class versions
       - We can use explicit inheritance of base 'non-special' constructors with
          - using Base::Base;   anywhere in the derived class declaration
          - lots of rules involved, often better to define contstructors yourself
    */
}
