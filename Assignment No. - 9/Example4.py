# Python Class,File and Exception Handling

"""
    4. Write a Python class to get all possible unique subsets from a set of distinct 
       integers. Go to the editor
       Input: [4,5,6]
       Output: [[],[6],[5],[5,6],[4],[4,6],[4,5],[4,5,6]]
"""


class python :
    def sub_sets(self,sset) :
        return self.subsetsRecur([], sorted(sset))

    def subsetsRecur(self, current, sset) :
        if sset :
            return self.subsetsRecur(current, sset[1:]) + self.subsetsRecur(current + [sset[0]], sset[1:])
        return [current]


# Driver code
a = []

n = int(input("\nEnter number of elements of list : "))

for i in range(0,n) :
    b = int(input("\nEnter element : "))
    a.append(b)

print("\nInput Set : ",a)
print("\nSubsets : ",python().sub_sets(a))

# print(python().sub_sets([4,5,6]))



