// Basics of Object Oriented Programming

/*
   5.Write a CPP Program to Find Frequency(count) of vowels and consonants(character wise)
      in below String:
      "CPP is easy and great and Python is also great"
*/

#include <iostream>
using namespace std;

int main()
{
    int vowels = 0;
    int consonants = 0;

    char str[50] = "CPP is easy and great and Python is also great";

    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            vowels++;
        }
        else
        {
            if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
            {
                consonants++;
            }
        }

        i++;
    }

    cout << "\nVowels : " << vowels << endl;
    cout << "Consonants : " << consonants << endl;

    return 0;
}