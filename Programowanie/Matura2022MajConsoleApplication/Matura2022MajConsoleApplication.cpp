// Matura2022MajConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <fstream>
#include <vector>

int main()
{
    std::ifstream file("liczby.txt");

    /*
    for (int i = 0; i < 200; i++)
    {
        file >> numbers[i];
    }

    std::cout << "Odczytane liczby:\n";
    for (int i = 0; i < 200; i++)
    {
        std::cout << numbers[i] << ", ";
    }
    */

    std::vector<int> numbers;

    int num;
    while (file >> num)
        numbers.push_back(num);

    for (int num : numbers)
    {
        std::cout << num << ", ";
    }

    int count = 0;
    for (int num : numbers)
    {
        int firstDigit;
        int lastDigit = num % 10;

        if (firstDigit == lastDigit)
        {
            count++;
        }
    }

}

