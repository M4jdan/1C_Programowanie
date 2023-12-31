﻿#include <iostream>

/*
*. Program obliczający pole prostokąta.
*. Program obliczający objętość stożka.
*. Program obliczający pole koła.
*. Program obliczający wartość wyrażenia a^2 + b^2
*. Program obliczający pole trójkąta o podstawie b i wysokości h
*. Program obliczający objętość kuli o promieniu r
*. Program obliczający pole trapezu o podstawach a i b oraz wysokości h
*. Program obliczający średnią ważoną trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.
*. Stwórz program, który pobiera od użytkownika długość w metrach i przelicza ją na centymetry i milimetry, wyświetlając wynik.
*. Napisz program, który konwertuje wprowadzoną kwotę w jednej walucie na inną, korzystając z określonego kursu wymiany.
*/
void task1()
{
	std::cout << "Dawaj liczbe draniu\n";
	int numberFromUser;
	std::cin >> numberFromUser;
	std::cout << "Masz farta... " << numberFromUser << "\n";

}

void task2()
{
	short firstNumber;
	short secondNumber;

	std::cout << "Dewej mnie liczbe pierwsza: ";
	std::cin >> firstNumber;
	std::cout << "Dewej mnie liczbe druga: ";
	std::cin >> secondNumber;
	float srednia;
	srednia = (firstNumber + secondNumber) / 2;
	std::cout << "Srednia wynosi: " << srednia;
}

void task3()
{
	/**.Program obliczający pole prostokąta.*/
	int firstSide, secondSide, area;
	std::cout << "Podaj pierwszy bok prostokąta: ";
	std::cin >> firstSide;
	std::cout << "Podaj drugi bok prostokąta: ";
	std::cin >> secondSide;
	area = firstSide * secondSide;
	std::cout << "Pole prostokąta wynosi " << area << " cm2";


}

void task4()
{
	//*.Program obliczający objętość stożka.
	double high, r, V;

	std::cout << "Podaj wysokość stożka: ";
	std::cin >> high;
	std::cout << "Podaj promień koła w stożku: ";
	std::cin >> r;
	V = 1 / 3.0 * 3.14 * (r * r) * high;
	std::cout << "Objętość stożka wynosi: " << V << " cm3";

}

void task5()
{
	//*.Program obliczający pole koła.
	double area, promien;
	std::cout << "Podaj promień koła: ";
	std::cin >> promien;
	area = 3.14 * (promien * promien);
	std::cout << "Pole koła wynosi: " << area << " cm2";
}

void task6()
{
	//*.Program obliczający wartość wyrażenia a ^ 2 + b ^ 2
	int a, b, result;
	std::cout << "podaj liczbe a: ";
	std::cin >> a;
	std::cout << "podaj liczbe a: ";
	std::cin >> b;
	result = (a + b) * (a + b);
	std::cout << "Wynik to " << result;
}

void task7()
{
	//*.Program obliczający pole trójkąta o podstawie b i wysokości h

	double base, high, area;
	std::cout << "Podaj wysokość: ";
	std::cin >> high;
	std::cout << "Podaj podstawe: ";
	std::cin >> base;
	area = high * base / 2;
	std::cout << "Pole trójkąta wynosi: " << area;

}


void task8()
{
	/*.Program obliczający objętość kuli o promieniu r*/
	double size, ray;
	std::cout << "Podaj promień: ";
	std::cin >> ray;
	size = 4 / 3.0 * (3.14 * (ray * ray * ray));
	std::cout << "Wynik to: " << size << " cm3";



}

void task9()
{
	/*.Program obliczający pole trapezu o podstawach a i b oraz wysokości h*/
	double firstBase, secondBase, high, radius;
	std::cout << "Podaj pierwszą podstawe: ";
	std::cin >> firstBase;
	std::cout << "Podaj drugą podstawe: ";
	std::cin >> secondBase;
	std::cout << "Podaj wysokość: ";
	std::cin >> high;
	radius = ((firstBase + secondBase) * high) / 2.0;
	std::cout << "Pole trapezu wynosi: " << radius << " cm2";




}

