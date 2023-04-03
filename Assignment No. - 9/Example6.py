# Python Class,File and Exception Handling

"""
    6. Write a program using class to accept 3 numbers from user and display largest,
       second largest and smallest number among three.
"""


class python :
    def __init__(self) :
        self.list1 = []

    def input_Numbers(self) :
        print("\n*** Enter 3 numbers : ***\n")

        for i in range(0,3) :
            num = int(input(f"Number {i+1} : "))
            self.list1.append(num)

        self.list1.sort()


    def display_Numbers(self) :
        print("\nLargest Number : ",self.list1[2])
        print("\nSecond Largest Number : ",self.list1[1])
        print("\nSmallest Number : ",self.list1[0])


# Driver code
py = python()

py.input_Numbers()

py.display_Numbers()




