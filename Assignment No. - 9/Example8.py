# Python Class,File and Exception Handling

"""
    8. Perform below operations on any text file.
          a. Open (using create mode)
          b. Read (using read(),readLine() and for loop)
          c. Write (using append mode as well as write mode)
          d. Close
          e. Delete
"""


import os  # importing os library

# Opening a text file using create mode
print("\n*** OPENING A TEXT FILE : ***\n")
fp = open('sample.txt','r')  # Creating a empty "sample.txt" file in current directory
filename = fp.name
print("\nName of the file : ",filename)


# Reading a text file using read(), readLine() and for loop
print("\n******** READING A TEXT FILE : ********\n")
fr = open('sample.txt','r')

content = fr.read()  # Using read()
print("\n*** Using read() : ***\n")
print(content)

fr.close()

with open('sample.txt','r') as f :
    print("\n*** Using readline() : ***\n")
    while True :
        line = f.readline()   # Using readline()
        if not line :
            break
        print(line,end="")
    print()

with open('sample.txt') as f :  # By  default 'r' mode 
    print("\n*** Using for loop : ***\n")
    # More concise way to read a text file line by line
    for line in f:    # Using for loop
        print(line,end="")
    print()


# Writing to a text file using append mode as well as write mode
print("\n******** WRITING TO A TEXT FILE : ********\n")

    # Using append mode
print("\n*** Using append mode : ***\n")
with open('sample.txt','a') as f :  # Writing to a text file using append mode
    f.write("\nThank You!")

print("After appending to the file , contents of the file : ")
with open('sample.txt','r') as f:
    print(f.read())

    # Using write mode
print("\n*** Using write mode : ***")
with open('sample.txt','w') as f :  # Writing to a text file using write mode
    f.write("Good Bye!")

print("After writing to the file , contents of the file : ")
with open('sample.txt','r') as f:
    print(f.read())


# Closing a text file
fp.close()


# Deleting a text file
print(f"\nStarting the removal of the file {filename}!")

os.remove(filename)

print("The file deletion is successfully completed !!\n")




