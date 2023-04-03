# Python loops and selection statements

"""
    3. Write a program which to find the grace marks for a student. The user should
       enter the class obtained by the student and the number of subjects he has 
       failed in.
       a) If the student gets first class and the number of subjects he failed in 
          is greater than 3, then he does not get any grace.
       b) If the number of subjects he failed in is less than or equal to 3 then the
          grace is of 5 marks per subject.
       c) If the student gets second class and the number of subjects he failed in is
          greater than 2, then he does not get any grace.
       d) If the number of subjects he failed in is less than or equal to 2 then the
          grace is of 4 marks per subject.
       e) If the student gets third class and the number of subjects he failed in is
          greater than 1, then he does not get any grace.
       f) If the number of subjects he failed in is equal to 1 then the grace is of 
          5 marks per subject.
"""

div = int(input("\nEnter the class obtained by the student : "))

sub = int(input("\nEnter the number of subject in which he has failed : "))
    

match div :   
      
   case 1 : # for first class students
      if sub<=3 :
         print("\nHe got the grace of %d marks\n" %(5*sub))
      else :
         print("\nHe didn't get any grace\n")


   case 2 : # for second class student
      if sub<=2 : 
         print("\nHe got the grace of %d marks\n" %(4*sub))
      else :
         print("\nHe didn't get any grace\n")
      
         
   case 3 : # for third class student
      if sub<=1 :
         print("\nHe got the grace of %d marks\n" %(5*sub))
      else :
         print("\nHe didn't get any grace\n")