void task10()
{
	/*.Program obliczający średnią ważoną trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.*/
	double firstRate, secondRate, thirdRate, firstWeight, secondWeight, thirdWeight, weightedAverage;
	std::cout << "Podaj pierwszą ocenę: ";
	std::cin >> firstRate;
	std::cout << "Podaj jej wagę: ";
	std::cin >> firstWeight;
	std::cout << "Podaj drugą ocenę: ";
	std::cin >> secondRate;
	std::cout << "Podaj jej wagę: ";
	std::cin >> secondWeight;
	std::cout << "Podaj trzecią ocenę: ";
	std::cin >> thirdRate;
	std::cout << "Podaj jej wagę: ";
	std::cin >> thirdWeight;
	weightedAverage = ((firstRate * firstWeight) + (secondRate * secondWeight) + (thirdRate * thirdWeight)) / (firstWeight + secondWeight + thirdWeight);
	std::cout << "Wynik to: " << weightedAverage;




}

void task11() 
{
//*.Stwórz program, który pobiera od użytkownika długość w metrach i przelicza ją na centymetry i milimetry, wyświetlając wynik.

	int lengthM, lengthCM, lengthMM;
	std::cout << "Podaj długość w metrach: ";
	std::cin >> lengthM;
	lengthCM = lengthM * 100;
	lengthMM = lengthCM * 10;
	std::cout << "Długość w centymetrach wynosi: " << lengthCM << " cm, a w milimetrach wynosi: " << lengthMM << " mm.";

}

void task12()
{
	//*.Napisz program, który konwertuje wprowadzoną kwotę w jednej walucie na inną, korzystając z określonego kursu wymiany.
	double userMoney, resultMoney;
	std::cout << "Podaj kwotę w złotówkach: ";
	std::cin >> userMoney;
	resultMoney = userMoney * 0.22;
	std::cout << "Twoja kwota w dolarach wynosi: " << resultMoney;


}

int main()
{
	setlocale(LC_CTYPE, "polish");
	//task1();
	/*task2();*/
	/*task3();*/
	/*task4();*/
	/*task5();*/
	//task6();
	//task7();
	/*task8();*/
	/*task9();*/
	/*task10();*/
	/*task11();*/
	task12();
}

//
//Algorytm -skończony zbiór instrukcji, który rozwiązuje zadany problem.
//okresla kolejność wykonywania instrukcji.
//zapis algorytmu
//*rysunki
//* opis słowny
//* w punktach
//* schemat blokowy
//* kod źródłowy danego języka programowania
//* pseudokod
//* 
//* zmienna - pewien obszar pamięci operacyjnech, w której można w danej chwili przechować tylko jedną daną
//
//deklaracja zmiennej:
//typ_zmiennej nazwa_zmiennej
//
//typ zmiennej - wielkość obszaru pamięci, interpretacja ciągu bitów 
//
//int - 4 bajtowa liczba całkowita ze znakiem <-2 147 483 648, 2 147 483 647>
//short - 2 bajtowa liczba całokowita ze znakiem <-32 768, 32 767>
//long - to samo co int
//longlong - 8 bajtowa liczba ze znakiem <- 9 223 372 036 854 775 808, 9 223 372 036 854 775 807>
//
//unsigned - zmienna bez znaku <0, 2*max + 1>
//
//float - 4 bajtowa liczba rzeczywista - dokładność 6-7 cyfr po przecinku
//double - 8 bajtowa liczba rzeczywista - dokładność 15-16 cyfr po przecinku
//long double - 12 bajtowa liczba rzeczywista - dokładność 19-20 cyfr po przecinku
//
//Nazwa zmiennej - nazwa obszaru pamięci, identyfikator
//Warunki niezbędne:
//*Dozwolone znaki:
//    - alfabet angielski aA-zZ
//    - cyfry arabskie 0-9
//    - podłoga
//* pierwszym znakie nie może być cyfra
//* musi być unikalny w swoim zakresie widoczności
//* nie może to być słowo kluczowe (zarezerwowane) daniego języka
//
//warunki programistów:
//*nazwa zmiennej powinna oddawać charakter przechowywanych danych
//* po angielsku




