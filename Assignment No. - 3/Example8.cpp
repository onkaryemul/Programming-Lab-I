//Inheritance and Operator Overloading

/*
  8.Create a class MAT of type m*n.Define all possible matrix operations
    for MAT type objects.
*/

#include<iostream>
#include<iomanip>
using namespace std;

class MAT
{
    float **m;
    int rs,cs;

    public:
        MAT(){}

        void creat(int r,int c);

        friend istream & operator>>(istream &,MAT &);

        friend ostream & operator<<(ostream &,MAT &);

        MAT operator+(MAT m2);

        MAT operator-(MAT m2);

        MAT operator*(MAT m2);

};

void MAT :: creat(int r,int c)
{
    rs=r;

    cs=c;

    m=new float *[r];

    for(int i=0;i<r;i++)
    {
       m[i]=new float;
    }

}

istream & operator>>(istream &din,MAT &a)
{
    int r,c;

    r=a.rs;
    c=a.cs;

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            din>>a.m[i][j];
        }
    }

    return (din);
}

ostream & operator<<(ostream &dout,MAT &a)
{
    int r,c;

    r=a.rs;
    c=a.cs;

    for(int i=0;i<r;i++)
    {
       for(int j=0;j<c;j++)
       {
          dout<<setw(5)<<a.m[i][j];
       }
       dout<<"\n";
    }

    return (dout);
}

MAT MAT :: operator+(MAT m2)
{
    MAT mt;
    
    mt.creat(rs,cs);

    for(int i=0;i<rs;i++)
    {
        for(int j=0;j<cs;j++)
        {
           mt.m[i][j] = m[i][j] + m2.m[i][j];
        }
    }

    return mt;
}

MAT MAT :: operator-(MAT m2)
{
    MAT mt;

    mt.creat(rs,cs);

    for(int i=0;i<rs;i++)
    {
        for(int j=0;j<cs;j++)
        {
            mt.m[i][j] = m[i][j] - m2.m[i][j];
        }
    }

    return mt;
}

MAT MAT :: operator*(MAT m2)
{
    MAT mt;

    mt.creat(rs,m2.cs);

    for(int i=0;i<rs;i++)
    {
        for(int j=0;j<m2.cs;j++)
        {
            mt.m[i][j]=0;

            for(int k=0;k<m2.rs;k++)
            {
               mt.m[i][j] += m[i][k] * m2.m[k][j];
            }
        }
    }

    return mt;
}


int main()
{
    MAT m1,m2,m3,m4,m5;

    int r1,c1,r2,c2;

    cout<<"\n Enter first matrix size : ";
    cin>>r1>>c1;

    m1.creat(r1,c1);

    cout<<"m1 = \n";
    cin>>m1;

    cout<<"\n Enter second matrix size : ";
    cin>>r2>>c2;

    m2.creat(r2,c2);

    cout<<"m2 = \n";
    cin>>m2;
    
    cout<<" m1: "<<endl;
    cout<<m1;

    cout<<" m2: "<<endl;
    cout<<m2;

    cout<<endl<<endl;

    if(r1==r2 && c1==c2)
    {
        m3.creat(r1,c1);

        m3=m1+m2;

        cout<<" m1 + m2 : "<<endl;
        cout<<m3<<endl<<endl;

        m4.creat(r1,c1);

        m4=m1-m2;

        cout<<" m1 - m2 : "<<endl;
        cout<<m4<<endl<<endl;
    }
    else
    {
        cout<<" Summation & Substraction are not possible\n"<<endl
            <<"Two matrices must be same size for summation & substraction\n"<<endl;       
    }

    
    if(c1==r2)
    {
        m5=m1*m2;

        cout<<" m1 X m2 : "<<endl;

        cout<<m5;
    }
    else
    {
        cout<<" Multiplication is not possible\n"<<endl
            <<" column of first matrix must be equal to the row of second matrix \n";
    }

    return 0;
}


