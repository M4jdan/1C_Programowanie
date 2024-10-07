#pragma once
#include <iostream>

class BankAccount
{
public:
	double balance;
	std::string owner;
	std::string currency;
	
	void AccountInformation();
};