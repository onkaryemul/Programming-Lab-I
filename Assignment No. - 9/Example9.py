# Python Class,File and Exception Handling

"""
    9. Write a program for exception handling which contains single try block and
       multiple except blocks.
"""

# Multiple except Blocks
try :
    a = int(input("\nEnter number a : "))
    b = int(input("\nEnter number b : "))
    print("\nResult: Value of a/b is ",a/b)

# optional block
except ValueError :   # Handling of exception (if required)
    print("\nValueError : Unsupported operation\n")

# optional block 
except ZeroDivisionError :   # Handling of exception (if required)
    print("\nZeroDivisionError : Division by zero not allowed\n")



print("\nOut of try except blocks\n")



