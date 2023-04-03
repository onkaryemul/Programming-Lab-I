//Constructors,Destructors and Static members

/*
   4.Create class SportsTeam (Name,NoOfPlayers,Average_age).Make a Static data
     member as ObjectCount.Create 3 Objects of SportsTeam, Insert and Display
     all information of 3 SportsTeam and Display count of object.
*/

#include<iostream>
#include<string.h>
using namespace std;

class SportsTeam
{
    private:
        string Name;
        int NoOfPlayers;
        int Average_age;
        static int ObjectCount;

    public:
        SportsTeam(string Name,int NoOfPlayers,int Average_age)
        {
            this->Name=Name;
            this->NoOfPlayers=NoOfPlayers;
            this->Average_age=Average_age;

            ObjectCount++;           
        }

        void display()
        {
            cout<<"\n***Details of SportsTeam***"<<endl;
            cout<<"SportsTeam Name : "<<Name<<endl;
            cout<<"Number of Players = "<<NoOfPlayers<<endl;
            cout<<"Average age of Player = "<<Average_age<<endl;            
        }

        static int Count()
        {
            return ObjectCount;
        }

};

int SportsTeam::ObjectCount=0;

int main()
{
    string Name[3];
    int NoOfPlayers[3];
    int Average_age[3];

    for(int i=0;i<3;i++)
    {
        cout<<"\n\nEnter SportsTeam "<<i+1<<" Details"<<endl;

        cout<<"Enter SportsTeam Name : ";
        cin>>Name[i];

        cout<<"Enter Number Of Players : ";
        cin>>NoOfPlayers[i];

        cout<<"Enter Average age of Player : ";
        cin>>Average_age[i];
    }

    SportsTeam s1(Name[0],NoOfPlayers[0],Average_age[0]);
    
    SportsTeam s2(Name[1],NoOfPlayers[1],Average_age[1]);

    SportsTeam s3(Name[2],NoOfPlayers[2],Average_age[2]);

    s1.display();
    s2.display();
    s3.display();

    cout<<"\nTotal Number of Objects = "<< SportsTeam::Count() <<endl;

    return 0;
}