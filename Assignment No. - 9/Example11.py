# Python Class,File and Exception Handling

"""
    11. Write a program of exception handling which throws an exception using raise
        keyword (there should be multiple raise statements based on certain condition).
"""

# Raise an Exception
try :
    x = int(input("Enter a number between 1 to 100 : "))

    if x > 100 :
        raise ValueError(x)  # Raising an exception

    if x < 1 :
        raise TypeError(x)   # Raising an exception

except ValueError :
    print(x," is out of allowed range")

except TypeError :
    print(x," is not in the allowed range")

else :
    print(x," is within the allowed range")


print("\nOut of try,except and else blocks\n")



