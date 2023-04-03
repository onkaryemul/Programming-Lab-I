// Basics of Object Oriented Programming

/*
   3.Write a program to read 3 values a,b and c and calculate value of X as
         X=a*b-c/d
         Where d=a+b
*/

#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    int X;

    cout << "\nEnter values of a,b and c: " << endl;
    cin >> a >> b >> c;

    d = a + b;

    X = a * b - c / d;

    cout << "Value of X : " << X << endl;

    return 0;
}