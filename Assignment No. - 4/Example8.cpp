//Namespace and Template

/*
   8. Write C++ Program to add,substract,multiply and divide two numbers using
      class template.
*/

#include<iostream>
using namespace std;

template <class T>
class Calculator
{
    private:
         T num1, num2;

    public:
        Calculator(T n1, T n2)
        {
            num1 = n1;
            num2 = n2;
        }

        void displayResult()
        {
            cout<<"\nNumbers are : "<< num1 <<" and "<< num2 <<endl;
            cout<<"Addition is : "<< add() <<endl;
            cout<<"Substraction is : "<< substract() <<endl;
            cout<<"Product is : "<< multiply() <<endl;
            cout<<"Division is : "<< divide() <<endl;   
        }

        T add()
        {
            return num1 + num2;
        }

        T substract()
        {
            return num1 - num2;
        }

        T multiply()
        {
            return num1 * num2;
        }

        T divide()
        {
            return num1 / num2;
        }

};


int main()
{ 
    Calculator<int> intCalc(2, 1);
    Calculator<float> floatCalc(2.4, 1.2);

    cout<<"\n*** Int results ***"<<endl;
    intCalc.displayResult();

    cout<<"\n*** Float results ***"<<endl;
    floatCalc.displayResult();

    return 0;
}


