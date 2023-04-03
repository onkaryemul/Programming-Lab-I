# Python GUI

"""
    2. Write a program that reads a text file and creates another file that is
       identical except that every sequence of consecutive blank spaces is replaced
       by a single space. (Perform write operation on other file)
"""


with open("output.txt","w") as outFile :
    with open("input.txt","r") as inFile :
        for line in inFile :
            newLine = ""
            for ch in line.split() :
                if ch != "" :
                    newLine += ch + " "

            outFile.write(newLine + "\n")



