# Python loops and selection statements

"""
    6. A local biologist needs a program to predict population growth. The inputs
       would be the initial number of organisms, the rate of growth (a real number
       greater than 0), the number of hours it takes to achieve this rate, and a 
       number of hours during which the population grows. For example, one might 
       start with a population of 500 organisms, a growth rate of 2, and a growth
       period to achieve this rate of 6 hours. Assuming that none of the organisms 
       die, this would imply that this population would double in size every 6 hours.
       Thus, after allowing 6 hours for growth, we would have 1000 organisms, and
       after 12 hours, we would have 2000 organisms. Write a program that takes 
       these inputs and displays a prediction of the total population.
"""

import math

def prediction() :
    initialNumber = int(input("\nEnter the initial number of organisms : "))
    rateGrowth = float(input("\nEnter the rate of growth [a real number > 1] : "))

    while rateGrowth < 1 :
        print("\nInvalid...growth rate.\n")
        rateGrowth = float(input("\nEnter the rate of growth [a real number > 1] : "))

    numberHours = int(input("\nEnter the number of hours to achieve the rate of growth : "))
    totalHours = int(input("\nEnter the total hours of growth : "))

    tp = initialNumber
    hours = 1

    while(hours < totalHours) :
        tp *= rateGrowth
        hours += numberHours

    print("\nPrediction : The total population would be " + str(int(tp)))


# calling prediction()
prediction()



