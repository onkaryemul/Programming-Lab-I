// Basics of Object Oriented Programming

/*
 1.Create an Employee class to enter and display information of employee such as EmpID, Name,
     Address,Designation and Salary of last five years and calculate average salary.
     (create five objects to enter and display data).
*/

#include <iostream>
#include <string.h>
using namespace std;

class Employee
{
    int id;
    char nm[20];
    char add[50];
    char desig[20];
    int salary[5];
    int total = 0;
    float avgSalary = 0;

public:
    void set_employee()
    {
        cout << "\nEnter Employee ID: ";
        cin >> id;

        getchar();
        cout << "Enter Employee Name: ";
        cin.get(nm, 20);

        getchar();
        cout << "Enter Employee Address: ";
        cin.get(add, 50);

        getchar();
        cout << "Enter Employee Designation: ";
        cin.get(desig, 20);

        getchar();
        cout << "Enter Employee last 5 Years Salary: ";
        for (int i = 0; i < 5; i++)
        {
            cin >> salary[i];

            total += salary[i];
        }

        avgSalary = (total) / 5.0;
    }

    void display_employee()
    {
        cout << "\nEmployee Details" << endl;
        cout << "ID : " << id << endl;
        cout << "Name : " << nm << endl;
        cout << "Address : " << add << endl;
        cout << "Designation : " << desig << endl;
        cout << "Last 5 Years Salary : " << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << salary[i] << " ";
        }

        cout << "\nAverage Salary : " << avgSalary << endl;
    }
};

int main()
{
    Employee emp1, emp2, emp3, emp4, emp5;
    emp1.set_employee();
    emp2.set_employee();
    emp3.set_employee();
    emp4.set_employee();
    emp5.set_employee();

    emp1.display_employee();
    emp2.display_employee();
    emp3.display_employee();
    emp4.display_employee();
    emp5.display_employee();

    return 0;
}
