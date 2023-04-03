# Python List and Dictionary

"""
    1. Write a Python script to perform below operations on list :
       a. Initialize a list lst=[ 1.5,"Python",-5,4,0.8,-3.2,'C++' ]
       b. Add 0.8 to the list.
       c. Add [4,1.5,6,0.8] to the existing list.
       d. Insert any element at position 2.
       e. Remove 'C++' from the list.
       f. Remove element at position 5.
       g. Find out the index of element 5.
       h. Find out the occurence of element 4.
       i. Slice the list from 2nd to 6th position.
       j. Reverse the list.
       k. Create a copy of this list and display.
"""

# Initializing list
lst = [ 1.5,"Python",-5,4,0.8,-3.2,'C++']
print("\nAfter Initializing, List : ",lst)

# Adding 0.8 to the list
lst.append(0.8)
print("\nAfter appending 0.8 to the list, List : ",lst)

# Adding [4,1.5,6,0.8] to the existing list
lst.extend([4,1.5,6,0.8])
print("\nAfter adding [4,1.5,6,0.8] to the list, List : ",lst)

# Insert any element at position 2
index = 2
ele = input("\nEnter any element to insert at position 2 : ")
lst.insert(index,ele)
print(f"After inserting {ele} at position 2, List : ",lst)

# Removing 'C++' from the list
lst.remove('C++')
print("\nAfter removing 'C++' from list, List : ",lst)

# Removing element at position 5
removed_ele = lst.pop(5)
print("\nRemoved element at position 5 : ",removed_ele)
print("\After removing element at position 5 , List : ",lst)

# Finding out the index of element 5
try :
    index = lst.index(5)
    print("\nIndex of element 5 : ",index)
except ValueError :
    print("\nElement 5 is not present in the list\n")
  

# Find out the occurence of element 4
list_size = len(lst)

print("\nElement 4 has occured at indices : ",end=" ")
for index in range(0,list_size) :
    if lst[index] == 4 :
        print(index , end="  ")

print("\nElement 4 has occured %d times\n" %lst.count(4))


# Slicing the list from 2nd to 6th position
print("\nAfter slicing , the list from 2nd to 6th position --> ",lst[2:6])

# Reversing the list
print("\nBefore reversing , List : ",lst)
lst.reverse()
print("After using reverse() , List : ",lst)

# Creating a copy of this list and display
copy_lst = lst.copy()   # list.copy() returns a shallow copy of a list
# A shallow copy means any modification in the new list won't be reflected in the original list
print("\nOriginal List : ",lst)
print("Copied List : ",copy_lst)



