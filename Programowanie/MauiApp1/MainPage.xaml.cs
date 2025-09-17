namespace MauiApp1
{
    public partial class MainPage : ContentPage
    {
        string count = "pop";

        public string Test
        {
            get => count;
            set
            {
                count = value;
                OnPropertyChanged();
            }
        }
        public MainPage()
        {
            InitializeComponent();
        }

        private void OnCounterClicked(object? sender, EventArgs e)
        {

        }
    }
}
