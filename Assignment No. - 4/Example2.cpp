//Namespace and Template

/*
   2. Create two namespaces as Outer and Inner, add any one variable, any one function
      in both the namespaces.
      Write a program to display members of both Outer and Inner namespcae.
*/

#include<iostream>
using namespace std;

namespace Outer
{
    string out = "4:00 pm";

    void outtime()
    {
        cout<<"\nOut at "<<out<<endl;
    }

}

namespace Inner
{
    string in = "9:00 am";

    void intime()
    {
        cout<<"\nIn at "<<in<<endl;
    }

}


int main()
{   
    Inner::intime();

    Outer::outtime();
    
    return 0;
}



