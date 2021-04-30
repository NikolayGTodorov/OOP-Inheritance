#include <iostream>

class Base {
private:
	int value;
public:
	Base() : value{ 0 } { std::cout << "Base default constructor called\n"; }
	Base(int x) : value{ x } { std::cout << "Base (int) constructor called\n"; }
	~Base() { std::cout << "Base destructor called\n"; }
};

class Derived : public Base {
private:
	int doubledValue;
public:
	Derived() : Base{ 0 }, doubledValue { 0 } { std::cout << "Derived default constructor called\n"; }
	Derived(int x) : Base{ x }, doubledValue{ 2*x } { std::cout << "Derived (int) constructor called\n"; }
	~Derived() { std::cout << "Derived destructor called\n"; }
};

int main() {

}