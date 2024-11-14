#pragma once
class BaseAccount
{
protected:
	float balance = 0;
	int numberWithdraws = 0;
public:
	void Withdraw(float _amount);
	void Deposit(float _amount);
	float GetBalance() const;
};

