// Constructors,Destructors and Static members

/*
  1.Create a class Film (Name,Language,Type and Duration). Create a default
    constructor to initialize Language and Duration as 'Hindi' and 3(hrs).
    Insert rest of the details through function. Display all the details.(Use
    destructor as well)
*/

#include <iostream>
#include <string.h>
using namespace std;

class Film
{
   string name;
   string language;
   string type;
   int duration;

public:
   Film() // Default constructor
   {
      language = "Hindi";
      duration = 3;
   }

   void setFilm(string name, string type)
   {
      this->name = name;
      this->type = type;
   }

   void display()
   {
      cout << "\n***Film Details***" << endl;
      cout << "Name : " << name << endl;
      cout << "Language : " << language << endl;
      cout << "Type : " << type << endl;
      cout << "Duration : " << duration << "hrs" << endl;
   }

   ~Film() // Destructor
   {
      cout << "This is the brief information about Film" << endl;
   }
};

int main()
{
   Film f1;

   string name;
   string type;

   cout << "\nEnter Name of the Film : ";
   getline(cin, name);

   getchar();
   cout << "Enter Type of the Film : ";
   getline(cin, type);

   f1.setFilm(name, type);
   f1.display();

   return 0;
}
