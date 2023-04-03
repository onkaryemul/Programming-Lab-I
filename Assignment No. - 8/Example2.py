# Python List and Dictionary

"""
    2. Write a Python script to perform below operations on Dictionary : 
       a. Create a dictionary.
       b. Print keys and values of dictionary.
       c. Search for a specific key, if found, display its value, if not display 
          default value.
       d. Add new key and value.
       e. Remove any element.
       f. Copy this dictionary.
       g. Find out the length of dictionary.
       h. Delete the dictionary.
"""

# Creating a dictionary
dict1 = { 1:"Python", 2:"Java", 3:"C", 4:"C++"}
print("\nDictionary : ",dict1)

# Printing keys and values of dictionary
print("Dict key-value are : ")
for key,value in dict1.items() :
   print(key,value)

print( dict1.keys() )
print( dict1.values() )

# Searching for a specific key : 
  # If found, display its value, 
print( "\nValue associated with key 2 is : " , dict1.get( 2, 'Not Found') ) 
  # If not found, display default value
print( "\nValue associated with key 5 is : " , dict1.get( 5, 'Not Found') ) 


# Adding new key and value
dict1[5] = "C#"
dict1[6] = "Javascript"
print("\nAfter adding keys and values, Updated dictionary : " , dict1)

# Removing any element
removed_value = dict1.pop(6,'No key Found')
print("\nRemoving key 6 : The removed key's value is -> ",removed_value)

removed_value = dict1.pop(6,'No key Found')
print("\nAgain removing key 6 : The removed key's value is -> ",removed_value)

# Copying this dictionary
copied_dict = dict1.copy()
print("\nCopied Dict : " ,copied_dict)

# Finding out the length of dictionary
dict1_length = len(dict1)
print("\nLength of Dictionary : " , dict1_length)

# Deleting the dictionary
del dict1
# print(dict1) # this will cause an error because dict1 no longer exits



