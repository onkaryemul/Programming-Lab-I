//Exception Handling and Virtual Functions

/*
   4. Write a program to demonstrate the concept of rethrowing an exception.
*/

#include<iostream>
using namespace std;

void division(int a, int b)
{
    try
    {
       if(b==0)
       {
          throw b;
       }
       else
       {
          cout<<"\na/b = "<<(float)a/b<<endl;
       }

    }
    catch(int b)
    { 
       cout<<"\nCaught an exception as first throwing inside division() "<<endl;

       throw b;  
    }
    
}

int main()
{
    int a,b;

    cout<<"\nEnter the value of a & b : ";
    cin>>a>>b;

    try
    {
       division(a,b);
    }
    catch(int b)
    { 
        cout<<"\nCaught an exception as rethrowing inside main() \n"<<endl; 
    }
    
    return 0;
}



