#include "CheckingAccount.h"

void CheckingAccount::Withdraw(float _amount)
{
	
	if (numberWithdraws > 9)
	{
		balance -= 5;
	}
	BaseAccount::Withdraw(_amount);
}
