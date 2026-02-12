using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace LinqPractocalTasksConsoleApp
{

    /*

    


    ========================================
    == POZIOM 3 – ZAAWANSOWANY ==
    ========================================

    22. Znajdź osoby, które mają skill "C#".
    23. Znajdź osoby, które mają co najmniej trzy skille.
    24. Znajdź osoby z Warszawy, posortuj je po wieku malejąco i wypisz tylko ich imię, nazwisko, wiek i pensję.
    25. Sprawdź, czy ktoś ma skill "Azure".
    26. Sprawdź, czy wszyscy zarabiają co najmniej 4000.
    27. Znajdź osobę o największej pensji.
    28. Znajdź osobę o najmniejszej pensji.
    29. Wypisz osoby, które mają taki sam wiek jak najstarsza osoba.


    ========================================
    == POZIOM 4 – EKSTRA / DLA CHĘTNYCH ==
    ========================================

    32. Posortuj osoby według liczby posiadanych skilli.
    33. Podziel osoby na dwie listy: zarabiających przynajmniej 8000 oraz zarabiających mniej niż 8000.
    35. Przyporządkuj każdą osobę do przedziału wiekowego (np. 20–29, 30–39, 40–49) i wypisz osoby z każdego przedziału.

    */


    internal class Task1
    {
        void Print<T>(string title, IEnumerable<T> data)
        {
            Console.WriteLine($"\n=== {title} ===");
            foreach (var item in data)
                Console.WriteLine(item);
        }

        public void DoTasks()
        {
            var people = new List<Person>
        {
            new Person() { Id=1, FirstName="Anna",  LastName="Nowak",    Age=29, Gender=Gender.Female, City="Kielce", Salary=8200m,  Skills=["C#", "LINQ", "SQL"] },
            new() { Id=2, FirstName="Marek", LastName="Kowalski", Age=43, Gender=Gender.Male,   City="Warszawa", Salary=15000m, Skills=["Azure", "C#", "DevOps"] },
            new() { Id=3, FirstName="Ewa",   LastName="Wiśniewska",Age=35, Gender=Gender.Female, City="Kraków", Salary=9800m,  Skills=["JavaScript", "React"] },
            new() { Id=4, FirstName="Jan",   LastName="Zieliński", Age=43, Gender=Gender.Male,   City="Gdańsk", Salary=12000m, Skills=["C#", "SQL"] },
            new() { Id=5, FirstName="Ola",   LastName="Maj",       Age=26, Gender=Gender.Female, City="Kielce", Salary=7200m,  Skills=["Python", "ML"] },
            new() { Id=6, FirstName="Piotr", LastName="Lewandowski",Age=37,Gender=Gender.Male,   City="Warszawa", Salary=13400m, Skills=["C#", "LINQ", "Azure"] },
            new() { Id=7, FirstName="Iga",   LastName="Kowal",     Age=31, Gender=Gender.Female, City="Kraków", Salary=9900m,  Skills=["Go", "Kubernetes"] },
            new() { Id=8, FirstName="Tomek", LastName="Sikora",    Age=29, Gender=Gender.Male,   City="Kielce", Salary=8800m,  Skills=["C#", "MAUI", "Bluetooth"] },
        };


            /*
            // Zadanie 1
            var q1 = people.Where(p => p.City == "Kraków");
            Print("Zadanie 1", q1);

            // zadanie 2

            var q2 = people.Where(p => p.Age >= 18);
            Print("Zadanie 2", q2);

            // zad 3
            var q3 = people.OrderBy(p => p.Age);
            Print("zad 3", q3);

            // zad 4
            var q4 = people.OrderByDescending(p => p.LastName);
            Print("zad 4", q4);

            // zad 5
            IEnumerable<BoxFirstAndLastName> q5 = people.Select(p => new BoxFirstAndLastName() { FirstName = p.FirstName, LastName = p.LastName });
            Print("zad 5", q5);

            //zad 6
            var q6 = people.DistinctBy(p => p.City).Select(p => p.City);
            Print("zad 6", q6);

            // zad 7
            var q7 = people.Where(p => p.City == "Warszawa").Count().ToString();
            Print("zad 7", q7);

            //zad 8
            var q8 = people.Average(p => p.Salary);
            Console.Write($"\n=== zad 8 ===  \n{q8}\n");

            var q9 = people.OrderBy(p => p.Age).FirstOrDefault();
            Console.Write($"\n=== zad 9 ===  \n{q9}\n");

            var q10 = people.Any(p => p.City == "Gdańsk");
            Console.Write($"\n=== zad 10 ===  \n{q10}\n");

            */



            /*
             ========================================
             == POZIOM 2 – ŚREDNI ==
             ========================================

             11. Posortuj osoby po mieście, a w ramach miasta po pensji malejąco.
             12. Znajdź osoby w wieku od 25 do 35 lat (włącznie).
             13. Oblicz sumę pensji osób z Kielc.
             14. Znajdź pierwszą osobę, której pensja jest większa niż 10 000.
             15. Znajdź ostatnią osobę w kolejności alfabetycznej po nazwisku.
             16. Wygeneruj dane osób w formacie: "Imię Nazwisko (Miasto)".
             17. Sprawdź, czy wszyscy mają co najmniej 18 lat.
             18. Policz, ile jest kobiet.
             19. Znajdź osoby, które zarabiają więcej niż średnia pensja.
             20. Znajdź najstarszą osobę z Krakowa.
            */

            /*
            //zad 11
            var q11 = people.OrderBy(p => p.City).OrderByDescending(p => p.Salary);
            Print("zad 11", q11);

            //zad 12
            var q12 = people.Where(p => p.Age >= 25 && p.Age <= 35);
            Print("zad 12", q12);

            //zad 13
            var q13 = people.Where(p => p.City == "Kielce").Sum(p => p.Salary);
            Console.Write($"\n=== zad 13 ===  \n{q13}\n");

            //zad 14
            var q14 = people.Where(p => p.Salary > 10000).OrderBy(p => p.Salary).FirstOrDefault();
            Console.Write($"\n=== zad 14 ===  \n{q14}\n");

            //zad 15
            var q15 = people.OrderBy(p => p.LastName).Last();
            Console.Write($"\n=== zad 15 ===  \n{q15}\n");

            //zad 16
            var q16 = people.Select(p => new { Name = p.FirstName + " " + p.LastName, p.City});
            Print("zad 16", q16);

            //zad 17
            var q17 = people.All(p => p.Age >= 18);
            Console.Write($"\n=== zad 17 ===  \n{q17}\n");

            //zad 18
            var q18 = people.Count(p => p.Gender == Gender.Female);
            Console.Write($"\n=== zad 18 ===  \n{q18}\n");

            //zad 19
            var avg_salary = people.Average(p => p.Salary);
            var q19 = people.Where(p => p.Salary > avg_salary);
            Print("zad 19", q19);

            //zad 20
            var q20 = people.Where(p => p.City == "Kraków").OrderBy(p => p.Age).LastOrDefault();
            Console.Write($"\n=== zad 20 ===  \n{q20}\n");
            */

            /*
            ========================================
            == POZIOM 3 – ZAAWANSOWANY ==
            ========================================

            22. Znajdź osoby, które mają skill "C#".
            23. Znajdź osoby, które mają co najmniej trzy skille.
            24. Znajdź osoby z Warszawy, posortuj je po wieku malejąco i wypisz tylko ich imię, nazwisko, wiek i pensję.
            25. Sprawdź, czy ktoś ma skill "Azure".
            26. Sprawdź, czy wszyscy zarabiają co najmniej 4000.
            27. Znajdź osobę o największej pensji.
            28. Znajdź osobę o najmniejszej pensji.
            29. Wypisz osoby, które mają taki sam wiek jak najstarsza osoba.
             */


        }

        class BoxFirstAndLastName
        {
            public string FirstName { get; init; }

            public string LastName { get; init; }

            public override string ToString()
                => $"{FirstName}, {LastName}";


        }

    }
}
