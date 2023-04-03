// Basics of Object Oriented Programming

/*
   4.Write a CPP Program to Check given number is Super Prime number or not using function.
     (Super prime number is one whose all digits are prime and number is also prime)
*/

#include <iostream>
using namespace std;

int isSuperPrime(int n);

int main()
{
   int no;

   cout << "\nEnter a positive integer : ";
   cin >> no;

   switch (isSuperPrime(no))
   {
   case 0:
      cout << "NOT SUPERPRIME" << endl;
      break;

   case 1:
      cout << "Prime but NOT SUPERPRIME" << endl;
      break;

   case 2:
      cout << "SUPERPRIME" << endl;
      break;
   }

   return 0;
}

int isSuperPrime(int n)
{
   int dig;
   int i = 2;

   while (i < n / 2)
   {
      if (n % i == 0)
      {
         break;
      }

      i++;
   }

   if (i != n / 2)
   {
      return 0; // Not Prime
   }

   while (n > 0)
   {
      dig = n % 10;

      if (dig == 2 || dig == 3 || dig == 5 || dig == 7)
      {
         n /= 10;
      }
      else
      {
         break;
      }
   }

   if (n == 0)
   {
      return 2; // Super prime
   }

   return 1; // Prime
}
