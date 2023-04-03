//Namespace and Template

/*
   3. Create a class Employee in namespace Organization. Create functions as 
      setDetails(EmpID, Name, Salary) and getDetails().
      Write a program to call both the functions using object of Employee class.
*/

#include<iostream>
using namespace std;

namespace Organization
{
    class Employee
    {
        int EmpID;
        string Name;
        float Salary;

        public:
            void setDetails(int EmpID, string Name, float Salary)
            {
                this->EmpID=EmpID;
                this->Name=Name;
                this->Salary=Salary;
            }

            void getDetails()
            {
                cout<<"\n*** Employee Details ***"<<endl;

                cout<<"ID : "<<EmpID<<endl<<"Name : "<<Name<<endl<<"Salary : "
                    <<Salary<<endl;
            }

    };

}


int main()
{
    using namespace Organization;

    Employee emp;

    emp.setDetails(17, "Onkar Yemul", 75000.50);

    emp.getDetails();

    return 0;
}


