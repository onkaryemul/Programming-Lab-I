//Namespace and Template

/*
   1. Create two namespaces as NMS1 and NMS2,define variable 'a' and function seta()
      and geta() in NMS1 and define variable 'b' and function setb() and getb() in 
      NMS2.Write a program to
      a. Assign and display data without using keyword.
      b. Assign and display data with using keyword.
*/

#include<iostream>
using namespace std;

namespace NMS1
{
    int a;

    void seta()
    {
        cout<<"\nEnter the value of a : ";
        cin>>a;
    }

    void geta()
    {
        cout<<"\na = "<<a<<endl;
    }

}

namespace NMS2
{
    int b;

    void setb()
    {
        cout<<"\nEnter the value of b : ";
        cin>>b;
    }

    void getb()
    {
        cout<<"\nb = "<<b<<endl;
    }

}


int main()
{
    //Without using Keyword
    cout<<"\n*** Assign and display data without using keyword ***\n";
    NMS1::seta();
    NMS1::geta();
    NMS2::setb();
    NMS2::getb();

    //With using Keyword
    cout<<"\n*** Assign and display data with using keyword ***\n";
    using namespace NMS1;
    seta();
    geta();

    using namespace NMS2;
    setb();
    getb();

    return 0;
}


