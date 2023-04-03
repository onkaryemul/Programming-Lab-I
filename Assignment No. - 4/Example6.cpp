//Namespace and Template

/*
   6. Write C++ Program which will demonstrate use of function template overloading.
*/

#include<iostream>
using namespace std;

template <class X> 
void fun(X a)
{
    cout<<"\nValue of a is : "<<a<<endl;
}


template <class X, class Y>
void fun(X b, Y c)
{
    cout<<"\nValue of b is : "<<b<<endl;
    cout<<"\nValue of c is : "<<c<<endl;
}


int main()
{   
    fun(10.23);

    fun(20,30.5);

    return 0;
}
