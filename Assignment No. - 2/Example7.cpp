//Constructors,Destructors and Static members

/*
   7.Write a function power to raise a number m to a power n. The function takes
     a double value for m and int value for n and returns the result correctly.
     Use a default value of 2 for n to make the function to calculate squares when
     this argument is omitted.Write a function that performs the operation as above
     but asks as an int value for m.Both the functions should have the same name.
     Write a main that calls both the functions.Use the concept of function
     overloading.
*/

#include<iostream>
using namespace std;

/* 
  a function called power() that takes a double value for m and an int value for n,
  and returns the result as a double value.

  Use a default argument of 2 for n,so that if this argument is omitted,the number
  m will be squared.
*/

double power(double m,int n=2)
{
    double result=1;

    for(int i=1;i<=n;i++)
    {
       result*=m;
    }

    return result;
}


int main()
{
    double m;
    int n;
    double result=0;

  //Write a main() function that gets values from the user to test this function
    cout<<"\nEnter value of m : ";
    cin>>m;

    cout<<"\nEnter value of n : ";
    cin>>n;

    if(n<0)
    {
        result=power(m);
        cout<<m<<"^2 = "<<result<<"\n\n";
    }
    else
    {
        result=power(m,n);
        cout<<m<<"^"<<n<<" = "<<result<<"\n\n";
    }

    return 0;
}