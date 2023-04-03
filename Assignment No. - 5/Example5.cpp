//Exception Handling and Virtual Functions

/* 
   5. Write a program with the following:
     (a) A function to read two double type numbers from keyboard
     (b) A function to calculate the division of these two numbers.
     (c) A try block to throw an exception when a wrong type of data is keyed in
     (d) A try block to detect and throw an exception if the condition "divide-by-zero"
         occurs
     (e) Appropriate catch block to handle the exceptions thrown.
*/

#include<iostream>
using namespace std;

class Program
{
    double a;
    double b;

    public:
        void input(double x,double y)
        {
           a=x;
           b=y;
        }

        void division();
};

void Program::division()
{
    try
    {
       if(b==0)
       {
          throw b;
       }
       else
       {
          cout<<"\na/b = "<<a/b<<endl;
       }

    }
    catch(double b)
    {
        cout<<"\nAn exception is caught! "<<endl<<"Error : division-by-zero !!! \n"<<endl;
    }
    
}


int main()
{
    double d;

    Program pro;

    double m1,n1;

    cout<<"\nEnter two numbers : ";
    cin>>m1>>n1;

    try
    {
       if(sizeof(d) != sizeof(m1) || sizeof(d) != sizeof(n1))
       {
           throw n1;
       }
       else
       {
           pro.input(m1,n1);
           pro.division();
       }

    }
    catch(double n1)
    {
       cout<<"\nCaught an exception \n"<<endl;
    }
    
    return 0;
}



