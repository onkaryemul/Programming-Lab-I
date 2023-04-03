// Basics of Object Oriented Programming

/*
  7.Write a Menu driven CPP Program to perform below operations(use separate
	functions for every operation)

	a.Binary to Octal
	b.Octal to Binary
	c.Binary to Hexadecimal
	d.Hexadecimal to Binary
	e.Octal to Hexadecimal
	f.Hexadecimal to Octal
*/

#include<iostream>
#include<string.h>
#include<math.h>
#define MAX 1000
using namespace std;

void binToOct()
{
    long int binary;
    int remainder;

    long int decimal=0,octal=0,i=1;

    cout<<"\nEnter a binary number : ";
    cin>>binary;

  // Convert Binary to Decimal number first

    while(binary!=0)
    {
        remainder=binary%10;

        decimal=decimal + (remainder*i);

        binary=binary/10;

        i=i*2;
    }

  // Then convert Decimal to Octal number

    i=1;

    while(decimal!=0)
    {
        remainder=decimal%8;

        octal=octal + (remainder*i);

        decimal=decimal/8;

        i=i*10;
    }

    cout<<"\nOctal Number : "<<octal<<endl;

}

void octToBin()
{
    char octalNumber[MAX];
    long int i=0;

    cout<<"\nEnter any Octal number : ";
    cin>>octalNumber;

    cout<<"\nBinary value : ";

    while(octalNumber[i])
    {
        switch(octalNumber[i])
        {
            case '0':
                 cout<<"000";
                 break;

            case '1':
                 cout<<"001";
                 break;

            case '2':
                 cout<<"010";
                 break;

            case '3':
                 cout<<"011";
                 break;

            case '4':
                 cout<<"100";
                 break;

            case '5':
                 cout<<"101";
                 break;

            case '6':
                 cout<<"110";
                 break;

            case '7':
                 cout<<"111";
                 break;

            default :
                 cout<<"\nInvalid octal digit "<<octalNumber[i];
                 return;
        }

        i++;
    }
    
    cout<<"\n";

    return;
}

void binToHex()
{
    int hexadecimal[1000],dec=0;

    long int binary;

    int i=1,j,rem;

    cout<<"\nEnter a Binary Number : ";
    cin>>binary;

  // Binary to Decimal
    while(binary>0)
    {
        rem=binary%10;

        dec=dec + (rem*i);

        binary=binary/10;

        i=i*2;
    }

   // Now Decimal to Hexadecimal

    i=0;

    while(dec!=0)
    {
        hexadecimal[i]=dec%16;
        
        dec=dec/16;

        i++;
    }
    
    cout<<"\nHexadecimal value : ";

    for(j=i-1;j>=0;j--)
    {
        if(hexadecimal[j]>9)
        {
            cout<<(char)(hexadecimal[j]+55);
        }
        else
        {
            cout<<hexadecimal[j];  
        }
    }

    return;
}

void hexToBin()
{
    char hexadecimal[MAX];

    long int i=0;

    cout<<"\nEnter any Hexadecimal Number : ";
    cin>>hexadecimal;

    cout<<"\nEquivalent Binary value : ";

    while(hexadecimal[i])
    {
        switch(hexadecimal[i])
        {
            case '0':
                 cout<<"0000";
                 break;

            case '1':
                 cout<<"0001";
                 break;

            case '2':
                 cout<<"0010";
                 break;

            case '3':
                 cout<<"0011";
                 break;

            case '4':
                 cout<<"0100";
                 break;

            case '5':
                 cout<<"0101";
                 break;

            case '6':
                 cout<<"0110";
                 break;

            case '7':
                 cout<<"0111";
                 break;

            case '8':
                 cout<<"1000";
                 break;

            case '9':
                 cout<<"1001";
                 break;

            case 'A':
                  cout<<"1010";
                  break;

            case 'B':
                  cout<<"1011";
                  break;

            case 'C':
                  cout<<"1100";
                  break;

            case 'D':
                  cout<<"1101";
                  break;

            case 'E':
                  cout<<"1110";
                  break;

            case 'F':
                  cout<<"1111";
                  break;

            default:
                  cout<<"\nInvalid hexadecimal digit "<<hexadecimal[i]<<endl;
                  return;
        }

        i++;
    }

    return;
}

