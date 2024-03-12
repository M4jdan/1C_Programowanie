#include <iostream>

/*
Zadanie: Tworzenie prostego kalkulatora
Napisz program, który będzie działał jako prosty kalkulator
i będzie umożliwiał użytkownikowi wykonywanie
podstawowych operacji arytmetycznych na dwóch liczbach.
Instrukcje:
Poproś użytkownika o podanie dwóch liczb oraz wybór operacji (dodawanie, odejmowanie, mnożenie lub dzielenie).
W zależności od wyboru użytkownika, wykonaj odpowiednią operację arytmetyczną.
Wyświetl wynik operacji.
Przykładowe działanie programu:
Prosty Kalkulator
-----------------
1. Dodawanie
2. Odejmowanie
3. Mnożenie
4. Dzielenie
Wybierz operację (1/2/3/4): 3
Podaj pierwszą liczbę: 5
Podaj drugą liczbę: 3
Wynik mnożenia: 15
*/


void calculator()
{
    int numberOfOperation;
    do 
    {
        std::cout << "Prosty kalkulator\n";
        std::cout << "-----------------\n";
        std::cout << "1.Dodawanie\n";
        std::cout << "2.Odejmowanie\n";
        std::cout << "3.Mnożenie\n";
        std::cout << "4.Dzielenie\n";
        std::cout << "0.Koniec programu\n";

        std::cin >> numberOfOperation


    }while (numberOfOperation == 0)
}

int main()
{
    
}
