#include <iostream>
#include "BankAccount.h"

BankAccount::BankAccount()
{
	balance = 1000;
	owner = "Nieznany";
	currency = "z³";
}

BankAccount::BankAccount(double b, std::string o, std::string c)
{
	SetBalance(b);
	owner = o;
	currency = c;
}

void BankAccount::SetBalance(double b)
{
	if (b >= 0)
		balance = b;
}

double BankAccount::GetBalance()
{
	return balance;
}

void BankAccount::AccountInformation()
{
	std::cout << "Informacje o koncie bankowym \n";
	std::cout << "W³aœciciel: " << owner << "\n";
	std::cout << "Saldo: " << balance << " " << currency << "\n";
}