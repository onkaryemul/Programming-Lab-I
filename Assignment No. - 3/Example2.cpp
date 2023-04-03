//Inheritance and Operator Overloading

/*
  2.Create a class named Shape with a function that prints "This is a shape".
    Create another class named Polygon inheriting the Shape class with the 
    same function that prints "Polygon is a shape".Create two other classes
    named Rectangle and Triangle having the same function which prints 
    "Rectangle is a polygon" and "Triangle is a polygon" respectively.
    Again,make another class named Square having the same function which 
    prints "Square is a rectangle".
    Now,try calling the function by the object of each of these classes.
*/

#include<iostream>
using namespace std;

class Shape
{
   public:
       Shape(){}

       virtual void print()
       {
          cout<<"\nThis is a shape.";
       }         
       
};

class Polygon : public Shape
{
   public:
       Polygon(){}

       void print()
       {
          cout<<"\nPolygon is a shape.";
       }

};

class Rectangle : public Polygon
{
   public:
       Rectangle(){}

       void print()
       {
          cout<<"\nRectangle is a Polygon.";
       }

};

class Triangle : public Polygon
{
   public:
       Triangle(){}

       void print()
       {
          cout<<"\nTriangle is a Polygon.";
       }

}; 

class Square : public Rectangle
{
   public:
       Square(){}

       void print()
       {
          cout<<"\nSquare is a Rectangle."<<endl;
       }

};


int main()
{
   Shape S;
   Polygon P;
   Rectangle R;
   Triangle T;
   Square Sq;

   S.print();
   P.print();
   R.print();
   T.print();
   Sq.print();

   return 0;
}