void octToHex()
{
    char hex[20],c;

    int n,i=0,decimal=0,rem;

    cout<<"\nEnter octal number : ";
    cin>>n;

  // Octal to Decimal

    while(n!=0)
    {
        rem=n%10;

        n=n/10;

        decimal=decimal+rem*pow(8,i);

        i++;
    }

  // Now Decimal to Hexadecimal

    i=0;

    while(decimal!=0)
    {
        rem=decimal%16;

        switch(rem)
        {
            case 10:
                hex[i]='A';
                break;

            case 11:
                hex[i]='B';
                break;

            case 12:
                hex[i]='C';
                break;

            case 13:
                hex[i]='D';
                break;

            case 14:
                hex[i]='E';
                break;

            case 15:
                hex[i]='F';
                break;

            default:
                hex[i]=rem+'0'; // to make char to int
                break;
        }

        decimal=decimal/16;

        i++;
    }
    
    hex[i]='\0';
    
    i--;

    cout<<"\nHexadecimal Number : ";
    while(i >= 0)
    {
        cout<<hex[i];

        i--;
    }

    cout<<"\n";

    return;
}

void hexToOct()
{
    char hex[17];

    long int decimal=0,place=1;

    int i=0,val,len,octal=0,remainder;

    cout<<"\nEnter any hexadecimal number : ";
    cin>>hex;

  // length of hex digit
    len=strlen(hex);
    len--;

  // hexadecimal to decimal
    for(i=0; hex[i]!='\0' ;i++)
    {
        switch(hex[i])
        {
            case '0':
                  val=0;
                  break;

            case '1':
                  val=1;
                  break;
                
            case '2':
                  val=2;
                  break;

            case '3':
                  val=3;
                  break;

            case '4':
                  val=4;
                  break;

            case '5':
                  val=5;
                  break;

            case '6':
                  val=6;
                  break;

            case '7':
                  val=7;
                  break;

            case '8':
                  val=8;
                  break;

            case '9':
                  val=9;
                  break;

            case 'A':
                  val=10;
                  break;

            case 'B':
                  val=11;
                  break;

            case 'C':
                  val=12;
                  break;

            case 'D':
                  val=13;
                  break;

            case 'E':
                  val=14;
                  break;

            case 'F':
                  val=15;
                  break;
        }

        decimal=decimal + val*pow(16,len);

        len--;
    }

  // Now decimal to Octal
    
    i=1;

    while(decimal != 0)
    {
        remainder=decimal%8;

        octal=octal+(remainder*i);

        decimal=decimal/8;

        i=i*10;
    }

    cout<<"\nOctal Number = "<<octal<<endl;

    return;
}


int main()
{
	int opt;

	while (1)
	{
		cout << "\n\nPress 1 for converting Binary to Octal\n";
		cout << "Press 2 for converting Octal to Binary\n";
		cout << "Press 3 for converting Binary to Hex\n";
		cout << "Press 4 for converting Hex to Binary\n";
		cout << "Press 5 for converting Octal to Hex\n";
		cout << "Press 6 for converting Hex to Octal\n";
		cout << "Press 7 for Exit\n\n";

		cout << "Enter your choice --> ";
		cin >> opt;

		if (opt > 6)
		{
			break;
		}

		cout << endl;
		cout << endl;

		switch (opt)
		{
		case 1:
			binToOct();
			break;

		case 2:
			octToBin();
			break;

		case 3:
			binToHex();
			break;

		case 4:
			hexToBin();
			break;

		case 5:
			octToHex();
			break;

		case 6:
			hexToOct();
			break;
		}
	}

	return 0;
}

