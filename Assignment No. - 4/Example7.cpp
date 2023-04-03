//Namespace and Template

/*
  7. Write C++ Program using class template to perform searching operation on 
     generic array.
*/

#include<iostream>
using namespace std;

#define MAX_SIZE 5

//Template Declaration
template <class T>

//Generic Template Class for search
class TClassSearch
{
    T arr[MAX_SIZE]; // Generic array
    T element;  // Generic element to search

    public:
       TClassSearch(){} //Default Constructor

       void input()
       {
           int i=0;

           for(i=0 ; i < MAX_SIZE ; i++)
           {
               cin>>arr[i];
           }

           cout<<"\nEnter Element to Search : ";
           cin>>element;

       }

       void search()
       {
           int i;

           cout<<"\nArray Data : ";

           for(i=0 ; i < MAX_SIZE ; i++)
           {
               cout<<"\t"<<arr[i];
           }

           for(i=0 ; i < MAX_SIZE ; i++)
           {
               if(arr[i] == element)
               {
                   cout<<"\nSearch Element : "<<element<<
                       " is Found at Position : "<<i+1<<endl;
                      
                   break;
               }
           }

           if(i == MAX_SIZE)
           {
               cout<<"\nSearch Element : "<<element<<" : Not Found\n";
           }
       }

};


int main()
{
    TClassSearch <int> iMax = TClassSearch <int>();
    TClassSearch <float> fMax = TClassSearch <float>();

    cout<<"\nClass Template to perform searching operation on generic array : "<<endl;

    cout<<"\nEnter "<<MAX_SIZE<<" Elements for searching in integer array : "<<endl;
    iMax.input();
    iMax.search();

    cout<<"\nEnter "<<MAX_SIZE<<" Elements for searching in float array : "<<endl;
    fMax.input();
    fMax.search();

    return 0;
}



