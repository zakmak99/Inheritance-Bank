#include "SavingsAccount.h"
#include <iostream>

void SavingsAccount::Withdraw(float _amount)
{
	
	if (numberWithdraws > 2)
	{
		std::cout << "Withdraw limit has been reached" << std::endl;
		system("\pause");
	}
	else
	{
		BaseAccount::Withdraw(_amount);
	}
}
