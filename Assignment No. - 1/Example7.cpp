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

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void binToOct()
{
	int bin;
	cout << "\t\tBINARY TO OCTAL\n";
	cout << "Enter a Binary Number --> ";
	cin >> bin;

	int octalNumber = 0, decimalNumber = 0, i = 0;

	while (bin != 0)
	{
		decimalNumber += (bin % 10) * pow(2, i);
		++i;
		bin /= 10;
	}

	i = 1;

	while (decimalNumber != 0)
	{
		octalNumber += (decimalNumber % 8) * i;
		decimalNumber /= 8;
		i *= 10;
	}
	cout << "The Octal form is --> " << octalNumber << "\n";
}

void octToBin()
{
	int octalNumber;
	cout << "\t\tOCTAL TO BINARY\n";
	cout << "Enter a Octal Number --> ";
	cin >> octalNumber;
	int decimalNumber = 0, i = 0;
	long long binaryNumber = 0;

	while (octalNumber != 0)
	{
		decimalNumber += (octalNumber % 10) * pow(8, i);
		++i;
		octalNumber /= 10;
	}

	i = 1;

	while (decimalNumber != 0)
	{
		binaryNumber += (decimalNumber % 2) * i;
		decimalNumber /= 2;
		i *= 10;
	}

	cout << "The Binary form is --> " << binaryNumber << "\n";
}

void binToHex()
{
	cout << "\t\tBINARY TO HEX\n";
	int binaryNum, hex = 0, mul = 1, chk = 1, rem, i = 0;
	char hexDecNum[20];

	cout << "Enter any Binary Number --> ";
	cin >> binaryNum;

	while (binaryNum != 0)
	{
		rem = binaryNum % 10;
		hex = hex + (rem * mul);
		if (chk % 4 == 0)
		{
			if (hex < 10)
				hexDecNum[i] = hex + 48;
			else
				hexDecNum[i] = hex + 55;

			mul = 1;
			hex = 0;
			chk = 1;
			i++;
		}
		else
		{
			mul = mul * 2;
			chk++;
		}
		binaryNum = binaryNum / 10;
	}

	if (chk != 1)
		hexDecNum[i] = hex + 48;

	if (chk == 1)
		i--;

	cout << "The Hex form is --> ";
	for (i = i; i >= 0; i--)
		cout << hexDecNum[i];
}

void hexToBin()
{
	cout << "\t\tHEX TO BINARY\n";
	int i = 0;
	char hexDecNum[10];

	cout << "Enter the Hexadecimal Number: ";
	cin >> hexDecNum;

	cout << "\nThe Binary form is --> ";
	while (hexDecNum[i])
	{
		switch (hexDecNum[i])
		{
		case '0':
			cout << "0000";
			break;

		case '1':
			cout << "0001";
			break;

		case '2':
			cout << "0010";
			break;

		case '3':
			cout << "0011";
			break;

		case '4':
			cout << "0100";
			break;

		case '5':
			cout << "0101";
			break;

		case '6':
			cout << "0110";
			break;

		case '7':
			cout << "0111";
			break;

		case '8':
			cout << "1000";
			break;

		case '9':
			cout << "1001";
			break;

		case 'A':
		case 'a':
			cout << "1010";
			break;

		case 'B':
		case 'b':
			cout << "1011";
			break;

		case 'C':
		case 'c':
			cout << "1100";
			break;

		case 'D':
		case 'd':
			cout << "1101";
			break;

		case 'E':
		case 'e':
			cout << "1110";
			break;

		case 'F':
		case 'f':
			cout << "1111";
			break;

		default:
			cout << "--Invalid Hex Digit (" << hexDecNum[i] << ")--";
		}
		i++;
	}

	cout << "\n";
}

void octToHex()
{
	cout << "\t\tOCTAL TO HEX\n";
	int octalNum, rev = 0, rem, chk = 0, hex = 0, mul = 1, i = 0, k = 0;
	char binaryNum[40] = "", hexnum[40];

	cout << "Enter any Octal Number: ";
	cin >> octalNum;

	while (octalNum != 0)
	{
		rem = octalNum % 10;

		if (rem > 7)
		{
			chk++;
			break;
		}

		rev = (rev * 10) + rem;
		octalNum = octalNum / 10;
	}

	if (chk == 0)
	{
		octalNum = rev;

		while (octalNum != 0)
		{
			rem = octalNum % 10;
			switch (rem)
			{
			case 0:
				strcat(binaryNum, "000");
				break;

			case 1:
				strcat(binaryNum, "001");
				break;

			case 2:
				strcat(binaryNum, "010");
				break;

			case 3:
				strcat(binaryNum, "011");
				break;

			case 4:
				strcat(binaryNum, "100");
				break;

			case 5:
				strcat(binaryNum, "101");
				break;

			case 6:
				strcat(binaryNum, "110");
				break;

			case 7:
				strcat(binaryNum, "111");
				break;
			}
			octalNum = octalNum / 10;
		}

		while (binaryNum[k] != '\0')
			k++;

		chk = 1;
		k--;

		while (k >= 0)
		{
			if (binaryNum[k] == '0')
				rem = 0;
			else
				rem = 1;

			hex = hex + (rem * mul);

			if (chk % 4 == 0)
			{
				if (hex < 10)
					hexnum[i] = hex + 48;
				else
					hexnum[i] = hex + 55;
				mul = 1;
				hex = 0;
				chk = 1;
				i++;
			}
			else
			{
				mul = mul * 2;
				chk++;
			}
			k--;
		}

		if (chk != 1)
			hexnum[i] = hex + 48;

		if (chk == 1)
			i--;

		cout << "\nThe Hex form is --> ";
		chk = 0;

		for (i = i; i >= 0; i--)
		{
			if (hexnum[i] == '0' && chk == 0)
			{
				chk++;
				continue;
			}
			else
				cout << hexnum[i];
		}
	}
	else
		cout << "\nInvalid Octal Digit " << rem;

	cout << endl;
}

void hexToOct()
{
	cout << "\t\tHEX TO OCTAL\n\n";
	int decimalNum = 0, octalNum[30], rem, i = 0, len = 0;
	char hexDecNum[10];

	cout << "Enter the Hexadecimal Number: ";
	cin >> hexDecNum;

	while (hexDecNum[i] != '\0')
	{
		len++;
		i++;
	}

	len--;
	i = 0;

	while (len >= 0)
	{
		rem = hexDecNum[len];

		if (rem >= 48 && rem <= 57)
			rem = rem - 48;
		else if (rem >= 65 && rem <= 70)
			rem = rem - 55;
		else if (rem >= 97 && rem <= 102)
			rem = rem - 87;
		else
		{
			cout << "\nInvalid Hex Digit!";
			cout << endl;
			return;
		}
		decimalNum = decimalNum + (rem * pow(16, i));
		len--;
		i++;
	}

	i = 0;

	while (decimalNum != 0)
	{
		octalNum[i] = decimalNum % 8;
		i++;
		decimalNum = decimalNum / 8;
	}

	cout << "\nThe Octal form is --> ";

	for (i = (i - 1); i >= 0; i--)
		cout << octalNum[i];

	cout << endl;
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
