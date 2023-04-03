# Python loops and selection statements

"""
    1. In a town, the percentage of men is 52. The percentage of total literacy is 48.
       If total percentage of literate men is 35 of the total population, write a 
       program in python to find the total number of illiterate men and women if the
       population of the town is 80,000.
"""

total_population = 80000
total_men = (52/100)*total_population
total_women = total_population - total_men

total_literate = (48/100)*total_population
literate_men = (35/100)*total_men
literate_women = total_literate - literate_men

illiterate_men = total_men - literate_men
illiterate_women = total_women - literate_women

print("Total Population : %d " %total_population)
print("Total Mens : %d " %total_men)
print("Total Womens : %d " %total_women)

print("Total Literacy : %d " %total_literate)
print("Total Literacy in Mens : %d " %literate_men)
print("Total Literacy in Womens : %d " %literate_women)

print("Total number of illiterate Men : %d " %illiterate_men)
print("Total number of illiterate Women : %d " %illiterate_women)



