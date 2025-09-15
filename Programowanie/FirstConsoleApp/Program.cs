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

//przekazywanie wartości
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

//przekazywanie referencji
void Parametr_v2(ref int p)
{
    Console.WriteLine($"parametr 2 {p}");
    p++;
    Console.WriteLine($"Parametr 2 {p}");
}

firstNumber = 15;
Console.WriteLine($"firstNumber przed {firstNumber}");
Parametr_v2(ref firstNumber);
Console.WriteLine($"firstNumber po {firstNumber}");


void Parametr_v3(out int p)
{
    //Console.WriteLine($"parametr 2 {}");
    p=15;
    Console.WriteLine($"Parametr 2 {p}");
}

int thirdNumber;
Parametr_v3(out thirdNumber);
Console.WriteLine($"firstNumber po {thirdNumber}");

string firstStrNumber = "15";

int firstConvertedNumber = int.Parse(firstStrNumber);
Console.WriteLine($"Po konwersji {firstConvertedNumber}");

if (int.TryParse(firstStrNumber, out int secondConvertedNumber))
    Console.WriteLine($"Udało się skonwertować {secondConvertedNumber}");