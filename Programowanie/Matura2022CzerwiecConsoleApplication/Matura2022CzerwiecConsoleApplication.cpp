#include <iostream>
#include <vector>
#include <fstream>

std::vector<int> digits;
int reflected_number;

int reflectNumber(int n)
{
	int r_n = 0;
	digits.clear();
	do
	{
		digits.push_back(n % 10);
		n = n / 10;

	} while (n >= 1);

	for (int i = digits.size(); i > 0; i--)
	{
		r_n = r_n * 10 + *digits.begin();
		digits.erase(digits.begin());

	}

	return r_n;
}

bool ifPrimeNumber(int n)
{
	if (n < 2)
		return false;
	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}

int main()
{
	std::ifstream file("liczby.txt");

	std::vector<int> numbers;



	int num;
	while (file >> num)
		numbers.push_back(num);

	
	std::cout << "Zad 4.1 \n";

	for (int num : numbers)
	{
		reflected_number = reflectNumber(num);

		if (reflected_number % 17 == 0)
			std::cout << reflected_number << "\n";

	}

	
	std::cout << "Zad 4.2 \n";

	int n = 0;
	int difference;
	int max_difference = 0;

	for (int num : numbers)
	{
		reflected_number = reflectNumber(num);

		difference = num - reflected_number;

		if (difference < 0)
			difference = difference * -1;

		if (difference > max_difference)
		{
			if (num > n)
			{
				n = num;
				max_difference = difference;
			}
		}

	}
	std::cout << n << "\n";
	std::cout << max_difference << "\n";

	
	std::cout << "Zad 4.3 \n";

	for (int num : numbers)
	{
		if ( ifPrimeNumber(num) )
		{
			reflected_number = reflectNumber(num);
			if (ifPrimeNumber(reflected_number))
				std::cout << reflected_number << "\n";
		}
	}

	
	std::cout << "Zad 4.4 \n";

	for ( int num : numbers)
	{

	}
}

