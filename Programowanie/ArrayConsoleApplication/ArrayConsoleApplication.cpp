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

    int sum = 0;
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        sum = sum + numbers[i];
    }
    double avg = sum * 1.0 / ARRAY_SIZE;
    std::cout << "Średnia wynosi: " << avg << "\n";
}

int main()
{
    setlocale(LC_CTYPE, "Polish");
    task3();
}

