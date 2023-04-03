# Python Basics

"""
   4. Write a python program to assign value to a variable of
      following data type also print its values along with its
      data type.
      a) Numbers
      b) List
      c) Tuple
      d) Byte
      e) Bytearray
      f) Set
      g) Frozenset
      h) Dictionary
"""

# Numbers
print("***  Numbers :  ***")
num1 = 10
print(num1)
print(type(num1))

num2 = 7.54
print(num2)
print(type(num2))

num3 = 2+3j
print(num3)
print(type(num3))
print()

# List
print("***  List :  ***")
list1 = [1,2.5,'Yogesh',[5.47,10,-5]]
print(list1)
print(type(list1))
print()

# Tuple
print("***  Tuple :  ***")
tuple1 = (10,7.54,"Onkar",-5)
print(tuple1)
print(type(tuple1))
print()

# Byte
print("***  Bytes :  ***")
list2 = [10,15,20,25]
byte1 = bytes(list2)
print(byte1)
print("Byte values : ",end=" ")
for i in byte1:
   print(i, end="\t")
print()
print(type(byte1))
print()

# Bytearray
print("***  Bytearray :  ***")
list3 = [10,20,30,40,50]
bytearray1 = bytearray(list3)
print(bytearray1)
print("Bytearray values : ",end=" ")
for i in bytearray1:
   print(i, end="\t")
print()
print(type(bytearray1))
print()

# Set
print("***  Set :  ***")
set1 = {10,20,5,0,6,20}
print(set1)
print(type(set1))
set2 = set("hello")
print(set2)
print(type(set2))
print()

# Frozenset
print("***  Frozenset :  ***")
set3 = {50,60,70,80,72}
frozenset1 = frozenset(set3)
print(frozenset1)
print(type(frozenset1))
print()

# Dictionary
print("***  Dictionary :  ***")
dictionary1 = { 1:'Onkar', 2:'Yogesh', 3:'Pranav'}
print(dictionary1)
print(dictionary1.keys())
print(dictionary1.values())
print(type(dictionary1))
print()


