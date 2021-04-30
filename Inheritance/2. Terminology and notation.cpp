#include <iostream>

int main()
{
	/*Therminology
	- Inheritance:
		- Process of creating new classes from existing classes
		- Reuse mechanism
	- Single inheritance:
		- A new class is created from another 'single' class
	- Multiple inheritance:
		- A new class is created from two(or more) other classes
	
	- Base class(parent class, super class)
		- The class being extended or inherited from
	- Derived class(child class, sub class)
		- The class being created from the Base class
		- Will inherit attributes and operations from Base class

	- "Is-A" relationship: (a circle is A shape/ A sales account is A Account)
		- Public inheritance
		- Derived classes are sub-types of their base classes
		- Can use a derived class object where we use a base class object
	- Generalization:
		- Combining similar classes into a single, more general class based on common attributes
	- Specialization:
		- Creating new classes from existing classes proving more specialized attributes or operations
	- Inheritance or class Hiearchies
		- Organization of out inheritance relationships

	- Class hierarchy
	Classes:									generalization		/A/				||
	- A	(route class)								/\				/\				||
	- B is derived from A	(! b is not a C)		||		 -------||-------		||
	- C is derived from A							||		 |				|		||
	- D is derived from C							||		/B/			   /C/		||
	- E is derived from D (E is also a D,C,A)		||					   /\		||
	(deriving is transitive)						||					   ||		||
													||					   /D/		||
													||					   /\		||
													||					   ||		\/
																		   /E/	specialization
	*/																	   	
	return 0;
}
