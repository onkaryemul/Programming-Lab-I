# Python Basics

"""
   6. Write a program to insert details from user(Height,weight)
      and display BMI value.
"""

weight = float(input("Enter your weight in kg : "))
height = float(input("Enter your height in meters : "))

bmi = weight / (height * height)

print("The BMI is " + str(bmi))