#include <iostream>

/*
* 
* 
* 
* 
* Program sprawdzający czy podane dwa słowa są anagramami (czyli takimi, które zawierają te same litery, ale w innym układzie, np. "klasa" i "salka")
* Program wyciągający informacje z numeru PESEL
* Program implementujący algorytm szyfrowania Cezara (proste szyfrowanie, w którym każdy znak w tekście jest zastępowany innym znakiem, przesuniętym o stałą liczbę pozycji w alfabecie).
* Program który na wejściu przyjmie równanie a na wyjściu da równanie w odwrotnej notacji polskiej ONP. Np. na wejściu 2+3*4 na wyjścu da 234*+
* Program, który na wejściu przyjmie rówanie w ONP a na wyjściu wyświetli wynik rówania.
* Algorytm szyfrowania AtBash Cipher - algorytm szyfrujący, w którym każda litera jest zamieniana na literę z przeciwnej strony alfabetu (np. A na Z, B na Y itd.)
*/
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
        std::cout << "Nie jest to mała litera alfabetu \n";
}

void task3()
{
    std::string userName;
    std::cout << "Podaj imię: \n";
    std::cin >> userName;

    std::cout << "Witaj " << userName << " cymbale\n";

}

void task4()
{
    std::string password;
    std::cout << "Podaj hasło: \n";
    std::cin >> password;
    
    if (password == "twójstarywiniary")
        std::cout << "Hasło poprawne zalogowałeś do pounhub PŁEMIUM teraz dzwonimy na płokułatułe smarkaczu\n";
    else
        std::cout << "Hasło niepoprawne \n";
}

void task5()
{
    std::string textFromUser;
    std::cout << "Podaj łańcuch znaków: \n";
    std::cin >> textFromUser;

    /*int numbersOfCharacters = 0;
    std::cout << "Pierwszy znak to " << textFromUser[0] << "\n";
    textFromUser[1] = 'x';
    std::cout << "Ilośc znaków " << textFromUser.length() << "\n";*/

}

void task6()
{
    //Napisz program, który będzie prosił o hasło.Nie przepuści dalej dopóki nie zostanie ono podane prawidłowo.
    std::string password;

    do {
        std::cout << "Podaj hasło: \n";
        std::cin >> password;


    } while (password != "KOKAINAwNOSIE");

    std::cout << "Podano poprawne hasło do konta FoRtInAJtI";
}

void task7()
{
    //Napisz program, który pobiera od użytkownika ciąg znaków i wyświetla liczbę samogłosek i spółgłosek w tym ciągu.
    std::string textFromUser;
    std::cout << "Podaj łańcuch znaków: \n";
    std::cin >> textFromUser;

    int numberOfVovel = 0;
    for (int i = 0; i <= textFromUser.length(); i++)
    {
        if (textFromUser[i] == 'a' ||
            textFromUser[i] == 'e' ||
            textFromUser[i] == 'i' ||
            textFromUser[i] == 'o' ||
            textFromUser[i] == 'u' ||
            textFromUser[i] == 'y' )
        {
            numberOfVovel++;
        }
    }
    std::cout << "Są " << numberOfVovel << " samogłoski " << "i " << textFromUser.length() - numberOfVovel << " spółgłosek\n";

}

void task8()
{
    // Poproś użytkownika o wprowadzenie liczby całkowitej w systemie dziesiętnym.Następnie skonwertuj tę liczbę na system dwójkowy(binarny) i wyświetl wynik.

    int numberFromUser;
    std::cout << "Podaj liczbe: ";
    std::cin >> numberFromUser;
    

    


}

void task9()
{
    //Program sprawdzający czy podany ciąg znaków jest palindromem (czyli takim, który czytany od tyłu jest taki sam, jak czytany od przodu, np. "kajak")
    std::string textFromUser;
    std::cout << "Podaj łańcuch znaków: \n";
    std::cin >> textFromUser;

    std::string reverseText;
    for (int i = textFromUser.length() - 1 ; i > -1 ; i--) 
    {
        
        
        if ()
        {
            
        }
        
    }

    if (isPalindrome == true)
        std::cout << "Podany ciąg znaków jest palindromem";
    else
        std::cout << "Podany ciąg znaków nie jest palindromem";
}
int main()
{
    setlocale(LC_CTYPE, "Polish");
    task9();
}


/*
Typy znakowe
*char - 1 bajt całkowitoliczbowa ze znakiem <-128; 127>
* 

*/
