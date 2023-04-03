# Python Class,File and Exception Handling

"""
    1. Create a Temperature class. Make two methods :
       1. ConvertFahrenheit - It will take Celsius and will print it into Fahrenheit.
       2. ConvertCelsius - It will take Fahrenheit and will convert it into Celsius.
"""

# Creating class Temperature
class Temperature :
    def convertFahrenhiet(self,celsius) :
        return (celsius*(9/5))+32

    def convertCelsius(self,fahrenheit) :
        return (fahrenheit-32)*(5/9)


# Driver code
temp = Temperature()

cel = float(input("\nEnter temperature in  degree celsius : "))
print("Its equivalent temperature in degree fahrenhiet is %.2f" %temp.convertFahrenhiet(cel))

fahr = float(input("\nEnter temperature in degree fahrenhiet : "))
print("Its euivalent temperature in degree celsius is %.2f" %temp.convertCelsius(103))





