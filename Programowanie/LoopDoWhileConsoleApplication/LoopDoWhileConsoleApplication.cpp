#include <iostream>

void task1()
{
	int numberFromUser;
	std::cout << "Podaj liczbę doodatnią:\n";
	std::cin >> numberFromUser;
	if (numberFromUser < 0)
	{
		std::cout << "Podaj liczbę doodatnią:\n";
		std::cin >> numberFromUser;
		if (numberFromUser < 0)
		{
			std::cout << "Podaj liczbę doodatnią:\n";
			std::cin >> numberFromUser;
			if (numberFromUser < 0)
			{
				std::cout << "Podaj liczbę doodatnią:\n";
				std::cin >> numberFromUser;
				if (numberFromUser < 0)
				{
					std::cout << "Podaj liczbę doodatnią:\n";
					std::cin >> numberFromUser;
					//wklejamy całego If'a
				}
			}
		}
	}

	std::cout << "Liczba dodatnia pobrana od uzytkownika " << numberFromUser << "\n";
}

void task2()
{
	//lotto
	const int LOWER_RANGE = 1;
	const int UPPER_RANGE = 100;
	srand(time(NULL));
	int randomNumber = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
	int guessedNumber;
	do
	{
		std::cout << "Podaj liczbe: \n";
		std::cin >> guessedNumber;

		if (guessedNumber > randomNumber)
			std::cout << "Mniej\n";
		if (guessedNumber < randomNumber)
			std::cout << "Więcej\n";

	} while (guessedNumber != randomNumber);

	std::cout << "Gratulacje użytkowniku wygrałeś nic :DDD";
}

void task3()
{
	unsigned long long upperRange;
	std::cout << "Podaj góre: \n";
	std::cin >> upperRange;
	
	unsigned long long currentNumber = 0;
	do
	{
		currentNumber = currentNumber + 1;
		std::cout << currentNumber << ", ";

	} while (upperRange > currentNumber);

}
int main()
{
	setlocale(LC_CTYPE, "Polish");
	task3();
}
