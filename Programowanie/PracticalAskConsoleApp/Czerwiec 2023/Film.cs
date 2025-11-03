using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using System.Text;
using System.Threading.Tasks;

namespace PracticalAskConsoleApp.Czerwiec_2023
{

    /*
     ********************************************************
        Nazwa klasy:    Film

        pola:           title - tytuł
                        number_of_loans - liczba wypożyczeń

        metody:         setTitle, nic - ustawia tytuł
                        getTitle, tytuł - wyświetla tytuł
                        getNumberOfLoans, liczba wypożyczeń - wyświetla liczbę wypożyczeń
                        increment, liczby wypożyczeń - inkrementuje liczbę wypożyczeń i wyświetla liczbę przed i po

        informacje:     Klasa Film do przechowywania ilości wypożyczeń filmów
     ********************************************************
     */
    internal class Film
    {
        protected string title;
        protected int number_of_loans;

        public Film()
        {
            title = "";
            number_of_loans = 0;
        }

        public void setTitle(string t)
        {
            title = t;
        }

        public void getTitle(Film film)
        {
            title = film.title;
            Console.WriteLine($"Tytuł: {title}");
        }

        public void getNumberOfLoans(Film film)
        {
            
            number_of_loans = film.number_of_loans;
            
        }

        public void increment()
        {
            Console.WriteLine($"liczba wypożyczeń przed: {number_of_loans}");
            number_of_loans++;
            Console.WriteLine($"Liczba wypożyczeń po: {number_of_loans}");
        }
    }
}
