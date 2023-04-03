//Constructors,Destructors and Static members

/*
   6.Define a class String that could work as a user-defined string type.
     Include constructors that will enable us to create an uninitialized 
     string.

     String s1;
     //string with length 0 and also to initialize an object with a string
       construct at the time of creation like

     String s2("Well done!");
     //Include a function that adds two strings to make a third string.
       Note that the Statement 
       s2=s1;
       will be perfectly reasonable expression to copy one string to another.

     Write a complete program to test your class to see that it does the 
     following tasks:
     (a) Creates uninitialized string objects.
     (b) Creates objects with string constants.
     (c) Concatenates two strings properly.
     (d) Displays a desired string object.

*/

#include<iostream>
#include<string>
using namespace std;

class String
{
   private:
       string inputString;

   public:
       String(){}
       
       String(string inputString)
       {
          this->inputString=inputString;
       }

       void appendOtherString(const String& otherString)
       {
          inputString.append(otherString.inputString);
       }

       string getString()
       {
          return inputString;
       }
          
};


int main()
{
    //Create uninitialized string objects
    String str1;
    String str2;

    //Create objects with string constants
    String string1("Well done ");
    cout<<"String 1 : "<<string1.getString()<<"\n\n";

    String string2("Badly done");

    //Concatenate two strings
    string1.appendOtherString(string2);
   
    //Display desired strings
    cout<<"String 2 : "<<string2.getString()<<"\n\n";

    cout<<"String 1 append String 2 : "<<string1.getString()<<"\n\n";

    return 0;
}
