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

int main()
{
	std::ifstream file("przyklad.txt");

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

	for (int num : numbers)
	{
		reflected_number = reflectNumber(num);

		difference = num - reflected_number;
		
		if (difference < 0)
			difference = difference * -1;

		if (num > n)
			n = num;

	}
	std::cout << n << "\n";
	std::cout << difference;
}

