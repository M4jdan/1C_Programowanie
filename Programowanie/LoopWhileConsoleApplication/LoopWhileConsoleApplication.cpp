// LoopWhileConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void task1()
{
	int numberFromUser, result = 0;
	std::cout << "Podaj liczbe: \n";
	std::cin >> numberFromUser;

	while (numberFromUser != 0)
	{
		numberFromUser = numberFromUser / 10;
		result++;
	}


	std::cout << "Suma liczb wynosi " << result << " \n";


}

void taaaaaaaaaaaaaaaaaaask2()
{
	int firstNumber, secondNumber;
	std::cout << "Podaj pierwszą liczbę: \n";
	std::cin >> firstNumber;
	std::cout << "Podaj drugą liczbę: \n";
	std::cin >> secondNumber;

	int nwd;

	if (firstNumber)
		nwd = firstNumber;
	else
		nwd = secondNumber;

	nwd = (firstNumber < secondNumber) ? firstNumber : secondNumber;
	
	while (secondNumber % nwd != 0
		|| firstNumber % nwd != 0)
		nwd--;
	
		



	std::cout << "NWD jets równe " << nwd << "\n";
}

void task3() 
{
	int firstNumber, secondNumber, NWD = 1, divident = 2;
	std::cout << "Podaj pierwszą liczbę: \n";
	std::cin >> firstNumber;
	std::cout << "Podaj drugą liczbę: \n";
	std::cin >> secondNumber;

	while (firstNumber >= divident
		&& secondNumber >= divident)
	{
		if (firstNumber % divident == 0
			&& secondNumber % divident == 0)
		{
			firstNumber = firstNumber / divident;
			secondNumber /= divident;
			NWD *= divident;
		}
		else
			divident++;
	}
	std::cout << "NWD wynosi: " << NWD;
}

void task4()
{

	int number;
	std::cout << "ile razy ma się wyświetlić napis: \n";
	std::cin >> number;

	int i = 0;
	while (i != number)
	{
		std::cout << "Hello world!\n";
		i++;
	}

}
int main()
{
	setlocale(LC_CTYPE, "Polish");
	//taaaaaaaaaaaaaaaaaaask2();
	task4();
}


