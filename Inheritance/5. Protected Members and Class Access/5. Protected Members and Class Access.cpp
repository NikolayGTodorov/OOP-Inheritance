#include <iostream>

int main() 
{
	//Protected
	class Base {
	protected:
		//protected Base class members
	};
	/*
	- Accesible from the Base class itself
	- Accesible from classes Derived from Base
	- Not accessible by objects of Base or Derived
	*/
	class {
		int c;			//In the case of PUBLIC INHERITANCE: in Derived: a - public, b- protected, c- no access
	protected:			//In the case of Protected inheritance: in Derived: a - protected, b - protected, c - no acsess
		int b;			//In the case of Private inheritance: in Derived: a - private, b - private, c - no access
	public: 
		int a;
	};
}