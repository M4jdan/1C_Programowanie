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


int main()
{
	setlocale(LC_CTYPE, "Polish");
	//taaaaaaaaaaaaaaaaaaask2();
	task3();
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
