//Inheritance and Operator Overloading

/*
  7.Create a class INTEGER that contains one float data member.Overload all
    the four arithmetic operators so that they operate on the objects of 
    INTEGER.
*/

#include<iostream>
using namespace std;

class INTEGER
{
    float data;

    public:
        INTEGER(){}

        INTEGER(float d)
        {
           data=d;
        }

        INTEGER operator+(INTEGER i1);

        INTEGER operator-(INTEGER i2);

        INTEGER operator*(INTEGER i3);

        INTEGER operator/(INTEGER i4);

        void display();

};

INTEGER INTEGER :: operator+(INTEGER i1)
{
    INTEGER temp;

    temp.data = data + i1.data;

    return (temp);
}

INTEGER INTEGER :: operator-(INTEGER i2)
{
    INTEGER temp;

    temp.data = data - i2.data;

    return temp;
}

INTEGER INTEGER :: operator*(INTEGER i3)
{
    INTEGER temp;

    temp.data = data * i3.data;

    return temp;
}

INTEGER INTEGER :: operator/(INTEGER i4)
{
    INTEGER temp;

    temp.data = data / i4.data;

    return (temp);
}

void INTEGER :: display()
{
    cout<<data<<endl;
}


int main()
{
    INTEGER i1,i2,i3,i4,i5,i6;

    i1=INTEGER(2.5);
    i2=INTEGER(3.1);

    i3=i1+i2;

    i4=i1-i2;

    i5=i1*i2;

    i6=i1/i2;

    cout<<" i1 = ";
    i1.display();

    cout<<" i2 = ";
    i2.display();

    cout<<" i1+i2 = ";
    i3.display();

    cout<<" i1-i2 = ";
    i4.display();

    cout<<" i1*i2 = ";
    i5.display();

    cout<<" i1/i2 = ";
    i6.display();

    return 0;
}


