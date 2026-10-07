namespace HotelBookingMauiApp
{
    public partial class MainPage : ContentPage
    {
        public string FullName { get; set; }

        public string Email { get; set; }

        public DateTime ArrivalDate { get; set; } = DateTime.Today;

        public DateTime MinimumDate
        {
            get { return DateTime.Today; }
        }

        private double numberOfNights = 1;
        public double NumberOfNights
        {
            get { return numberOfNights; }
            set
            {
                numberOfNights = value;
                OnPropertyChanged();
            }

        }

        private double numberOfPeople = 1;
        public double NumberOfPeople
        {
            get { return numberOfPeople; }
            set
            {
                numberOfPeople = value;
                OnPropertyChanged();
            }

        }

        public List<string> RoomTypes { get; set; } = new List<string>
        {
            "Pokój jednoosobowy",
            "Pokój dwuosobowy",
            "Apartament"
        };

        public string SelectedRoom { get; set; }

        public bool Breakfast { get; set; }

        public bool Parking { get; set; }

        private double discount;
        public double Discount
        {
            get { return discount; }
            set
            {
                discount = value;
                OnPropertyChanged();
            }

        }

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
            if (string.IsNullOrWhiteSpace(FullName))
            {
                Message = "Podaj imię i nazwisko.";
                return;
            }

            if (string.IsNullOrWhiteSpace(Email))
            {
                Message = "Podaj adres Email.";
                return;
            }

            if (string.IsNullOrWhiteSpace(SelectedRoom))
            {
                Message = "Wybierz rodzaj pokoju.";
                return;
            }

            double roomPrice = 0;

            if (SelectedRoom == "Pokój jednoosobowy")
            {
                roomPrice = 200;
            }
            else if (SelectedRoom == "Pokój dwuosobowy")
            {
                roomPrice = 300;
            }
            else if (SelectedRoom == "Apartament")
            {
                roomPrice = 500;
            }

            double roomCost = NumberOfNights * roomPrice;

            double breakfastCost = 0;

            if (Breakfast)
            {
                breakfastCost = NumberOfNights * NumberOfPeople * 40;
            }

            double parkingCost = 0;

            if (Parking)
            {
                parkingCost = NumberOfNights * 30;
            }

            double totalCost = roomCost + breakfastCost + parkingCost;

            double discountAmount = totalCost * Discount / 100;

            totalCost = totalCost - discountAmount;

            Message = $"Imię i nazwisko: {FullName}\n" +
                      $"Data przyjazdu: {ArrivalDate:dd.MM.yyyy}\n" +
                      $"Pokój: {SelectedRoom}\n" +
                      $"Liczba nocy: {NumberOfNights}\n" +
                      $"Liczba osób: {NumberOfPeople}\n" +
                      $"Śniadanie: {(Breakfast ? "TAK" : "NIE")}\n" +
                      $"Parking: {(Parking ? "TAK" : "NIE")}\n" +
                      $"Rabat: {Discount:F0}%\n" +
                      $"Łączny koszt: {totalCost:F2} zł";
        }
    }
}

/*
Zadanie – Rezerwacja pokoju hotelowego
Napisz aplikację w .NET MAUI, która pozwala przygotować prostą rezerwację pokoju hotelowego.

Użytkownik powinien podać następujące informacje:
- Imię i nazwisko – Entry,
- Adres e-mail – Entry,
- Data przyjazdu – DatePicker,
- Liczba nocy – Stepper (od 1 do 14),
- Liczba osób – Stepper (od 1 do 4),
- Rodzaj pokoju – Picker:
  - Pokój jednoosobowy – 200 zł / noc,
  - Pokój dwuosobowy – 300 zł / noc,
  - Apartament – 500 zł / noc,
- Śniadanie – Switch – dodatkowo 40 zł za osobę za każdą noc,
- Miejsce parkingowe – CheckBox – dodatkowo 30 zł za każdą noc,
- przycisk Oblicz koszt – Button,
- Label wyświetlający podsumowanie rezerwacji.

Aktualna liczba nocy oraz liczba osób powinna być wyświetlana obok odpowiednich kontrolek Stepper. Wykorzystaj do tego binding, tak aby wartości zmieniały się automatycznie.
Po naciśnięciu przycisku Oblicz koszt aplikacja powinna obliczyć całkowity koszt pobytu.

Przykład:
Imię i nazwisko: Jan Kowalski
Data przyjazdu: 15.10.2026
Liczba nocy: 3
Liczba osób: 2
Pokój: Pokój dwuosobowy
Śniadanie: TAK
Parking: TAK
Koszt pokoju: 3 × 300 zł = 900 zł
Śniadanie: 3 × 2 × 40 zł = 240 zł
Parking: 3 × 30 zł = 90 zł
Łącznie: 1230 zł
W podsumowaniu wyświetl imię i nazwisko klienta, datę przyjazdu, wybrany rodzaj pokoju, liczbę nocy, liczbę osób oraz całkowity koszt rezerwacji.

Dodatkowe wymagania:
- użytkownik nie może wybrać daty przyjazdu wcześniejszej niż dzisiejsza,
- przed wykonaniem obliczeń sprawdź, czy użytkownik podał imię i nazwisko oraz wybrał rodzaj pokoju,
- jeśli dane są niepoprawne lub niekompletne, wyświetl odpowiedni komunikat.

Dla chętnych: dodaj Slider pozwalający ustawić rabat od 0% do 20%. Aktualna wartość rabatu powinna być wyświetlana za pomocą Label i bindingu. Rabat należy uwzględnić w końcowej cenie rezerwacji.

*/
