# Python loops and selection statements

"""
    2. A cashier has currency notes of denominations 10, 50 and 100. If the amount
       to be withdrawn is input through the keyboard in hundreds, find the total
       number of currency notes of each denomination the cashier will have to give
       to the withdrawer.
"""

def get_Notes(amt):
    hundred = amt/100
    amt = amt%100
    fifty = amt/50
    amt = amt%50
    ten = amt/10
    print("\nTotal No. of Hundred Notes : %d" %(hundred) )
    print("\nTotal No. of Fifty Notes : %d" %(fifty) )
    print("\nTotal No. of Ten Notes : %d" %(ten) )
    print('''\nThe cashier will have to give %d notes of 100 , %d notes of 50 , %d notes of 10.\n''' %(hundred,fifty,ten) )


amt = int(input("Input the amount to be withdrawn : "))
get_Notes(amt)



