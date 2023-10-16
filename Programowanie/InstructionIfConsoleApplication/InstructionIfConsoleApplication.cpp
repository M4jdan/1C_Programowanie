


#include <iostream>

void task1()
{
    int numberFromUser;
    std::cout << "Podaj liczbę: ";
    std::cin >> numberFromUser;
    if (numberFromUser > 0)
        std::cout << "Twoja liczba jest dodatnia";
    if (numberFromUser == 0)
        std::cout << "Twoja liczba to 0";
    else
        std::cout << "Twoja liczba jest ujemna";
}

void task2()
{
    int numberFromUser;
    std::cout << "Podaj liczbe: ";
    std::cin >> numberFromUser;
    if ((numberFromUser % 2) == 0)
        std::cout << "Twoja liczba jest parzysta";
    else
        std::cout << "Twoja liczba jest nieparzysta";
    

}

int main()
{

    //task1();
    task2();
}


