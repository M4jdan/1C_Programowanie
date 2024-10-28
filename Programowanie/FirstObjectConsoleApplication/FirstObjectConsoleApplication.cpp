
#include <iostream>
#include "BankAccount.h"


int main()
{
	BankAccount firstAccount;
	firstAccount.SetBalance(7200);
	firstAccount.owner = "Jan Kowalski";
	firstAccount.currency = "z³";

	firstAccount.AccountInformation();

	BankAccount secondAccount;
	secondAccount.balance = 3200;
	secondAccount.owner = "Ewa Nowak";
	secondAccount.currency = "z³";

	secondAccount.AccountInformation();
}