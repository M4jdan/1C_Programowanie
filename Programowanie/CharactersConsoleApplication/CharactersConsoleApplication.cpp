#include <iostream>

void task1()
{
    char characterFromUser;
    std::cout << "Podaj znak \n";
    std::cin >> characterFromUser;

    std::cout << "Podałeś znak : " << characterFromUser << "\n";
}

void task2()
{
    unsigned char characterFromUser;
    std::cout << "Podaj znak \n";
    std::cin >> characterFromUser;

    if (characterFromUser >= 'a' && characterFromUser <= 'z')
        std::cout << "Jest to mała litera alfabetu \n";
    else 
        std::cout << "Nie jest to mała litera alfabetu \n"
}

int main()
{
    setlocale(LC_CTYPE, "Polish");
    task1();
}


/*
Typy znakowe
*char - 1 bajt całkowitoliczbowa ze znakiem <-128; 127>
* 

*/
