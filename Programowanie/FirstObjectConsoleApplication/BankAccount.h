#pragma once
#include <iostream>

class BankAccount
{
private:
	double balance;
	std::string owner;
	std::string currency;
public:	
	void AccountInformation();
};