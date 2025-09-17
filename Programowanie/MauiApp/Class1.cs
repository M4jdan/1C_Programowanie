using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MauiApp
{
    public class MainPageView:BindableObject
    {
        int x = 0;
        public int X {
            get => x;
            set { x = value; OnPropertyChanged(); } 
        }
    }
}
