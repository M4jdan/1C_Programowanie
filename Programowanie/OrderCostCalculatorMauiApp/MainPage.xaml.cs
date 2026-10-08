namespace OrderCostCalculatorMauiApp
{
    public partial class MainPage : ContentPage
    {
        public string ProductName { get; set; }

        public string Price { get; set; }

        private double numberOfItems = 1;
        public double NumberOfItems
        {
            get { return numberOfItems; }
            set
            {
                numberOfItems = value;
                OnPropertyChanged();
            }
        }

        public List<string> DeliveryTypes { get; set; } = new List<string>
        {
            "Odbiór osobisty",
            "Kurier",
            "Paczkomat"
        };

        public string SelectedDelivery { get; set; }

        public Command CalculateCommand { get; set; }

        private string message;

        public string Message
        {
            get { return message; }
            set
            {
                message = value;
                OnPropertyChanged();
            }
        }

        public MainPage()
        {
            CalculateCommand = new Command(CalculateCost);

            InitializeComponent();
        }

        private void CalculateCost()
        {
            if (string.IsNullOrWhiteSpace(ProductName))
            {
                Message = "Podaj nazwę produktu.";
                return;
            }

            if (string.IsNullOrWhiteSpace(Price))
            {
                Message = "Podaj cenę za sztukę.";
                return;
            }

            if (!double.TryParse(Price, out double price))
            {
                Message = "Cena musi być liczbą.";
                return;
            }

            if (price < 0)
            {
                Message = "Cena nie może być ujemna.";
                return;
            }

            if (string.IsNullOrWhiteSpace(SelectedDelivery))
            {
                Message = "Wybierz sposób dostawy.";
                return;
            }

            double deliveryCost = 0;

            if (SelectedDelivery == "Odbiór osobisty")
            {
                deliveryCost = 0;
            }
            else if (SelectedDelivery == "Kurier")
            {
                deliveryCost = 12;
            }
            else if (SelectedDelivery == "Paczkomat")
            {
                deliveryCost = 10;
            }

            double orderCost = price * NumberOfItems;

            double totalCost = orderCost + deliveryCost;

            Message = $"Produkt: {ProductName}\n" +
                      $"Cena za sztukę: {price:F2} zł\n" +
                      $"Liczba sztuk: {NumberOfItems}\n" +
                      $"Sposób dostawy: {SelectedDelivery}\n" +
                      $"Koszt dostawy: {deliveryCost:F2} zł\n" +
                      $"Łączny koszt: {totalCost:F2} zł";
        }
    }
}

/*
 Zadanie – Kalkulator kosztu zamówienia
Napisz aplikację w .NET MAUI, która pozwala obliczyć koszt prostego zamówienia.

Aplikacja powinna zawierać:
- pole Nazwa produktu (Entry),
- pole Cena za sztukę (Entry),
- wybór liczby sztuk za pomocą kontrolki Stepper (od 1 do 10),
- Label wyświetlający aktualnie wybraną liczbę sztuk,
- przełącznik Dostawa ekspresowa (Switch),
- przycisk Oblicz,
- Label wyświetlający podsumowanie zamówienia i końcową cenę.

Zasady obliczeń:
Koszt zamówienia oblicz według wzoru:
cena za sztukę × liczba sztuk
Jeśli użytkownik włączy dostawę ekspresową, do ceny zamówienia należy doliczyć 15 zł.

Przykład:
Produkt: Słuchawki
Cena za sztukę: 120 zł
Liczba sztuk: 3
Dostawa ekspresowa: TAK  
Wynik: 375 zł



Dla chętnych: zamiast przełącznika dostawy ekspresowej dodaj Picker, który pozwala wybrać sposób dostawy:
- Odbiór osobisty – 0 zł
- Kurier – 12 zł
- Paczkomat – 10 zł
Wybrany sposób dostawy uwzględnij podczas obliczania końcowej ceny zamówienia.
*/

