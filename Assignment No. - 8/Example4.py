# Python List and Dictionary

"""
    4. Create a function in python to accept and return multiple arguments.
"""

# Function that returns a tuple
def fun1(str,x) :
    print("\n*** Function returning tuple : ***")
    return ( str+" World" , x+7 )  # returning a tuple


# Function that returns a list
def fun2(lst,x) :
    print("\n*** Function returning list : ***")
    return [ lst+[(2,4)] , x+7.43 ]  # returning a list


# Driver code to test above methods
str = "Hello"
x = 10
tuple1 = fun1(str,x)  # Assign returned tuple
print("\nReturned elements : ",end=" ")
print(tuple1)

lst1 = [1,2,"Pranav",3.4]
x2 = 11.34
list = fun2(lst1,x2)  # Assign returned list
print("\nReturned elements : ",end=" ")
print(list)



