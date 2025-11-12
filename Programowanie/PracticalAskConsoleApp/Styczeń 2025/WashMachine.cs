using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PracticalAskConsoleApp.Styczeń_2025
{
    internal class WashMachine : HomeDevices
    {
        private int wash_program_number = 0;

        /*
         ***************************************************************
         Nazwa:                 setProgram

         Opis:                  ustawia program prania 

         parametry:             number - numer trybu prania

         zwracany typ i opis:   brak
        ******************************************************************
         */
        public void setProgram(int number)
        {
            announcement("Podaj numem prania 1..12");
            Console.WriteLine(number);
            if (number >= 1 && number <= 12)
            {
                wash_program_number = number;
                
                announcement("Program został ustawiony.");
            }
            else
            {
                wash_program_number = 0;
                announcement("Podano niepoprawny numer programu.");
            }

            
        }
    }
}
