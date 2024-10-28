#pragma once
#include <iostream>

class BankAccount
{
private:
	double balance;
	std::string owner;
	std::string currency;

	bool isSetBalanceExecute = false;

	void SetBalance(double b);
public:	
	
	double GetBalance();
	void AccountInformation();
};