//Exception Handling and Virtual Functions

/*
   1. Write a program containing a possible exception. Use a try block to throw it
      and a catch block to handle it properly.
*/

#include<iostream>
#include<math.h>
#define pi 3.1416
using namespace std;

void power_factor(float a)
{
   if(a>1 || a<-1)
   {
      throw(a);
   }
   else
   {
      cout<<"\nVoltage(V) is lagging from current(I) by "<<acos(a)*180/pi<<" degree\n"<<endl;
   }

}


int main()
{
   float a;

   try
   {
      cout<<"\nEnter power factor : ";
      cin>>a;

      power_factor(a);
   }
   catch(float b)
   {
      cout<<"\nCaught an exception \n"<<endl;
   }
   
   return 0;
}


