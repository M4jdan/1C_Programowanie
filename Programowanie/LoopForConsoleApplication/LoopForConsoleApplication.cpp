#include <iostream>



/*

* 
* 

* 
* 
* Program wyświetlający na ekranie wszystkie liczby podzielne przez 3 z zakresu od 1 do 100
* Program obliczający sumę kwadratów liczb od 1 do 10
* Program wyświetlający na ekranie ciąg Fibonacciego do 20 elementu (ciąg Fibonacciego to ciąg gdzie każdy element jest sumą dwóch poprzednich, np. 0, 1, 1, 2, 3, 5, 8, 13 itd.)
* Program, kóry wyświetli poniższe cztery zwory:
	****       54321        121212        122333
	***        65432        212121        223334444
	**         76543        121212        333444455555
	*          87654        212121        444455555666666
* Oblicz sumę szeregu 1/1^2 + 1/2^2 + 1/3^2 + ... +1/n^2. Jeżeli się nie pomylisz, to dla odpowiednio dużej wartości n po przemnożeniu jej przez 6 i spierwiastkowaniu powinieneś otrzymać wartość liczby π (suma szeregu jest równa π2/6). Zwróć uwagę, że pierwsza wartość indeksu to 1, a nie 0. Dokładność obliczeń można sprawdzić porównując z wartością odczytaną z własności Math.PI.
* Rozkład liczby na czynniki pierwsze
*/

void task1()
{

	int number;
	std::cout << "ile razy ma się wyświetlić napis: \n";
	std::cin >> number;

	for (int i = 0; i != number; i++)
	{
		std::cout << "Hello world!\n";
	}

}

void task2()
{

	int number;
	std::cout << "ile razy ma się wyświetlić napis: \n";
	std::cin >> number;

	for (int i = 0; i <= number; i += 2)
	{
		std::cout << "Hello world!\n";
	}

}

void task3()
{
	//Program obliczający sumę liczb od 1 do 100

	int sum = 0;

	for (int i = 1; i != 101; i++)
	{
		sum = sum + i;
		i++;
	}
	std::cout << sum;
}

void task4()
{
	//Program sprawdzający czy podana liczba jest liczbą doskonałą(czyli taką, której suma dzielników(z wyłączeniem samej siebie) jest równa danej liczbie, np. 6 jest liczbą doskonałą, ponieważ 1 + 2 + 3 = 6).
	int number, k = 0;
	std::cout << "Podaj liczbe: \n";
	std::cin >> number;

	for (int i = 1; i < number; i++)
	{
		if (number % i == 0)
		{
			k = k + i;
		}

	}
	
	if (k == number)
		std::cout << "jest";
	else
		std::cout << "nie jest";
}

void task5()
{
	//Program wyświetlający na ekranie kwadraty liczb od 1 do 10 (np. 1, 4, 9, 16 itd.)
	int squareOfNumber;

	for (int i = 0; i <= 10; i++)
	{
		squareOfNumber = i * i;
		std::cout << squareOfNumber << "\n";

	}
}

void task6()
{
	//* Program obliczający n!.

	unsigned long long number, tmpNumber;
	std::cout << "Podaj liczbe: \n";
	std::cin >> number;

	tmpNumber = number;
	number = 1;
	for (int i = 1; i <= tmpNumber; i++)
	{
		number = number * i;
	}
	std::cout << "WYNIK to: " << number;
}

void task7()
{
	//Program wyświetlający na ekranie silnie z liczb od 1 do 10 (np. 1!, 2!, 3!, 4! itd.)
	for (int i = 1, number = 1; i <= 10; i++)
	{
		std::cout << i << "! \n";
	}
}

void task8()
{
	//Program wyświetlający na ekranie tabliczkę mnożenia od 1 do 9 (np. 1x1 = 1, 1x2 = 2, 1x3 = 3 itd.).
	for (int i, k; ;);
}
int main()
{
	task7();
}


