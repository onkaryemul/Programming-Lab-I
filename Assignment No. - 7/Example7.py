# Python loops and selection statements

"""
    7. Write a python program to print following pattern as output.
       

     *
    ***
   *****
  *******
 *********
    a)
 
 *********
  *******
   *****
    ***
     *
    b)

           
     *     
    ***    
   *****   
  *******  
 ********* 
  *******  
   *****   
    ***    
     *     
     c)     


**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********
    d)


*
**
***
****
*****
    e)


*****
****
***
**
*
    f)


    *
   **
  ***
 ****
*****
    g)
 

*****
 ****
  ***
   **
    *
    h)




    *    
   * *   
  *   *  
 *     * 
*       *
 *     * 
  *   *  
   * *   
    *    
    i)


"""

# Pattern 1
print("\nPattern 1 : \n")
inc = 1
for x in range(5,0,-1) :
    for y in range(x,0,-1) :
        print(" ",end="")
    print("*" * inc)
    inc += 2

print()

# Pattern 2
print("\nPattern 2 : \n")
decr = 9
for x in range(5,0,-1) :
    for y in range(x,5) :
        print(" ",end="")
    print("*" * decr)
    decr -= 2

print()

# Pattern 3
print("\nPattern 3 : ")
n = 11
d = n/2 + 1
for x in range(1,n+1) :
    for y in range(1,n+1) :
        if (y>=d)!=0 and y<=n-d+1 :
            print("*",end="")
        else :
            print(" ",end="")
    if x<= n/2 :
        d -= 1
    else :
        d += 1
    print()

# Pattern 4
print("\nPattern 4 : \n")
n = 10  # size odd
c1 = (n-1)/2  # cond
c2 = 3 * n/2 -1  # cond

for x in range(0,n) :
    for y in range(0,n) :
        if( x+y<=c1 or x-y>=c1 or y-x>=c1 or x+y>=c2 ) :
            print("*",end="")  # *space
        else :
            print(" ",end="")  # two spaces
    print()

# Pattern 5
print("\nPattern 5 : \n")
for x in range(1,6) :
    for y in range(1,x+1) :
        print("*",end="")
    print()

# Pattern 6
print("\nPattern 6 : \n")
for x in range(1,6) :
    for y in range(6,x,-1) :
        print("*",end="")
    print()

# Pattern 7
print("\nPattern 7 : \n")
for x in range(1,6) :
    for y in range(5,x,-1) :
        print(" ",end="")
    for z in range(0,x) :
        print("*",end="")
    print()

"""
# Another logic 
for x in range(1,6) :
    for y in range(5,0,-1) :
        if x>=y :
            print("*",end=")
        else :
            print(" ",end="")
    print()

"""

# Pattern 8
print("\nPattern 8 : \n")
for x in range(5,0,-1) :
    for y in range(x,5) :
        print(" ",end="")
    for z in range(0,x) :
        print("*",end="")
    print()

"""
# Another logic
for x in range(5,0,-1) :
    for y in range(5,0,-1) :
        if x>=y :
            print("*",end="")
        else :
            print(" ",end="")
    print()
           
"""

# Pattern 9
print("\nPattern 9 : \n")
n = 9  # size
px = int(n/2 + 1)
for x in range(1,n+1) :
    for y in range(1,n+1) :
        if y == px or y == n-px+1 :
            print("*",end="")
        else :
            print(" ",end="")
    if x<=n/2 :
        px -= 1
    else :
        px += 1
    print()

print()



