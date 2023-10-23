


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


void task3()
{
	int number;
	std::cout << "Podaj liczbe: ";
	std::cin >> number;

	if (number >= 1 && number < 10)
		std::cout << "Twoja liczba jest w tym zakresie";
	else
		std::cout << "Twoja liczba nie jest w tym przedziale";

	if (number < 1 || number >= 10)
		std::cout << "Twoja liczba nie jest w tym przedziale";
	else
		std::cout << "Twoja liczba jest w tym zakresie";

	if (!(number < 1 || number >= 10))
		std::cout << "Twoja liczba nie jest w tym przedziale";
	else
		std::cout << "Twoja liczba jest w tym zakresie";

}

/*

*.
*.
*.
*.
*.
*.
*.
*. Napisz program, który poprosi użytkownika o podanie długości trzech odcinków i sprawdzi, czy można zbudować z nich trójkąt. Wyświetl odpowiedni komunikat.
*. Napisz program, który poprosi użytkownika o podanie liczby dodatniej i obliczy jej pierwiastek kwadratowy, jeśli jest to możliwe. Wyświetl wynik lub odpowiedni komunikat, jeśli liczba jest ujemna.
*. Program sprawdzający czy podana data jest poprawna (np. sprawdzając, czy dzień jest z zakresu od 1 do 31, miesiąc od 1 do 12 itd.)
*.
*/

void task5()
{
	//.Napisz program, który poprosi użytkownika o podanie dwóch liczb całkowitych i sprawdzi, czy są one równe.Wyświetl odpowiedni komunikat.
	int firstNumber, secondNumber;
	std::cout << "Podaj pierwszą liczbe: ";
	std::cin >> firstNumber;
	std::cout << "Podaj drugą liczbę: ";
	std::cin >> secondNumber;
	if (firstNumber == secondNumber)
		std::cout << "Liczby są równe";
	else
		std::cout << "Liczby są różne";

}

void task6()
{
	//napisz program, który poprosi użytkownika o podanie wieku i sprawdzi, czy osoba jest pełnoletnia.Wyświetl odpowiedni komunikat.
	int age;
	std::cout << "Podaj wiek: ";
	std::cin >> age;
	if (age >= 18)
		std::cout << "Jesteś pełnoletni";
	else
		std::cout << "Jesteś nielegalny";

}

void task7()
{
	//Napisz program, który poprosi użytkownika o podanie liczby całkowitej i obliczy jej wartość bezwzględną.Wyświetl wynik.
	int firstNumber;
	std::cout << "Podaj liczbe: ";
	std::cin >> firstNumber;

	if (firstNumber < 0)
	{
		int absValue = firstNumber * (-1);
		std::cout << absValue;

	}
	else
		std::cout << firstNumber;
}

void task8()
{
	//Napisz program, który poprosi użytkownika o podanie liczby od 1 do 7 i wyświetli odpowiadający mu dzień tygodnia.
	int number;
	std::cout << "Podaj liczbe od 1 do 7: ";
	std::cin >> number;
	if (number >= 1 && number <= 7)
	{
		if (number == 1)
			std::cout << "Poniedziałek";
		if (number == 2)
			std::cout << "Wtorek";
		if (number == 3)
			std::cout << "Środa";
		if (number == 4)
			std::cout << "Czwartek";
		if (number == 5)
			std::cout << "Piątek";
		if (number == 6)
			std::cout << "Sobota";
		if (number == 7)
			std::cout << "Niedziela";
	}
	else
		std::cout << "Niepoprawna liczba";
}

void task9()
{
	//Napisz program, który poprosi użytkownika o podanie dwóch liczb całkowitych i wyświetli większą z nich.
	int firstNumber, secondNumber;
	std::cout << "Podaj pierwsza liczbe: ";
	std::cin >> firstNumber;
	std::cout << "Podaj druga liczbe: ";
	std::cin >> secondNumber;

	if (firstNumber > secondNumber)
		std::cout << firstNumber;
	else
		std::cout << secondNumber;
}

void task10()
{
	//Napisz program, który poprosi użytkownika o podanie roku i sprawdzi, czy jest to rok przestępny.Wyświetl odpowiedni komunikat.
	int year, firstNumber;
	std::cout << "Podaj rok: ";
	std::cin >> year;



}

void task11()
{
	//Napisz program, który poprosi użytkownika o podanie liczby całkowitej i sprawdzi, czy jest ona podzielna zarówno przez 3, jak i przez 5. Wyświetl odpowiedni komunikat.
	int number;
	std::cout << "Podaj liczbe: ";
	std::cin >> number;

	if (number % 3 == 0)
		if (number % 5 == 0)
			std::cout << "liczba jest podzielna przez 3 i 5";
		else
			std::cout << "liczba nie dzieli się na 5";
	else
		std::cout << "liczba nie dzieli się na 3";


}

void task12()
{
	//Napisz program, który poprosi użytkownika o podanie masy ciała(w kilogramach) i wzrostu(w metrach).
	   // Na podstawie tych danych oblicz wskaźnik BMI(Body Mass Index) i wyświetl odpowiedni komunikat informujący o stanie zdrowia.

	int weight, high;
	std::cout << "podaj wagę (kg) : ";
	std::cin >> weight;
	std::cout << "podaj wysokość (m) : ";
	std::cin >> high;

	float bmi = weight / (high ^ 2);
	std::cout << "Wskaźnik BMI wynosi: " << bmi;

}
int main()
{

	//task1();
   // task2();
	//task3();
   /* task7();*/
	task12();
}


