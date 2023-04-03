// Constructors,Destructors and Static members

/*
  3.With help of copy constructor calculate
    a. Area of Circle
    b. Area of Triangle
    c. Area of Square
*/

#include <iostream>
using namespace std;

class Circle
{
   private:
       int radius;
       float area;

   public:
       //Parameterized Constructor
       Circle(int radius)
       {
          this->radius = radius;
       }

       // Copy Constructor
       Circle(Circle &obj)
       {
          this->radius = obj.radius;
          this->area = 3.14 * radius * radius;
       }

       float get_area()
       {
          return area;
       }
};


class Triangle
{
   private:
      int base;
      int height;
      float area;

   public:
       // Parameterized Constructor
       Triangle(int base, int height)
       {
          this->base = base;
          this->height = height;
       }

       // Copy Constructor
       Triangle(Triangle &obj)
       {
          this->base = obj.base;
          this->height = obj.height;
          this->area = (base * height) / 2.0;
       }

       float get_area()
       {
          return area;
       }
};


class Square
{
    private:
        int side;
        float area;

    public:
        // Parameterized Constructor
        Square(int side)
        {
            this->side=side;
        }

        // Copy Constructor
        Square(Square &obj)
        {
            this->side=obj.side;
            this->area=side*side;
        }

        float get_area()
        {
            return area;
        }
};


int main()
{
  // a. Area of Circle
  int radius;

  cout << "\nEnter radius of Circle : ";
  cin >> radius;

  Circle c(radius);

  Circle c1(c);

  cout << "Result: Area of Circle = " << c1.get_area() << endl;

  // b. Area of Triangle
  int base;
  int height;

  cout << "\nEnter Base of Triangle : ";
  cin >> base;

  cout << "Enter Height of Triangle : ";
  cin >> height;

  Triangle t(base, height);

  Triangle t1(t);

  cout << "Result: Area of Triangle = " << t1.get_area() << endl;

  // c. Area of Square
  int side;

  cout<<"\nEnter Side of the Square : ";
  cin>>side;

  Square s(side);

  Square s1(s);

  cout<<"Result: Area of Square = "<< s1.get_area() <<endl;

  return 0;
}
