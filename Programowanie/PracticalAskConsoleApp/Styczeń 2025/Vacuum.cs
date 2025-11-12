using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PracticalAskConsoleApp.Styczeń_2025
{
    internal class Vacuum : HomeDevices
    {
        private bool vacuum_condition = false;

        /*
         ***************************************************************
         Nazwa:                 setOn

         Opis:                  włącza pralkę

         parametry:             brak

         zwracany typ i opis:   brak
        ******************************************************************
         */
        public void setOn()
        {
            if (vacuum_condition == false)
            {
                vacuum_condition = true;
                announcement("Odkurzacz włączono");
            }
        }


        /*
         ***************************************************************
         Nazwa:                 setOff

         Opis:                  wyłącza pralkę

         parametry:             brak

         zwracany typ i opis:   brak
        ******************************************************************
         */
        public void setOff()
        {
            if (vacuum_condition == true)
            {
                vacuum_condition = false;
                announcement("Odkurzacz wyłączono");
            }
        }
    }

    
}
