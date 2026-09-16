namespace SimpleBindingCalculatorMauiApp
{
    public partial class MainPage : ContentPage
    {
        public MainPage()
        {
            InitializeComponent();
        }

        public string FirstNumber { get; set; }
        public string SecondNumber { get; set; }

        private string result;
        public string Result
        {
            get { return result; }
            set
            {
                result = value;
                OnPropertyChanged();
            }
        }



        private void Button_Clicked(object sender, EventArgs e)
        {
            if (int.TryParse(FirstNumber, out int firstNumber)
                && int.TryParse(SecondNumber, out int secondNumber))
            {
                Result = $"{firstNumber + secondNumber}";
            }
            else
            {
                Result = $"Podałeś nieprawidłowe dane.";
            }

        }
    }
}
