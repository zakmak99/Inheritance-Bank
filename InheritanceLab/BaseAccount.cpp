#include "BaseAccount.h"

void BaseAccount::Withdraw(float _amount)
{
	balance -= _amount;
	++numberWithdraws;
}

void BaseAccount::Deposit(float _amount)
{
	balance += _amount;
}
float BaseAccount::GetBalance() const
{
	return balance;
}