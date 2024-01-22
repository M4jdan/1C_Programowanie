#include <iostream>

void task1()
{
    /* Napisz program który wczyta np. 5 liczb 
    a następnie wyświetli je w odwrotnej kolejności */
    
    const unsigned short ARRAY_SIZE = 5;
    int numbers[ARRAY_SIZE];

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        std::cout << "Podaj daną\n";
        std::cin >> numbers[i];
    }

    std::cout << "Podane dane w odwrotnej kolejności: \n";
    for (int i = ARRAY_SIZE - 1; i >= 0; i--)
    {
        std::cout << numbers[i] << ", ";
    }
    std::cout << "\n";
}

void task2()
{
    //napisz program do średniej arytmetycznej z tablicy

    const unsigned short LOWER_RANGE = 5;
    const unsigned short UPPER_RANGE = 7;
    
    const unsigned short ARRAY_SIZE = 5;
    int numbers[ARRAY_SIZE];

    srand(time(0));

    std::cout << "wylosowane liczbey: \n";
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        numbers[i] = rand() % (UPPER_RANGE + 1) + LOWER_RANGE;
        std::cout << numbers[i] << ", ";
    }
    std::cout << "\n";

    int sum = 0;
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        sum = sum + numbers[i];
    }
    double avg = sum * 1.0 / ARRAY_SIZE;
    std::cout << "Średnia wynosi: " << avg << "\n";
}

void task3()
{
    //Napisz program wybierający losowe liczby w tablicy i znajduje największ. i najmniejsz.

    const unsigned short LOWER_RANGE = 5;
    const unsigned short UPPER_RANGE = 7;

    const unsigned short ARRAY_SIZE = 5;
    int numbers[ARRAY_SIZE];

    srand(time(0));

    std::cout << "wylosowane liczby: \n";
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        numbers[i] = rand() % (UPPER_RANGE + 1) + LOWER_RANGE;
        std::cout << numbers[i] << ", ";
    }
    std::cout << "\n";
    
    int max = numbers[0];
    for (int i = 1; i < ARRAY_SIZE; i++)
    {
        if (numbers[i] > max)
            max = numbers[i];
    }
    std::cout << "Max to: " << max << "\n";

    int min= numbers[0];
    for (int i = 1; i < ARRAY_SIZE; i++)
    {
        if (numbers[i] < min)
            min = numbers[i];
    }
    std::cout << "Max to: " << max << "\n";
}

void task4()
{
    const long long UPPER_RANGE = 70;

    for (long long numberToCheck = 2; numberToCheck <= UPPER_RANGE; numberToCheck++)
    {
        bool isPrime = true;
        for (long long i = 2; i <= numberToCheck / 2; i++)
        {
            if (numberToCheck % i == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime /* == true*/)
            std::cout << numberToCheck << ", ";
    }
    std::cout << "Gotowe\n";


    //wersja 2
    bool sieveOfEratosthenes[UPPER_RANGE + 1];

    for (unsigned long long i = 2; i <= UPPER_RANGE; i++)
    {
        sieveOfEratosthenes[i] = true;
    }

    for (unsigned long long number = 2; number <= UPPER_RANGE; number++)
    {
        if (sieveOfEratosthenes[number] /*== true*/)
        {
            for (long long numberToCrossOut = number + number; numberToCrossOut <= UPPER_RANGE; numberToCrossOut = numberToCrossOut + number)
                sieveOfEratosthenes[numberToCrossOut] = false;
        }
    }

    for (unsigned long long i = 2; i <= UPPER_RANGE; i++)
    {
        if (sieveOfEratosthenes[i] /*== true*/)
            std::cout << i << ", ";
    }
    std::cout << "\n";
}

void task5()
{
    int numberOfWeek = 5;
    std::cout << "Podaj numer dnia tygodnia\n";
    std::cin >> numberOfWeek;

    std::string dayNames[] = { "Poniedziałek","Wtorek","Środa","Czwartek","Piątek","Sobota","NIedziela" };

    if (numberOfWeek >= 0 && numberOfWeek <= 6)
        std::cout << dayNames[numberOfWeek];
    else
        std::cout << "niepoprawny wynik";
}

int main()
{
    setlocale(LC_CTYPE, "Polish");
    task3();
}

