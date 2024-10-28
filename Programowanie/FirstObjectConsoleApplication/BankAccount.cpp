#include <iostream>
#include "BankAccount.h"
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