#include "CreditAccount.h"
#include <stdlib.h>

void CreditAccount::Withdraw(float _amount)
{
amountSpent += _amount;
BaseAccount::Withdraw(_amount);
if (amountSpent > 40.00)
{
    balance -= 5000;
}
}
