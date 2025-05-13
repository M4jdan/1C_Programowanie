#include <iostream>
#include <vector>
#include <fstream>

int ifOddAbbreviation(int n) 
{
	int m = 0; 
	int index = 0;
	int digit;
	do
	{
		digit = n % 10;
		if (digit % 2 != 0)
		{
			m = m + (digit * pow(10, index));
			index++;
		}

		
		n /= 10;
	} while(n != 0);
	
	return m;
}

int theGreatestCommonDivisor(int num, int second_num)
{
	do
	{
		int tmp = second_num;
		second_num = num % second_num;
		num = tmp;
	} while (second_num != 0);

	return num;
}

int odd_num_abbreviation;

int main()
{
    std::ifstream first_file("skrot_przyklad.txt");
	std::vector<int> numbers;

	int num;
	while (first_file >> num)
		numbers.push_back(num);

	std::cout << "Zad 3.2" << "\n";

	int max_number = 0;
	int count = 0;
	for (int num : numbers)
	{
		odd_num_abbreviation = ifOddAbbreviation(num);
		
		if (odd_num_abbreviation == 0)
		{
			count++;
			if (num > max_number)
				max_number = num;
		}

	}

	std::cout << count << "\n";
	std::cout << max_number << "\n";

	first_file.close();


	std::ifstream second_file("skrot2_przyklad.txt");
	numbers.clear();

	num = 0;
	while (second_file >> num)
		numbers.push_back(num);

	std::cout << "zad 3.3" << "\n";

	for (int num : numbers)
	{
		odd_num_abbreviation = ifOddAbbreviation(num);
		if (odd_num_abbreviation != 0)
		{
			if (theGreatestCommonDivisor(num, odd_num_abbreviation) == 7)
				std::cout << num << "\n";
		}

	}
	
	

}


