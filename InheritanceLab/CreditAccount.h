#pragma once
#include "BaseAccount.h"
class CreditAccount :
    public BaseAccount
{
private:
    float amountSpent = 0;

public:
    void Withdraw(float _amount);
};

