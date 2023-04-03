//Constructors,Destructors and Static members

/*
   5.Calculate area of Box(Length,Breadth,Height).Consider Height as Static
     member (Need to initialize).Use static member function getHeight() which
     will return value of Height.Create function Area() which will calculate
     area of Box.Use parameterized constructor to initialize data (insert data 
     from keyboard).Create two objects.
*/

#include<iostream>
using namespace std;

class Box
{
   private:
       float Length;
       float Breadth;
       float area;
       static float Height;
       
   public:
       
       //Default Constructor
       Box()
       {
          area=0;
       }

       //Parameterized Constructor
       Box(float length,float breadth)
       {
           this->Length=length;
           this->Breadth=breadth;
       }

       //Static member function getHeight()
       static float getHeight()
       {
           return Height;
       }

       float Area()
       {
           area = 2*((Length*Breadth) + (Breadth*getHeight()) + (getHeight()*Length));

           return area;
       }
       
};

float Box::Height=5;


int main()
{
   float length,length1;
   float breadth,breadth1;

   cout<<"\n\nEnter Dimensions of the Box1(Cuboid):"<<endl;

   cout<<"Length : ";
   cin>>length;

   cout<<"Breadth : ";
   cin>>breadth;

   Box B1(length,breadth);

   cout<<"\n\nEnter Dimensions of the Box2(Cuboid):"<<endl;

   cout<<"Length : ";
   cin>>length1;

   cout<<"Breadth : ";
   cin>>breadth1;

   Box B2(length1,breadth1);
   
   cout<<"\nSurface area of Box1 = "<<B1.Area()<<endl;
   cout<<"\nSurface area of Box2 = "<<B2.Area()<<endl;

   return 0;
}


