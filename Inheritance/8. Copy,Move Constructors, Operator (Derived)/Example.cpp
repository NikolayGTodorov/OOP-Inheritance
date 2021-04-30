#include <iostream>

class Base {
private:
	int value;
public:
	Base() : value{ 0 } { std::cout << "Base no-args constructor called\n"; }
	Base(int x) : value{ x } { std::cout << "Base (int) constructor called\n"; }
	Base(const Base& other) : value{other.value} { std::cout << "Base copy constructor called\n"; }
	Base& operator=(const Base& rhs) {
		std::cout << "Base operator= called\n";
		if (this != &rhs) {
			value = rhs.value;
		}
		return *this;
	}
	~Base() { std::cout << "Base destructor called\n"; }
};

class Derived : public Base {
private:
	int doubledValue;
public:
	Derived() : Base{} { std::cout << "Derived no-args constructor called\n"; }
	Derived(int x) : Base{x} { std::cout << "Derived (int) constructor called\n"; }
	Derived(const Derived& other) : Base{ other }, doubledValue{ other.doubledValue } {
		std::cout << "Derived copy constructor called\n";
	}

	Derived& operator=(const Derived& rhs) {
		std::cout << "Derived operator= called\n";
		if (this != &rhs) {
			Base::operator=(rhs);
			doubledValue = rhs.doubledValue;
		}
		return *this;
	}

	~Derived() { std::cout << "Derived destructor called\n"; }
};

int main() {
	Base b{ 100 }; //Overloaded constructor
	Base b1{ b }; //Copy constructor
	b = b1;		//Copy assignment

	Derived d{ 100 };	//Overloaded constructor
	Derived d1{ d1 };  //Copy constructor
	d = d1;			  //Copy assignment
}