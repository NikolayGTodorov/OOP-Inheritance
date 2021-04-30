#include <iostream>

int main()
{
	/* What is inheritance and why is it used?
	- Provides a method for creating new classes from existing classes
	- The new class contains the data and behaviours of the existing class
	- Allow for reuse of existing classes
	- Allows us to focus on the common  attributes among a set of classes
	- Allows new classes to modify behaviours of existing to make it unique
		- without actually modifying the original class
	*/

	/* Related classes
	* Player, Enemy, Level boss, Hero, Super Player, etc.
	* Account, Savings account, Checking account, Trust account, etc.
	* Shape, Line, Oval, Circle, Square, etc.
	* Person, Employee, Student, Facility, Staff, Administrator, etc.
	*/

	/* Example of classes that might be inherited:
	* Accouts:
	*  - Account - balance, deposit, withdraw;
	*  - Savings Account - balance, deposit, withdraw;							
	*  - Checking Account - balance, deposit, withdraw, minimum balance, per check fee;
	*  - Trust Account - balance, deposit, withdraw, interest rate;
	*				! All the have the Account class memebers in common so we will use inheritance like:
	*/

	/* Accounts - with inheritance (concept)
	class Account{
	//balance, deposit, withdraw
    }

	class SavingsAccount : public Account {
	//interest rate, specialized withdraw
	}
																	These three classes depend on the
																	account class (we have hierarchy)
	class CheckingAccount : public Account {
	//minimum balance, per check fee, specialized withdraw
	}

	class TrustAccount : public Account {
	//interest rate, specialized withdraw
	}
	*/

	return 0;
}
