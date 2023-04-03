//Exception Handling and Virtual Functions

/*
   6. Write a main program that calls a deeply nested function containing an 
      exception. Incorporate necessary exception handling mechanism.
*/

#include<iostream>
using namespace std;

long int square(int i)
{
    return i*i;
}

long int sum(int n)
{
    long int s;
    s=0;

    for(int i=1;i<=n;i++)
    {
        s+=square(i);
    }

    return s;
}

void display(int m)
{
    try
    {
        if(m<0)
        {
           throw m;
        }
        else
        {
           
           cout<<"\nThe sum of squares of first "<< m <<" natural numbers is " 
               <<sum(m)<<endl;
        }

    }
    catch(int n)
    {
        cout<<"\nCaught an exception \n"<<endl;
    }
    
}


int main()
{
    int n;

    cout<<"\nEnter a positive number : ";
    cin>>n;

    display(n);
    
    return 0;
}


