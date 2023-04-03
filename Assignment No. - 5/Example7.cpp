//Exception Handling and Virtual Functions

/*
  7. Write a program for user defined exception for
    (a) Checking Temperature (if temp reaches certain threshold throw exception)
    (b) Validate age (if age is greater than some value)
*/

#include<iostream>
#include<exception>
using namespace std;

class TemperatureException : public exception
{
    public:
       const char* what() const throw()
       {
           return "\nToo Hot Outside!\n";
       }

};


class AgeException : public exception
{
    public:
       const char* what() const throw()
       {
           return "\nYour age is greater than 60 ! So,you should not work now! \n";
       }

};


int main()
{
    float temp;
    int age;

    try
    {
        cout<<"\nEnter Temperature(in Fahrenheit) : ";
        cin>>temp;

        if(temp>100)
        {
            TemperatureException t;
            throw t;
        }
        else
        {
            cout<<"\nYou can go Outside\n";
        }

    }
    catch(TemperatureException & t)
    {
        cout<<t.what();
    }
    

    try
    {
        cout<<"\nEnter age : ";
        cin>>age;

        if(age>60)
        {
            AgeException a;
            throw a;
        }
        else
        {
            cout<<"\nYou can work\n";
        }
    } 
    catch(AgeException & a)
    {
        cout<<a.what();
    }
    
    return 0;
}



