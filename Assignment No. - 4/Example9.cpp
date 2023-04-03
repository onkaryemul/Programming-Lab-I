//Namespace and Template

/*
   9. Write C++ Program for creating a class Numbers which has two generic type
      variable x and y; create two objects NUM1 and NUM2 which will accept
      integer and float type data types.
*/

#include<iostream>
using namespace std;

template <class T1, class T2>
class Numbers
{
    T1 x;
    T2 y;

    public:
       Numbers(T1 n1, T2 n2)
       {
           x=n1;
           y=n2;
       }

       void display()
       {
           cout<<"\nValue of x = "<<x<<" and y = "<<y<<endl;
       }

};


int main()
{ 
    Numbers<int,float> NUM1(10,20.34);
    Numbers<int,float> NUM2(35,53.47);
    
    cout<<"\nFor NUM1 object : ";
    NUM1.display();

    cout<<"\nFor NUM2 object : ";
    NUM2.display();

    return 0;
}



