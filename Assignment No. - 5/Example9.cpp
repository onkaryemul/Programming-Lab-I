//Exception Handling and Virtual Functions

/*
   9. Extend the above program to display the area of circles. This requires addition
      of a new derived class 'circle' that computes the area of a circle. Remember,
      for a circle we need only one value, its radius, but the get_data() function 
      in the base class requires two values to be passed. (Hint: Make the second 
      argument of get_data() function as a default one with zero value.)

*/

#include<iostream>
#include<iomanip>
using namespace std;

#define pi 3.1416

class shape
{
    public:
       double x,y;

    public:
       void get_data(double a, double b)
       {
           x=a;
           y=b;
       }
       
       double get_x()
       {
           return x;
       }

       double get_y()
       {
           return y;
       }

       virtual void display_area(){}

};


class triangle : public shape
{
    public:
       void display_area()
       {
           double a;

           a = (x*y)/2;

           cout<<"\nArea of triangle = "<<a<<endl;
       }

};


class rectangle : public shape
{
    public:
       void display_area()
       {
           double a;

           a = x*y;

           cout<<"\nArea of rectangle = "<<a<<endl;
       }

};

class circle : public shape
{
    public:
       void display_area()
       {
           double a;

           a = pi * x * x;

           cout<<"\nArea of circle = "<<a<<endl;
       }
        
};


int main()
{
    shape *s[3];

    triangle t;
    s[0]=&t;

    rectangle r;
    s[1]=&r;

    circle c;
    s[2]=&c;

    double x,y;
    double rd;

    cout<<"\nEnter the value of x and y for triangle : ";
    cin>>x>>y;
    s[0]->get_data(x,y);

    cout<<"\nEnter the value of x and y for rectangle : ";
    cin>>x>>y;
    s[1]->get_data(x,y);

    cout<<"\nEnter the radius of circle : ";
    cin>>rd;
    s[2]->get_data(rd,0);

    cout<<endl<<endl;

    s[0]->display_area();
    s[1]->display_area();
    s[2]->display_area();
    
    return 0;
}

