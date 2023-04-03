# Python Class,File and Exception Handling

"""
    5. Write a program in python for binary search using class
"""


class python :
    def __init__(self) :
        self.list1 = []

    def input_Numbers(self) :
        print("\n*** Enter 10 Numbers : ***\n")

        for i in range(0,10) :
            num = int(input(f"\nEnter Number {i+1} : "))
            self.list1.append(num)

        self.list1.sort()

    
    def binary_search(self) :
        print("\nInputed numbes in ascending order : ",self.list1)

        sv = int(input("\nEnter Number to be search : "))

        low = 0
        high = len(self.list1)-1
        mid = 0

        while low<=high :
            mid = (high+low) // 2   # for getting integer as a result

            # Check if n is present at mid
            if self.list1[mid] < sv : # If n is greater, ignore left half   
                low = mid + 1
            elif self.list1[mid] > sv :  # If n is smaller, ignore right half
                high = mid - 1
            else :  # means x is present at mid
                return mid

        return -1  # element was not present in the list, return -1


# Driver code
py = python()

py.input_Numbers()

result = py.binary_search()

if result != -1 :
    print("\nNumber is present at index : " , str(result))
else :
    print("\nNumber is not present in list1")


       

