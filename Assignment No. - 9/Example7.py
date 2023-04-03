# Python Class,File and Exception Handling

"""
    7. Write a program using class to read 3 values of a,b and c and calculate value
       of X as  X = a/b - c
"""


class python :
    def input_Numbers(self) :
        print("\n*** Reading values of a,b and c : ***\n")

        self.a = int(input("\n Enter value of a : "))
        self.b = int(input("\nEnter value of b : "))
        self.c = int(input("\nEnter value of c : "))

    def calculate_X(self):
        self.X = self.a/self.b - self.c
        return self.X
        

# Driver code
py = python()

py.input_Numbers()

print(f"\nResult --> Value of X : {py.calculate_X()}")




