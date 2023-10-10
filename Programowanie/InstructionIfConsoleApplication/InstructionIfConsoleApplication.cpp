


#include <iostream>

void task1()
{
    int numberFromUser;
    std::cout << "Podaj liczbę: ";
    std::cin >> numberFromUser;
    if (numberFromUser > 0)
        std::cout << "Twoja liczba jest dodatnia";
    else
        std::cout << "Twoja liczba jest ujemna";
}

int main()
{

    task1();
}


