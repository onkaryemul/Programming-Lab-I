# Python loops and selection statements

"""
    5. Write a loop that counts the number of space characters in a  string. Recall
       that the space character is represented as ''.
"""

# function that return space count
def check_space(string) :
    
    count = 0  # counter
    
    for i in range(0,len(string)) :  
        if string[i] == ' ' :  # Check each char is blank or not
            count += 1

    return count


string = input("Enter string : ")

print(f"\nNumber of spaces : { check_space(string) } ")


