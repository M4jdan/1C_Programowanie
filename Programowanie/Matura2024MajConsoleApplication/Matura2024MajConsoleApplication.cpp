#include <iostream>
#include <vector>
#include <fstream>

int ifOddAbbreviation(int n) 
{
	int m; 
	
	
	return m;
	
	return 0;
}

int odd_num_abbreviation;

int main()
{
    std::ifstream file("skrot_przyklad.txt");
	std::vector<int> numbers;

	int num;
	while (file >> num)
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

}


