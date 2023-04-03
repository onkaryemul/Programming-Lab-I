//Exception Handling and Virtual Functions

/*
   8. Create a base class called shape. Use this class to store two double type values
      that could be used to compute the area of figures. Derive two specific classes
      called triangle and rectangle from the base shape. Add to the base class, a
      member function get_data() to initialize base class data members and another 
      member function display_area() to compute and display the area of figures.
      Make display_area() as a virtual function and redefine this function in the 
      derived classes to suit their requirements.
          Using these three classes,design a program that will accept dimensions of a
      triangle or a rectangle interactively, and display the area. Remember the two 
      values given as input will be treated as lengths of two sides in the case of 
      rectangles, and as base and height in the case of triangles, and used as follows:
      Area of rectangle = x * y
      Area of triangle = 1/2 * x * y    
        
*/

#include<iostream>
#include<iomanip>
using namespace std;

class shape
{
    public:
       double x,y;
    
    public:
       void get_data()
       {
           cin >> x >> y;
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
           
           a = x * y;

           cout<<"\nArea of rectangle = "<<a<<endl;
       }

};


int main()
{
    shape *s[2];
    
    triangle t;
    s[0]=&t;

    rectangle r;
    s[1]=&r;

    cout<<"\nEnter the value of x and y for triangle : ";
    s[0]->get_data();

    cout<<"\nEnter the value of x and y for rectangle : ";
    s[1]->get_data();

    s[0]->display_area();
    s[1]->display_area();
    
    return 0;
}



