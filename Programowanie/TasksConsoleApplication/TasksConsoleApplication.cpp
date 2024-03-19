#include <iostream>

/*
Zadanie 1: Tworzenie prostego kalkulatora
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

/*
ZADANIE 2
Konwersja temperatury
Napisz program, który będzie konwertować temperaturę pomiędzy skalami: Celsiusza, Fahrenheita i Kelvina.
Instrukcje:
Poproś użytkownika o wybór jednostki, z której chce dokonać konwersji (C - Celsiusz, F - Fahrenheit, K - Kelvin).
Poproś użytkownika o podanie temperatury w wybranej jednostce.
Przelicz temperaturę na pozostałe jednostki (z wykorzystaniem odpowiednich wzorów konwersji).
Wyświetl przeliczone temperatury.
Przykładowe działanie programu:
Konwerter Temperatur
---------------------
Wybierz jednostkę temperatury:
1. Celsiusz (C)
2. Fahrenheit (F)
3. Kelvin (K)
Wybór: C
Podaj temperaturę w stopniach Celsiusza: 25
Przeliczona temperatura:
Fahrenheit: 77.0 °F
Kelvin: 298.15 K
*/

/*
ZADANIE 3
Symulator rzutu kostką
Napisz program, który będzie symulował rzut kostką. Program powinien umożliwiać użytkownikowi wybór rodzaju kostki (np. 6-ścienna, 10-ścienna, 20-ścienna) oraz ilość rzutów. Po wykonaniu rzutów, program powinien wyświetlić wyniki oraz sumę otrzymanych wartości.
Instrukcje:
Poproś użytkownika o wybór rodzaju kostki (np. 6-ścienna, 10-ścienna, 20-ścienna).
Poproś użytkownika o podanie ilości rzutów.
Wykonaj podaną liczbę rzutów wybranej kostką, zapisując wyniki.
Wyświetl otrzymane wyniki oraz sumę otrzymanych wartości.
Przykładowe działanie programu:
Symulator rzutu kostką
-----------------------
Wybierz rodzaj kostki (6/10/20): 10
Ile rzutów chcesz wykonać?: 5
Wyniki rzutów kostką 10-ścienną:
1. Rzut 1: 7
2. Rzut 2: 3
3. Rzut 3: 10
4. Rzut 4: 5
5. Rzut 5: 8
Suma wyników: 33
*/

/*
ZADANIE 4
Konwerter jednostek
Napisz program konwertujący jednostki miar. Program powinien umożliwiać konwersję między różnymi jednostkami (np. metry na centymetry, kilogramy na funty) oraz obsługiwać różne typy jednostek.
Instrukcje:
Zdefiniuj zestaw jednostek, które chcesz obsługiwać (np. długość: metry, centymetry, cale; masa: kilogramy, funty).
Poproś użytkownika o wybór jednostki wejściowej i jednostki wyjściowej oraz podanie wartości do konwersji.
Przekonwertuj wartość z jednostki wejściowej na jednostkę wyjściową na podstawie ustalonego współczynnika konwersji.
Wyświetl wynik konwersji.
Przykładowe działanie programu:
Konwerter jednostek
-------------------
Wybierz jednostkę wejściową:
1. Metry
2. Centymetry
3. Cale
Wybór: 1
Wybierz jednostkę wyjściową:
1. Metry
2. Centymetry
3. Cale
Wybór: 2
Podaj wartość do konwersji: 5
Wynik konwersji: 500 centymetrów
*/

#pragma region Zadanie 1

void calculate(int numberOfOperation)
{
    
}

void showMenu()
{
    system("cls");
    std::cout << "Prosty kalkulator\n";
    std::cout << "-----------------\n";
    std::cout << "1.Dodawanie\n";
    std::cout << "2.Odejmowanie\n";
    std::cout << "3.Mnożenie\n";
    std::cout << "4.Dzielenie\n";
    std::cout << "0.Koniec programu\n";
}

void task1()
{
    while (true)
    {
        showMenu();

        int numberOfOperation;
        std::cin >> numberOfOperation;

        if (numberOfOperation == 0)
        {
            std::cout << "Koniec programu \n";
            break;
        }

        calculate(numberOfOperation);
    }

        


   
}

#pragma endregion To jest zadanie 1


#pragma region Zadanie 2

void recalculation(char choice)
{
    float celcius, kelvin, fahrenheit, value;

    std::cout << "Podaj temperaturę: ";
    std::cin >> value;

    if (choice == 'C')
    {
        celcius = value;

        kelvin = 273.0 + celcius;

        fahrenheit = (celcius * 2.0) + 30;
    }

    else if (choice == 'F')
    {
        fahrenheit = value;

        celcius = (fahrenheit - 30) / 2.0;

        kelvin = 273.0 + celcius;
    }

    else if (choice == 'K')
    {
        kelvin = value;
       
        celcius = kelvin - 273.0;

        fahrenheit = (celcius * 2.0) + 30;
    }

    std::cout << "Temperatura w Celcjuszach: " << celcius << " C \n";
    std::cout << "Temperatura w Fahrenheitach: " << fahrenheit << " F \n";
    std::cout << "Temperatura w Kelvinach: " << kelvin << " k \n";

}

void showMenu2()
{
    std::cout << "Wybierz jednostkę temperatury (podaj literę): \n";
    std::cout << "=-----------------= \n";
    std::cout << "1. Celcjusz (C) \n";
    std::cout << "2. Fahrenheit (F) \n";
    std::cout << "3. Kelvin (K) \n";
}

void task2()
{
    showMenu2();
    char choice;
    std::cin >> choice;

    recalculation(choice);
}

#pragma endregion To jest zadanie 2

#pragma region Zadanie 3

void task3()
{

}

#pragma endregion To jest zadanie 3

int main()
{
    task2();
}
