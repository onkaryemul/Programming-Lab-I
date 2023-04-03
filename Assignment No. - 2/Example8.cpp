//Constructors,Destructors and Static members

/*
  8.Write a program to calculate result of student based on his/her marks.
    Display the result.Use concept of function overloading.(Result of Internal
    exam,Mid sem exam,End sem exam and Final consolidated result) function name
    should be result.
*/

#include<iostream>
using namespace std;

class Result
{
   int ISE;
   float MSE;
   double ESE;
   double Final;

   public:
       void result(int ise1,int ise2)
       {          
          this->ISE=ise1+ise2; 
       }

       void result(float mse)
       {
          this->MSE=mse;
       }

       void result(double ese)
       {
          this->ESE=ese;
       }

       void result()
       {
          this->Final=(double)ISE+(double)MSE+ESE;

          cout<<"Total Marks : "<<Final<<endl;
       }

       
};

int main()
{ 
   int ise1,ise2;
   float mse;
   double ese;

   cout<<"\nEnter result of Internal Exam(Out of 20)\nEach ISE is of 10 Marks"<<endl;
   cout<<"ISE 1 : ";
   cin>>ise1;
   cout<<"ISE 2 : ";
   cin>>ise2;

   cout<<"Enter result of Midsemester Exam(Out of 30) : ";
   cin>>mse;

   cout<<"Enter result of End Sem Exam(Out of 50) : ";
   cin>>ese;

   Result r;

   r.result(ise1,ise2);
   r.result(mse);
   r.result(ese);
   
   cout<<"\n*** Final Consolidated Result(Out of 100) ***"<<endl;
   r.result();

   return 0;
}
