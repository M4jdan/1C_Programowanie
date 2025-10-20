
namespace PracticalAskConsoleApp.Czerwiec_2022
{
    internal class Person
    {
        private int id;
        private string name;

        public int number_of_instance = 0;

        public Person()
        {
            id = 0;
            name = "";
            number_of_instance++;
        }

        public Person(int id, string name)
        {
            this.id = id;
            this.name = name;
            number_of_instance++;
        }

        public Person(Person person)
        {
            this.id = person.id;
            this.name = person.name;
            number_of_instance++;
        }

        public void WriteName(string n)
        {
            if (this.name != "")
                Console.WriteLine($"Cześć {n}, mam na imię {name}");
            else
                Console.WriteLine($"Cześć {n}, mam na imię 'Brak Danych' ");
        }
    }
}
