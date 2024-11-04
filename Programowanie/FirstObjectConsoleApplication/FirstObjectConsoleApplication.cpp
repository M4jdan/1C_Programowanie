
#include <iostream>
#include "BankAccount.h"


int main()
{
	BankAccount firstAccount(7200, "Jan Kowalski", "z³");
	/*firstAccount.SetBalance(7200);
	firstAccount.owner = "Jan Kowalski";
	firstAccount.currency = "z³";*/
	//dasghdfjhsdgfjh

	firstAccount.AccountInformation();

	BankAccount secondAccount;
	/*secondAccount.balance = 3200;
	secondAccount.owner = "Ewa Nowak";
	secondAccount.currency = "z³";*/

	secondAccount.AccountInformation();
}