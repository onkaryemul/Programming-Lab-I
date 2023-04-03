//Inheritance and Operator Overloading

/*
  3.An educational institution wishes to maintain a database of its employees.
    The database is divided into a number of classes whose hierarchical
    relationships are shown in below Fig.The figure also shows the minimum 
    information required for each class.Specify all the classes and define 
    functions to create the database and retrieve individual information
    as and when required.
*/

#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;

class staff
{
   public:
       int code;
       string name;

       void set_info(string n,int c)
       {
           name=n;
           code=c;
       }

};

class teacher : public staff
{
   protected:
       string sub;
       string publication;

   public:
       void set_details(string s,string p)
       {
           sub=s;
           publication=p;
       }

       void show()
       {
           cout<<"Name"<<setw(15)<<"Code"<<setw(19)<<"Subject"<<setw(25)
               <<"Publication"<<endl<<name<<setw(8)<<code<<setw(25)<<sub<<setw(22)
               <<publication<<endl;
       }

};

class officer : public staff
{
   string grade;

   public:
       void set_details(string g)
       {
           grade=g;
       }

       void show()
       {
           cout<<"Name"<<setw(19)<<"Code"<<setw(14)<<"Category "<<endl
               <<name<<setw(10)<<code<<setw(15)<<grade<<endl;
       }

};

class typist : public staff
{
   protected:
       float speed;

   public:
       void set_speed(float s)
       {
           speed=s;
       }
     
};

class regular : public typist
{
   protected:
       float wage;

   public:
       void set_wage(float w)
       {
           wage=w;
       }

       void show()
       {
           cout<<"Name"<<setw(18)<<"Code"<<setw(16)<<"Speed"<<setw(13)
               <<"Wage"<<endl<<name<<setw(10)<<code<<setw(15)<<speed
               <<setw(15)<<wage<<endl;
       }

};

class causal : public typist
{
   float wage;

   public:
       void set_wage(float w)
       {
          wage=w;
       }

       void show()
       {
          cout<<"Name"<<setw(18)<<"Code"<<setw(16)<<"Speed"<<setw(14)
              <<"Wage"<<endl<<name<<setw(10)<<code<<setw(15)<<speed
              <<setw(15)<<wage<<endl;
       }

};


int main()
{
    teacher t;
    t.set_info("Onkar Yemul",420);
    t.set_details("Programming with C++","Tata McGraw Hill");

    officer o;
    o.set_info("Datta Gangji",222);
    o.set_details("First class");

    regular rt;
    rt.set_info("Jay Shirgupe",333);
    rt.set_speed(85.5);
    rt.set_wage(15000);

    causal ct;
    ct.set_info("Pranav Kadam",333);
    ct.set_speed(78.9);
    ct.set_wage(10000);

    cout<<"\n*** About teacher *** "<<endl;
    t.show();

    cout<<"\n*** About officer *** "<<endl;
    o.show();
 
    cout<<"\n*** About regular typist *** "<<endl;
    rt.show();

    cout<<"\n*** About causal typist *** "<<endl;
    ct.show();

    return 0;
}




