using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Xml.Serialization;

namespace PracticalAskConsoleApp.Styczeń_2023_1
{

    /*
     ***********************************************
     Klasa:     Note

     Opis:      tworzenie notatek 

     pola:      notes_count - licznik notatek
                notes_id - identyfikator notatki
                notes_title - tytuł notatki
                notes_content - treść notatki
     ****************************************************
     */
    internal class Note
    {
        static private int notes_count = 0;
        private int note_id;

        protected string note_title;
        protected string note_content;

        public Note(string title, string content)
        {

            notes_count += 1;
            note_id = notes_count;

            note_title = title;
            note_content = content;

        }

        public void ViewNote()
        {
            Console.WriteLine($"Tytuł: {note_title} \n");
            Console.WriteLine($"Treść: {note_content} \n");
        }

        public void Diagnose()
        {
            Console.WriteLine($"Liczba utworzonych notatek : {notes_count}; Numer ID: {note_id}; Tytuł: {note_title}; Treść: {note_content} \n");
        }

    }
}
