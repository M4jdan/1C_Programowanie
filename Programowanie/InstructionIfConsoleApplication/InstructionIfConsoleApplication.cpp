


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
*.
*. 
*. 
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
	
		if (number == 1)
			std::cout << "Poniedziałek";
		else if (number == 2)
			std::cout << "Wtorek";
		else if (number == 3)
			std::cout << "Środa";
		else if (number == 4)
			std::cout << "Czwartek";
		else if (number == 5)
			std::cout << "Piątek";
		else if (number == 6)
			std::cout << "Sobota";
		else if (number == 7)
			std::cout << "Niedziela";
		else 
			std::cout << "NIepoprawna liczba"
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

	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		std::cout << "Rok jest przestępny";
	else
		std::cout << "rok nie jest przestępny";

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
	/*Napisz program, który poprosi użytkownika o podanie masy ciała(w kilogramach) i wzrostu(w metrach).
	  Na podstawie tych danych oblicz wskaźnik BMI(Body Mass Index) i wyświetl odpowiedni komunikat informujący o stanie zdrowia.
	poniżej 16 - wygłodzenie
	16 - 16.99 - wychudzenie
	17 - 18.49 - niedowagę
	18.5 - 24.99 - wagę prawidłową
	25.0 - 29.9 - nadwagę
	30.0 - 34.99 - I stopień otyłości
	35.0 - 39.99 - II stopień otyłości
	powyżej 40.0 - otyłość skrajną

	  */
	int weight, high;
	std::cout << "podaj wagę (kg) : ";
	std::cin >> weight;
	std::cout << "podaj wysokość (m) : ";
	std::cin >> high;

	float bmi = weight / (high ^ 2);
	std::cout << "Wskaźnik BMI wynosi: " << bmi;


}

void task13()
{
	//Napisz program, który poprosi użytkownika o podanie długości trzech odcinków i sprawdzi, czy można zbudować z nich trójkąt.Wyświetl odpowiedni komunikat.
	int firstSide, secondSide, thirdSide;
	std::cout << " Podaj pierwszy bok: ";
	std::cin >> firstSide;
	std::cout << " Podaj drugi bok: ";
	std::cin >> secondSide;
	std::cout << " Podaj trzeci bok: ";
	std::cin >> thirdSide;

	if (firstSide == 0 || secondSide == 0 || thirdSide == 0)
		std::cout << "Bok jest równy zero";
	else
		if (firstSide + secondSide > thirdSide && secondSide + thirdSide > firstSide && firstSide + thirdSide > secondSide)
			std::cout << "Da się zrobić trójkąt";
		else
			std::cout << "Nie da się zrobić trójkąta";

}

void task14()
{
	//Napisz program, który poprosi użytkownika o podanie liczby dodatniej i obliczy jej pierwiastek kwadratowy, jeśli jest to możliwe.Wyświetl wynik lub odpowiedni komunikat, jeśli liczba jest ujemna.
	float number;
	std::cout << "Podaj liczbe: ";
	std::cin >> number;

	if (number < 0)
		std::cout << "Nie da się pierwiastka z ujemnej";
	else
	{
		float result = sqrt(number);
		std::cout << result;
	}
	
}

void task15()
{
	//Program sprawdzający czy podana data jest poprawna(np.sprawdzając, czy dzień jest z zakresu od 1 do 31, miesiąc od 1 do 12 itd.)
	int day, month, year;
	std::cout << "Podaj dzień";
	std::cin >> day;
	std::cout << "Podaj miesiąc";
	std::cin >> month;
	std::cout << "Podaj rok";
	std::cin >> year;

	if (day >= 1 && day <= 31
		&& month >= 1 && month <= 12
		&& year != 0

		&& ((month == 4 || month == 6 || month == 9 || month == 11) && day != 31)

		&& month == 2 && (day >= 28
			|| day == day == 29 && (year % 4 == 0 && year % 100 != 0 || year % 400 == 0))
		)
		std::cout << "Data " << day << "," << month << "," << year << " jest poprawna";
	else
		std::cout << "Data nie jest poprawna";
		

}

void task16()
{
	
	int number;
	std::cout << "Podaj liczbe: ";
	std::cin >> number;

	while (number)
}

int main()
{
	setlocale(LC_CTYPE, "Polish");
	//task1();
   // task2();
	//task3();
   // task7();
	//task8();
	///task9();
	//task10();
	///task11();
	//task12();
	task13();
	//task14();
	//task15();
}


