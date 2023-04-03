# Python List and Dictionary

"""
    3. Create a function in python to perform swapping of two numbers using
       a. Temporary variable
       b. No Temporary variable
"""

# Function to swap two numbers Using a Temporary Variable
def swap_Temp() :
    print("\n*** Swapping two numbers Using a Temporary Variable : ***\n")
    # Taking inputs from the user
    x = input("Enter value of x : ")
    y = input("Enter value of y : ")

    # Creating a temporary variable and swap the values
    temp = x
    x = y
    y = temp

    print("Value of x after swapping : ",x)
    print("Value of y after swapping : ",y)
    print()


# Function to swap two numbers Without using Temporary Variable
def swap_NoTemp() :
    print("\n*** Swapping two numbers Without using Temporary Variable : ***\n")
    # Taking inputs from the user
    x = input("Enter value of x : ")
    y = input("Enter value of y : ")

    # Comma operator
    x, y = y, x   # Simple construct to swap variables
    
    print("Value of x afer swapping : ",x)
    print("Value of y after swapping : ",y)
    print()

    """
    # Swapping of two variables using arithmetic operations
    x = x + y
    y = x - y
    x = x - y

    print("Value of x afer swapping : ",x)
    print("Value of y after swapping : ",y)
    
    # Swapping of two numbers using multiplication operator
    x = x * y
    y = x / y
    x = x / y

    print("Value of x afer swapping : ",x)
    print("Value of y after swapping : ",y)
    """


# driver code
swap_Temp()  # function call

swap_NoTemp()  # function call



