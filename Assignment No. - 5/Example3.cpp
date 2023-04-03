//Exception Handling and Virtual Functions

/*
  3. Write a program which uses catch(...) handler.
*/

#include<iostream>
#define size 5
using namespace std;

void multiple_catch(int n)
{
    float v[size];

    try
    {
       if(n>size)
       {
          throw(n);
       }
       else if(n<=0)
       {
          throw(0.01);
       }
       else
       {
          cout<<"\nEnter "<<n<<" elements one by one "<<endl;

          for(int i=0;i<n;i++)
          {
             cin>>v[i];
          }

          cout<<"\nNow contents of v["<<n<<"] : "<<endl;

          for(int i=0;i<n;i++)
          {
              cout<<v[i]<<"  ";
          }
          
          cout<<endl;
       }
      
    }
    catch(...)
    {
       cout<<"\nAn exception is detected \n"<<endl;
    }
    
}

int main()
{
    int s;

    cout<<"\nHow many elements do you want to enter ? : ";
    cin>>s;

    multiple_catch(s);

    return 0;
}



