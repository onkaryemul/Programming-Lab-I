//Namespace and Template

/*
   4. Write C++ Program to display largest among two numbers using function 
      templates.
*/

#include<iostream>
using namespace std;

//template function
template <class T>
T Large(T n1, T n2)
{
    return (n1 > n2)? n1 : n2;
}


int main()
{   
    int i1,i2;
    float f1,f2;
    char c1,c2;

    cout<<"\nEnter two integers : "<<endl;
    cin>>i1>>i2;
    cout<< Large(i1,i2) << " is larger."<<endl;

    cout<<"\nEnter two floating-point numbers : "<<endl;
    cin>>f1>>f2;
    cout<< Large(f1,f2) <<" is larger."<<endl;

    cout<<"\nEnter two characters : "<<endl;
    cin>>c1>>c2;
    cout<< Large(c1,c2) <<" has larger ASCII value."<<endl;

    return 0;
}



