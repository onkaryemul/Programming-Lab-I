//Inheritance and Operator Overloading

/*
  6.Design a class Polar which describes a point in the plane using polar
    coordinates radius and angle.A point in polar coordinates is shown in 
    below Fig. Use the overloaded + operator to add two objects of Polar.
    Note that we cannot add polar values of two points directly.This 
    requires first the conversion of points into rectangular co-ordinates,
    then adding the corresponding rectangular co-ordinates and finally
    convening the result back into polar co-ordinates.
    You need to use the following trigonometric formulae:
    x=r*cos(a);
    y=r*sin(a);
    a=a tan(y/x); //arc tangent
    r=sqrt(x*x + y*y);
*/

#include<iostream>
#include<math.h>
#define pi 3.1416
using namespace std;

class polar
{
    float r;
    float a;
    float x;
    float y;

    public:
        polar(){}

        polar(float r1,float a1);

        polar operator+(polar r1);

        void display(void);

};

polar :: polar(float r1,float a1)
{
    r=r1;
    a=a1*(pi/180);
    x=r*cos(a);
    y=r*sin(a);
}

polar polar :: operator+(polar r1)
{
    polar R;

    R.x = x + r1.x;
    R.y = y + r1.y;

    R.r = sqrt(R.x*R.x + R.y*R.y);
    R.a=atan(R.y/R.x);

    return R;
}

void polar :: display()
{
    cout<<"radius = "<<r<<"\n angle = "<<a*(180/pi)<<endl;
}


int main()
{
    polar p1,p2,p3;

    float r,a;

    cout<<"Enter radius and angle : ";
    cin>>r>>a;

    p1=polar(r,a);
    p2=polar(8,45);
    
    p3=p1+p2;

    cout<<" p1 : \n";
    p1.display();

    cout<<" p2 : \n";
    p2.display();

    cout<<" p3 : \n";
    p3.display();

    return 0;
}


