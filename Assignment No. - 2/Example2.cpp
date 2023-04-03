// Constructors,Destructors and Static members

/*
   2.Create a class Customer (Cid,Cname,Age,City).Make all the members as
     private.Use parameterized constructor to assign values to it.Display
     all Customer information.(Add at least 5 records)
*/

#include <iostream>
#include <string.h>
using namespace std;

class Customer
{
private:
   int Cid;
   string Cname;
   int Age;
   string City;

public:
   // Parameterized Constructor
   void setCustomer(int Cid, string Cname, int Age, string City)
   {
      this->Cid = Cid;
      this->Cname = Cname;
      this->Age = Age;
      this->City = City;
   }

   void display()
   {
      cout << "\n***Customer Details***" << endl;
      cout << "Id : " << Cid << endl;
      cout << "Name : " << Cname << endl;
      cout << "Age : " << Age << endl;
      cout << "City : " << City << endl;
      cout << endl;
   }
};

int main()
{
   Customer C[5];

   int Cid;
   string Cname;
   int Age;
   string City;

   for (int i = 0; i < 5; i++)
   {
      cout << "\n\nEnter Customer " << i + 1 << " details" << endl;

      cout << "Enter Customer Id : ";
      cin >> Cid;
      
      getchar();
      cout << "Enter Customer name : ";
      getline(cin,Cname);

      getchar();
      cout << "Enter Customer Age : ";
      cin >> Age;

      getchar();
      cout << "Enter Customer City : ";
      getline(cin,City);

      C[i].setCustomer(Cid, Cname, Age, City);
      cout << endl;
   }

   for (int i = 0; i < 5; i++)
   {
      C[i].display();
      cout << endl;
   }

   return 0;
}
