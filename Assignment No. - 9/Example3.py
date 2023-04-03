# Python Class,File and Exception Handling

"""
    3. Write a Python class to convert an integer to a roman numeral.
"""


class python :
    def int_to_Roman(self,num) :
        val = [
                 1000, 900, 500, 400,
                 100,90,50,40,
                 10,9,5,4,
                 1
              ]

        syb = [
                 "M", "CM", "D", "CD",
                 "C", "XC", "L", "XL",
                 "X", "IX", "V", "IV",
                 "I"
              ]


        roman_num = ''

        i = 0

        while num > 0 :
            #  // ---> floor division ---> Result after division : integer
            for _ in range(num // val[i]) : 
                roman_num += syb[i]
                num -= val[i]
            i += 1

        return roman_num


# Driver code
print("\nInteger 4 in roman : " , python().int_to_Roman(4))
print("\nInteger 3549 in roman : " , python().int_to_Roman(3549))

num = int(input("\nEnter an integer : "))
print(python().int_to_Roman(num))



