// Basics of Object Oriented Programming

/*
  2.Write a program using class to accept 5 numbers from user and display largest,second
     largest and smallest,second smallest and middle number among five.
*/

#include <iostream>
using namespace std;

class Numbers
{
   int a[5];

public:
   void get_numbers()
   {
      cout << "\nEnter 5 numbers : " << endl;
      for (int i = 0; i < 5; i++)
      {
         cin >> a[i];
      }

      for (int i = 0; i < 5; i++) // Sorting Array
      {
         int temp;
         for (int j = i + 1; j < 5; j++)
         {
            if (a[i] < a[j])
            {
               temp = a[i];
               a[i] = a[j];
               a[j] = temp;
            }
         }
      }
   }

   void display_numbers()
   {
      cout << "\nLargest Number: " << a[0] << endl;
      cout << "Second Largest Number: " << a[1] << endl;
      cout << "Middle Number: " << a[2] << endl;
      cout << "Second Smallest Number: " << a[3] << endl;
      cout << "Smallest Number: " << a[4] << endl;
   }
};

int main()
{
   Numbers num;
   num.get_numbers();
   num.display_numbers();

   return 0;
}
