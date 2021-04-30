#include <iostream>
class Base {
public:
	Base() { std::cout << "Base constructor\n"; }
	~Base() { std::cout << "Base destructor\n"; }
};

class Derived : public Base {
public:
	Derived() { std::cout << "Derived constructor"; }
	~Derived() { std::cout << "Derived destructor"; }
};

/* Output
	Base base;				Base constructor -> Base destructor
	Derived derived;		Base constructor -> Derived constructor -> Derived destructor -> Base destructor
*/