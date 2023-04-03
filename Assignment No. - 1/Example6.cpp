// Basics of Object Oriented Programming

/*
   6.Write a program in CPP to swap 2 numbers without using any temporary variable.
*/

#include <iostream>
using namespace std;

int main()
{
   int a, b;

   cout << "\nEnter values of a and b : ";
   cin >> a >> b;

   cout << "\nBefore swapping : "
        << "a = " << a << ", b = " << b << endl;

   a = a + b;
   b = a - b;
   a = a - b;

   cout << "\nAfter swapping : "
        << "a = " << a << ", b = " << b << endl;

   return 0;
}
