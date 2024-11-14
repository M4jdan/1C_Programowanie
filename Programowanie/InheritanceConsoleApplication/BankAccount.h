#pragma once
#include <iostream>

class BankAccount
{
protected:
	double balance;
	std::string owner;
	std::string currency;

	bool isSetBalanceExecute = false;

	void SetBalance(double b);
public:	
	BankAccount();
	BankAccount(double b, std::string o, std::string c);
	
	double GetBalance();
	void AccountInformation();
};