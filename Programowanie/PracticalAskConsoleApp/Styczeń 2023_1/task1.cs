
namespace PracticalAskConsoleApp.Styczeń_2023_1
{
    internal class task1
    {
        public void task()
        {
            int number_a, number_b;
            do
            {
                Console.WriteLine("Podaj liczbę a: ");
                number_a = int.Parse(Console.ReadLine());

                Console.WriteLine("Podaj liczbę b: ");
                number_b = int.Parse(Console.ReadLine());

            } while (number_a <= 0 && number_b <= 0);

            number_a = NWD (number_a, number_b);

            Console.WriteLine($"Największy wspólny dzielnik to: {number_a}");


        }

        /*
         ***********************************
          Nazwa funkcji:       NWD
          
          opis funkcji:        wylicza największy wspólny dzielnik
                               
          parametry:           a - pierwsza liczba
                               b - druga liczba
                               
          zwracany typ i opis: zwracany int, zwraca obliczony największy wspólny dzielnik dwóch liczb
        **************************************
         */
        int NWD(int a, int b)
        {
            while (a != b)
            {
                if (a > b)
                {
                    a = a - b;
                }
                else
                {
                    b = b - a;
                }
            }
            return a;
        }

    }
}
