//Inheritance and Operator Overloading

/*
   4.The database created in above example does not include educational
     information of the staff.It has been decided to add this information 
     to teachers and officers (and not for typists) which will help the
     management in decision making with regard to training,promotion,etc.
     Add another data class called education that holds two pieces of 
     educational information,namely,highest qualification in general 
     education and highest professional qualification.This class should be
     inherited by the classes teacher and officer.Modify the above program
     to incorporate these additions.
*/

#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;

class staff
{
    protected:
        int code;
         string name;

    public:
        void set_info(string n,int c)
        {
            name=n;
            code=c;
        }

};

class education : public staff
{
    protected:
        string quali;

    public:
        void set_qualification(string q)
        {
            quali=q;
        }

};

class teacher : public education
{
    protected:
        string sub;
        string publication;

    public:
        void set_details(string s,string p)
        {
           sub=s;
           publication=p;
        }

        void show()
        {
           cout<<"Name"<<setw(16)<<"Code"<<setw(15)
               <<"Subject"<<setw(24)<<"Publication"
               <<setw(25)<<"Qualification"<<endl
               <<name<<setw(8)<<code<<setw(25)
               <<sub<<setw(18)<<publication<<setw(25)<<quali<<endl;
        }

};

class officer : public education
{
    string grade;

    public:
        void set_details(string g)
        {
            grade=g;
        }

        void show()
        {
            cout<<"Name"<<setw(19)<<"Code"<<setw(13)<<"Category"
                <<setw(22)<<"Qualification"<<endl<<name<<setw(10)
                <<code<<setw(15)<<grade<<setw(25)<<quali<<endl<<endl;
        }

};

class typist : public staff
{
    protected:
        float speed;
    
    public:
        void set_speed(float s)
        {
            speed=s; 
        }
        
};

class regular : public typist
{
    protected:
        float wage;

    public:
        void set_wage(float w)
        {
            wage=w;
        }

        void show()
        {
            cout<<"Name"<<setw(19)<<"Code"<<setw(15)<<"Speed"
                <<setw(13)<<"Wage"<<endl<<name<<setw(10)<<code
                <<setw(15)<<speed<<setw(15)<<wage<<endl<<endl;
        }

};

class causal : public typist
{
    float wage;

    public:
        void set_wage(float w)
        {
           wage=w;
        }

        void show()
        {
           cout<<"Name"<<setw(19)<<"Code"<<setw(15)<<"Speed"
               <<setw(13)<<"Wage"<<endl<<name<<setw(10)<<code
               <<setw(15)<<speed<<setw(15)<<wage<<endl<<endl;
        }

};


int main()
{
    teacher t;
    t.set_info("Onkar Yemul",420);
    t.set_details("Programming with C++","Tata McGraw Hill");
    t.set_qualification("PHD from Programming");

    officer o;
    o.set_info("Datta Gangji",222);
    o.set_details("First Class");
    o.set_qualification("2 Years Experienced");

    regular rt;
    rt.set_info("Jay Shirgupe",333);
    rt.set_speed(85.5);
    rt.set_wage(15000);

    causal ct;
    ct.set_info("Pranav Kadam",333);
    ct.set_speed(78.9);
    ct.set_wage(10000);

    cout<<"\n*** About teacher *** "<<endl;
    t.show();

    cout<<"\n*** About officer *** "<<endl;
    o.show();

    cout<<"\n*** About regular typist *** "<<endl;
    rt.show();

    cout<<"\n*** About causal typist *** "<<endl;
    ct.show();

    return 0;
}

