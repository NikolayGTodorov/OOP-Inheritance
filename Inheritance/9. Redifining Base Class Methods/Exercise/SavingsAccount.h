#pragma once
#include "Account.h"
#include <iostream>
class SavingsAccount : public Account
{
	friend std::ostream& operator<<(std::ostream& os, const SavingsAccount& account);
protected:
	double interestRate;
public:
	SavingsAccount();
	SavingsAccount(double balance, double interestRate);
	void deposit(double amount);
	//withdraw is inherited
};

