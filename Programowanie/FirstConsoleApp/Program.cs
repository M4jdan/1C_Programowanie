// See https://aka.ms/new-console-template for more information
using System.ComponentModel;

Console.WriteLine("Hello, World!");
Console.WriteLine("Hello, World!");

string name = "Jan";
string surname = "Kowalski";
Console.WriteLine("Witaj " + name);

Console.WriteLine("Witaj {0} {1} ponownie", name, surname);
Console.WriteLine($"Witaj {name} {surname}");

Console.WriteLine("Predkosc to km\\h");
Console.WriteLine(@"Predkosc to km\h");

int firstNumber = 5;
int secondNumber = firstNumber;
secondNumber++;
Console.WriteLine($"Pierwsza liczba to {firstNumber}");
Console.WriteLine($"Druga to {secondNumber}"); 

void Parametr_v1(int p)
{
    Console.WriteLine($"parametr 1 {p}");
    p++;
    Console.WriteLine($"Parametr 1 {p}");
}

firstNumber = 15;
Console.WriteLine($"firstNumber przed {firstNumber}");
Parametr_v1(firstNumber);
Console.WriteLine($"firstNumber po {firstNumber}");