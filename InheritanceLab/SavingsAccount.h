#pragma once
#include "BaseAccount.h"
class SavingsAccount :
    public BaseAccount
{
public:
    void Withdraw(float _amount);
};

