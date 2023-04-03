# Python Class,File and Exception Handling

"""
    10. Write a program for exception handling for studying functionality of else
        and finally statements.
"""

"""
    else block ---->
    The code enters the else block only if the try clause does not raise an exception.
    Else block will execute only when no exception occurs. 

    finally block ---->
    The finally block always executes after normal termination of try block or after
    try block terminates due to some exception. 
    Even if you return in the except block, still the finally block will execute.
"""

# try, except, else, finally blocks
try :
    print("\n*** Inside try block ***")
    x = int(input("\nEnter number x : "))
    y = int(input("\nEnter number y : "))
    z = x/y

# optional block
except ZeroDivisionError :    # Handling of exception (if required)
    print("\n*** Inside except ZeroDivisionError block ***")
    print("\nDivision by 0 not accepted\n")

else :    # execute if no exception
    print("\n*** Inside else block ***")
    print("\nResult: Value of x/y is ",z)

finally :    # Always executed regardless of exception generation
    print("\n*** Inside finally block ***")
    print("\nThis is always executed\n")

print("\nOut of try,except,else and finally blocks\n")




