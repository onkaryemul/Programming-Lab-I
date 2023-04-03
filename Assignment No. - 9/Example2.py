# Python Class,File and Exception Handling

"""
    2. Create a Time class and initialize it with hours and minutes.
       1. Make a method addTime which should take two time object and add them.
          E.g.-(2 hour and 50 min)+(1 hr and 20 min) is (4 hr and 10 min)
       2. Make a method displayTime which should print the time.
       3. Make a method DisplayMinute which should display the total minutes in the
          Time. E.g.-(1 hr 2 min) should display 62 minutes.
"""

# Creating class Time
class Time :
   def __init__(self,hours,mins) :
      self.hours = hours
      self.mins = mins

   def addTime(t1,t2) :
      t3 = Time(0,0)

      if t1.mins + t2.mins > 60 :
         t3.hours = int((t1.mins + t2.mins)/60)

      t3.hours = t3.hours + t1.hours + t2.hours
      
      t3.mins = (t1.mins + t2.mins) - (int((t1.mins + t2.mins)/60)*60)

      return t3

   def displayTime(self) :
      print(f"Time is {self.hours} hours and {self.mins} minutes.")

   def displayMinute(self) :
      print((self.hours*60) + self.mins)


# Driver code
a = Time(2,50)
print("\nDisplaying time of a : ",end="")
a.displayTime()

b = Time(1,20)
print("\nDisplaying time of b : ",end="")
b.displayTime()

c = Time.addTime(a,b)
print("\nDisplaying time of c = a + b : ",end="")
c.displayTime()
print("\nTime of c in minutes : ",end="")
c.displayMinute()



