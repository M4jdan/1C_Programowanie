#include <iostream>
#include <vector>
#include <fstream>

int main()
{
	std::ifstream file("przyklad.txt");

	std::vector<int> numbers;

	int num;
	while (file >> num)
		numbers.push_back(num);

	
	std::vector<int> digits;
	for (int num : numbers)
	{
		int reflected_number = 0;
		digits.clear();
		do 
		{
			digits.push_back(num % 10);
			num = num / 10;

		} while (num > 1);

		for (int i = digits.size(); i >= 0 ; i--)
		{
			reflected_number += digits.begin() * pow(10, i);
			digits.erase(digits.begin());
		}

		if (reflected_number % 17 == 0)
			std::cout << reflected_number;
	}
}

