
#include <iostream>
#include <fstream>
//zapis do pliku

void task1()
{
    std::string name;
    int age;

    std::cout << "Podaj imie\n";
    std::cin >> name;

    std::cout << "Podaj wiek\n";
    std::cin >> age;

    std::ofstream writeToFile;
    writeToFile.open("c:\\plik2C.txt");

    if (writeToFile.is_open())
    {
        writeToFile << name << "\n" << age << "\n";
        writeToFile.flush();

        writeToFile.close();

    }

    

}

void task2()
{
    std::ifstream readFromFile;
    readFromFile.open("c:\\plik2C.txt");
    if (readFromFile.is_open())
    {
        std::string name;
        int age;

        while (readFromFile >> name)
        {
            
            readFromFile >> age;

            std::cout << "Imie: " << name << " wiek: " << age << "\n";
        }
        
        readFromFile.close();
    }
}

int main()
{
    task2();
}
