# Python Basics

"""
   5. Write a program to convert Km into meters,centimeters and
      millimeter using python.
"""


kilometers = float(input("Enter kilometers : "))

meters = kilometers * 1000
centimeters = kilometers * 100000
millimeter = kilometers * 1000000

print(f"{kilometers} km = {meters} m")
print(f"{kilometers} km = {centimeters} cm")
print(f"{kilometers} km = {millimeter} mm")


