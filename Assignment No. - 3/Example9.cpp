//Inheritance and Operator Overloading

/*
  9.Define a class String.Use overloaded == operator to compare two strings.
*/

#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

class String
{
    char str[1000];

    public:
        void input()
        {
           cin.get(str,1000);
        }

        int operator==(String s2);
};

int String :: operator==(String s2)
{
    int t=strcmp(str,s2.str);

    if(t==0)
    {
        t=1;
    }
    else
    {
        t=0;
    }

    return t;
}


int main()
{
    char str1[1000],str2[1000];
    
    String s1,s2;

    cout<<"\n Enter 1st string : ";
    s1.input();

    getchar();

    cout<<"\n Enter 2nd string : ";
    s2.input();

    if(s1==s2)
    {
       cout<<"\n Two strings are equal "<<endl;
    }
    else
    {
       cout<<"\n Two strings are not equal "<<endl;
    }

    return 0;
}



