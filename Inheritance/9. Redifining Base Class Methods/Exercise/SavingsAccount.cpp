#include "SavingsAccount.h"

SavingsAccount::SavingsAccount() : SavingsAccount(0.0, 0.0)
{
}

SavingsAccount::SavingsAccount(double balance, double interestRate) : Account(balance), interestRate(interestRate)
{
}

void SavingsAccount::deposit(double amount)
{
	amount += amount * interestRate / 100;
	Account::deposit(amount);
}

std::ostream& operator<<(std::ostream& os, const SavingsAccount& account)
{
	os << "Savings account balance: " << account.balance << "Interest rate: " << account.interestRate;
	return os;
}
